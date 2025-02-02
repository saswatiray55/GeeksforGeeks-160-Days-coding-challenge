#include <bits/stdc++.h>
using namespace std;

int maxLen(vector<int> &arr)
{
    unordered_map<int, int> mp;
    int prefSum = 0, res =0;
    for(int i =0; i<arr.size(); i++)
    {
        prefSum += (arr[i] == 0) ? -1 : 1;
        if(prefSum == 0)
        {
            res = i+1;
        }
        if(mp.find(prefSum) != mp.end())
        {
            res = max(res, i-mp[prefSum]);
        }
        else
        {
            mp[prefSum] = i;
        }
    }
    return res;
}


int main()
{
    int n;
    cout << "Enter the Size: ";
    cin >> n;
    vector<int> arr(n);
    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
    int result = maxLen(arr);
    cout << result << endl;
    return 0;
}


/*
Time Complexity: O(n)
Space Complexity: O(n)*/