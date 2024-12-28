#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int circularSubarraySum(vector<int> &arr) {
    int n = arr.size();

    int totalSum = 0;
    int currMax = 0, currMin = 0;
    int maxSum = arr[0], minSum = arr[0];
    
    for(int i = 0; i <n; i++)
    {
        currMax = max(currMax + arr[i], arr[i]);
        maxSum = max(maxSum, currMax);
        
        currMin = min(currMin + arr[i], arr[i]);
        minSum = min(minSum, currMin);
        
        totalSum = totalSum + arr[i];
    }

    int normalSum = maxSum;
    int circularSum = totalSum - minSum;
    
    if(minSum == totalSum)
    {
        return normalSum;
    }
    return max(normalSum, circularSum); 
}

int main()
{
    int n ;
    cout << "Enter no of size: ";
    cin >> n;

    vector<int> arr;

    for(int i = 0; i<n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    
    cout << circularSubarraySum(arr);
    return 0;

}
/*
Time Complexity = 0(n)
Space Complexity = 0(1)
*/