#include <bits/stdc++.h>
using namespace std;

vector<int> sumClosest(vector<int>& arr, int target) 
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<int> res;
    int minDiff = INT_MAX;
    
    int left = 0, right = n-1;
    while(left < right)
    {
        int currSum = arr[left] + arr[right];
        
        if(abs(target - currSum) < minDiff)
        {
            minDiff = abs(target - currSum);
            res = {arr[left], arr[right]};
        }
        if(currSum < target)
        {
            left++;
        }
        else if(currSum > target)
        {
            right--;
        }
        else
            return res;
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
    int target;
    cin >> target;
    vector<int> result = sumClosest(arr, target);
    for(auto i : result) 
    {
        cout << i << " ";
    }
    
    return 0;
}

/*
Time Complexity: O(n^2)
Space Complexity: O(1)*/