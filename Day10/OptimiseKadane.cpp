//Using Kadane`s Algo
#include <iostream>
#include <vector>
using namespace std;

int maxSubarraySum(vector<int> &arr)
{
    int n = arr.size();
    int maxEle = arr[0], res = arr[0];

    for(int i = 1; i<n; i++)
    {
        maxEle = max(maxEle + arr[i], arr[i]);

        res = max(res,maxEle);
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
Time Complexity = 0(n)
Space Complexity = 0(1)
*/