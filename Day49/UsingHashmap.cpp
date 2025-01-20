#include <bits/stdc++.h>
using namespace std;

int countSubarrays(vector<int> &arr, int k)
{
    
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
    int result = countSubarrays(arr, k);
    cout << result;
    
    return 0;
}

/*
Time Complexity: O(n)
Space Complexity: O(n)*/