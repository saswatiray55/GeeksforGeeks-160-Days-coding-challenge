/*Triplet Sum in Array


*/

#include <bits/stdc++.h>
using namespace std;

bool hasTripletSum(vector<int> &arr, int target) 
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for(int i = 0; i<n-2; i++)
    {
        int l = i + 1, r = n-1;
        int requiredSum = target - arr[i];
        while(l < r) 
        {
            if(arr[l] + arr[r] == requiredSum)
                return true;
            if(arr[l] + arr[r] < requiredSum)
                l++;
            else if(arr[l] + arr[r] > requiredSum)
                r--;
        }
    }
    return false;
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
    int target;
    cin >> target;
    hasTripletSum(arr, target) ? cout << "True" : cout << "False";
    
    return 0;
}