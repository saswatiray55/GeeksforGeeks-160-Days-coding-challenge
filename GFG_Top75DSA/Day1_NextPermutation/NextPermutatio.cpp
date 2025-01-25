/*
Given an array of integers arr[] representing a permutation, implement the next permutation that rearranges the numbers into the lexicographically next greater permutation. If no such permutation exists, rearrange the numbers into the lowest possible order (i.e., sorted in ascending order). 

Note - A permutation of an array of integers refers to a specific arrangement of its elements in a sequence or linear order.

Examples:

Input: arr = [2, 4, 1, 7, 5, 0]
Output: [2, 4, 5, 0, 1, 7]
Explanation: The next permutation of the given array is {2, 4, 5, 0, 1, 7}.
Input: arr = [3, 2, 1]
Output: [1, 2, 3]
Explanation: As arr[] is the last permutation, the next permutation is the lowest one.
Input: arr = [3, 4, 2, 5, 1]
Output: [3, 4, 5, 1, 2]
Explanation: The next permutation of the given array is {3, 4, 5, 1, 2}.
Constraints:
1 ≤ arr.size() ≤ 105
0 ≤ arr[i] ≤ 105
*/

#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& arr)
{
    int n = arr.size();
    int index = -1;
    for(int i = n-2; i>= 0; i--)
    {
        if(arr[i] < arr[i+1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(arr.begin(), arr.end());
        return;
    }
    for(int i = n-1; i> index; i--)
    {
        if(arr[i] > arr[index])
        {
            swap(arr[i], arr[index]);
            break;
        }
    }
    reverse(arr.begin() + index +1, arr.end());
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i< n; i++)
    {
        cin >> arr[i];
    }
    nextPermutation(arr);
    for(int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}

/*
Time Complexity: 0(n)
Space Complexity: 0(1)*/