#include <bits/stdc++.h>
using namespace std;

vector<int> subarraySum(vector<int> &arr, int target) 
{
    int s= 0 , e = 0;
    vector<int> res;
    int curr = 0;
    for(int i = 0; i<arr.size(); i++)
    {
        curr += arr[i];
        if(curr >= target)
        {
            e = i;
            while(curr > target && s < e)
            {
                curr -= arr[s];
                s++;
            }
            if(curr == target)
            {
                res.push_back(s+1);
                res.push_back(e+1);
                return res;
            }
        }
    }
    return {-1};
    
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
    vector<int> result = subarraySum(arr, target);
    for(int i : result)
    {
        cout << i << " ";
    }
    
    return 0;
}

/*
Time Complexity: O(n)
Space Complexity: O(1)*/