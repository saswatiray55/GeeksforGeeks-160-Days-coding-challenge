#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &arr, int k, int pageLimit)
{
    int cnt = 1;
    int pageSum = 0;
    for(int i =0; i <arr.size(); i++)
    {
        if(pageSum + arr[i] > pageLimit)
        {
            cnt++;
            pageSum = arr[i];
        }
        else
        {
            pageSum += arr[i];
        }
    }
    return ( cnt <= k);
}

int findPages(vector<int> &arr, int k)
{
    if(k > arr.size())
        return -1;
    
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    int res = -1;
    
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        if(check(arr, k, mid))
        {
            res = mid;
            high = mid - 1;
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

    int ans = findPages(arr, key);
    cout << ans << endl;
}