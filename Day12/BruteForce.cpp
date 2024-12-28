#include <iostream>
#include <vector>

using namespace std;

int circularSubarraySum(vector<int> &arr) {
    int n = arr.size();
    int res = arr[0];
    
    for(int i = 0; i <n; i++)
    {
        int currSum = 0;
        for(int j = 0; j <n; j++)
        {
            int index = (i+j)%n;
            currSum += arr[index];
            res = max(res, currSum);
        }
    }
    return res;        
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
Time Complexity = 0(n^2)
Space Complexity = 0(1)
*/