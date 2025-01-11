//using binary search
#include <bits/stdc++.h>
using namespace std;

int kthMissing(vector<int> &arr, int k)
{
    int n = arr.size();
    int low = 0, high = n-1;
    int res = n+k;
    
    while(low <= high)
    {
        int mid = low +(high - low) /2;
        if(arr[mid] > (mid + k))
        {
            res = mid+k;
            high = mid -1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return res;
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

    int ans = kthMissing(arr, key);
    cout << ans << endl;
}