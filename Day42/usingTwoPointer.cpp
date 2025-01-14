#include <bits/stdc++.h>
using namespace std;

bool twoSum(vector<int>& arr, int target)
{
    sort(arr.begin(), arr.end());
    int left = 0, right = arr.size()-1;
    while(left < right)
    {
        int sum = arr[left]+ arr[right];
        if(sum == target)
        {
            return true;
        }
        else if(sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return false;

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
    bool result = twoSum(arr, target);
    result ? cout << "True" : cout << "False"; 
    
    return 0;
}

/*
Time Complexity: O(n*log(n))
Space Complexity: O(1)*/