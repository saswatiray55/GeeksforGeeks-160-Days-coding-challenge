#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& arr, int k) 
{
    unordered_map<int, int> mp;
    int res = 0;
    int prefSum = 0;
    
    for(int i = 0; i< arr.size(); i++)
    {
        prefSum += arr[i];
        
        if(prefSum == k)
            res = i + 1;
        else if(mp.find(prefSum - k) != mp.end())
            res = max(res, i - mp[prefSum - k]);
        if(mp.find(prefSum) == mp.end())
        {
            mp[prefSum] = i;
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
    int target;
    cin >> target;
    cout << longestSubarray(arr, target);
    
    
    return 0;
}