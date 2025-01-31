#include <bits/stdc++.h>
using namespace std;

int findEquilibrium(vector<int> &arr)
{
    int n= arr.size();
    for(int i = 0; i <n; i++)
    {
        int leftSum = 0;
        for(int j =0; j< i; j++)
        {
            leftSum += arr[j];
        }
        int rightSum = 0;
        for(int j = i+1; j<n; j++)
        {
            rightSum = arr[j];
        }
        if(leftSum == rightSum)
        {
            return i;
        }

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
Time Complexity: O(n^2)
Space Complexity: O(1)*/