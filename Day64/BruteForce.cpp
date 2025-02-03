#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& arr)
{
     int n = arr.size();
    vector<int> res(n, 1);

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(i != j)
            {
                res[i] *= arr[j];
            }
        }
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
Time Complexity: O(n^2)
Space Complexity: O(1)*/