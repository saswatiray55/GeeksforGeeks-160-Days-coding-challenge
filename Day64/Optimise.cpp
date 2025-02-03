#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& arr)
{
     int n = arr.size();
    vector<int> prefPro(n), suffPro(n), res(n);
    
    prefPro[0] = 1;
    for(int i = 1; i<n; i++)
    {
        prefPro[i] = arr[i-1] * prefPro[i-1];
    }
    
    suffPro[n-1] = 1;
    for(int j = n-2; j>= 0; j--)
    {
        suffPro[j] = arr[j+1] * suffPro[j+1];
    }
    for(int i = 0; i< n; i++)
    {
        res[i] = prefPro[i] * suffPro[i];
    }
    return res;
}


int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    vector<int> result = productExceptSelf(arr);
    for(int i : result)
    {
        cout << i << " ";
    }
    
    return 0;
}


/*
Time Complexity: O(n)
Space Complexity: O(n)*/