#include <bits/stdc++.h>
using namespace std;

int countTriangles(vector<int>& arr) 
{
    int n = arr.size();
    int res =0;
    for(int i = 0; i<n ;i++)
    {
        for(int j = i+1; j<n; j++)
        {
            for(int k = j+1; k<n; k++)
            {
                if(arr[i] + arr[j] > arr[k] &&
                arr[j] + arr[k] > arr[i] &&
                arr[k] + arr[i] > arr[j])
                {
                    res++;
                }
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

    vector<int> arr;
    for(int i = 0; i<n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    cout << countTriangles(arr);

    return 0;
}

/*
Time Complexity: O(n^3)
Space Complexity: O(1)*/