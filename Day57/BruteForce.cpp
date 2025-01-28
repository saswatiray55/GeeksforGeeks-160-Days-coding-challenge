#include <bits/stdc++.h>
using namespace std;

vector<int> countDistinct(vector<int> &arr, int k) 
{
    int n = arr.size();
    vector<int> res;
    for(int i = 0; i<= n-k; i++)
    {
        unordered_set<int> st;
        for(int j= i; j < i+k; j++)
        {
            st.insert(arr[j]);
        }
        res.push_back(st.size());
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
    vector<int> result = countDistinct(arr, target);
    for(int i : result)
    {
        cout << i << " ";
    }
    
    return 0;
}

/*
Time Complexity: O(n*k)
Space Complexity: O(1)*/