#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int> &arr, int target)
{
    int n = arr.size();
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j< n ; j++)
        {
            if(arr[i] + arr[j] < target)
            {
                count++;
            }
        }
    }
    return count;
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
    int result = countPairs(arr, target);
    cout << result;
    
    return 0;
}

/*
Time Complexity: O(n^2)
Space Complexity: O(1)*/