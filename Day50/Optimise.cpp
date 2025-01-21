#include <bits/stdc++.h>
using namespace std;

long subarrayXor(vector<int> &arr, int k)
{
    int res = 0;
       unordered_map<int, int> mp;
       int prefXor = 0;
       for(int val : arr)
       {
           prefXor ^= val;
           res = res + mp[prefXor ^ k];
           if(prefXor == k)
           {
               res++;
           }
           mp[prefXor]++;
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
    int k;
    cin >> k;
    int result = subarrayXor(arr, k);
    cout << result;
    
    return 0;
}

/*
Time Complexity: O(n)
Space Complexity: O(n)*/