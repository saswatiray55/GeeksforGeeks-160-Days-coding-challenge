#include <bits/stdc++.h>
using namespace std;

int findEquilibrium(vector<int> &arr)
{
    int prefSum = 0, total = 0;
    for(int ele : arr)
    {
        total += ele;
    }
    for(int privot = 0; privot < arr.size(); privot++)
    {
        int suffSum = total - prefSum - arr[privot];
        if(prefSum == suffSum)
        {
            return privot;
        }
        prefSum += arr[privot];
    }
    return -1;
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
    int result = findEquilibrium(arr);
    cout << result << endl;
    return 0;
}

/*
Time Complexity: O(n)
Space Complexity: O(1)*/