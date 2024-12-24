#include <iostream>
#include <vector>
using namespace std;

int maxSubarraySum(vector<int> &arr)
{
    int n = arr.size();
    int res = arr[0];

    for(int i = 0; i<n; i++)
    {
        int currentSum  = 0 ;
        for(int j = i; j < n; j++)
        {
            currentSum += arr[j];
            res = max(res, currentSum);
        }
    }
    return res;
}

int main() {
    int n;
    cout << "Enter no. of size: ";
    cin >> n;

    vector<int> arr;

    for(int i =0; i<n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    cout << maxSubarraySum(arr);
    return 0;
}

/*
Time Complexity = 0(n^2)
Space Complexity = 0(1)
*/