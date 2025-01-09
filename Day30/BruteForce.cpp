#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int key)
{
    int n = arr.size();
    int result = -1;
    for(int i = 0; i<n; i++)
    {
        if(key == arr[i])
        {
            result = i;
        }
    }
    return result;

}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vector<int> arr;
    for(int i = 0; i<n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int key;
    cin >> key;

    int ans = search(arr, n);
    cout << ans << endl;
}

/*
Time Complexity = 0(n)
Space Complexity = 0(1)
*/