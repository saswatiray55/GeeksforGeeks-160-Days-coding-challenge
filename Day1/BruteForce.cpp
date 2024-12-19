#include <iostream>
#include  <vector>
#include <algorithm>
using namespace std;

int secondLarge(vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());

    for(int i = n-2; i>=0; i--)
    {
        if(arr[i] != arr[n-1])
        {
            return arr[i];
        }
    }
    return -1;
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
    int ans = secondLarge(arr);
    cout << ans << endl;

    return 0;
}