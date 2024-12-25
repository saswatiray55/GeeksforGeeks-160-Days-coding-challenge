#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int missingNumber(vector<int> &arr)
{
    int n = arr.size();
    for(int i = 0; i<n; i++)
    {
        while(arr[i] >=1 && arr[i]<=n && arr[i] != arr[arr[i]-1])
        {
            swap(arr[i], arr[arr[i] -1]);
        }
    }
    for(int i = 1; i<=n; i++)
    {
        if(i != arr[i-1])
        {
            return i;
        }
    }
    return n+1;

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
    cout << missingNumber(arr);
    return 0;

}
/*
Time Complexity = 0(n)
Space Complexity = 0(1)
*/