#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int> &arr, int target)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int count = 0;
    int left = 0, right = n-1;

    while(left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum < target)
        {
            count += right - left;
            left++;
        }
        else
        {
            right--;
        }
    }
    return count;

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
    int result = countPairs(arr, target);
    cout << result;
    
    return 0;
}

/*
Time Complexity: O(n*logn+n)
Space Complexity: O(1)*/