#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int> &arr, int target)
{
    int n = arr.size();
    unordered_map<int, int> freq;
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        int num = arr[i];
        int needNum = target - num;
        if(freq.find(needNum) != freq.end())
        {
            count += freq[needNum];    // Add the count of occurrences of the complement
        }
        freq[num]++;    // Add the current number to the map

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
Time Complexity: O(n)
Space Complexity: O(n)*/