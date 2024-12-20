#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int secondLarge(vector<int> &arr)
{
    int n = arr.size();
    int large = -1, second = -1;
    for(int i = 0; i<n; i++)
    {
        if(arr[i]> large)
        {
            second = large;
            large = arr[i];
        }
        else if(arr[i] < large && arr[i] > second)
        {
            second = arr[i];
        }
    }
    return second;
}

int main()
{
    int n;
    cout << "Enter no. of size: " << endl;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i<n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int ans = secondLarge(arr);
    cout << ans << endl;

    return 0;
}

// Time complexity = O(n)