#include <bits/stdc++.h>
using namespace std;

vector<int> countDistinct(vector<int> &arr, int k) 
{
    int n = arr.size();
    vector<int> res;
    unordered_map<int, int> freq;
    for(int i = 0; i< k; i++)
    {
        freq[arr[i]] += 1;
    }
    res.push_back(freq.size());
    for(int i =k; i <n; i++)
    {
        freq[arr[i]] +=1;
        freq[arr[i - k]] -= 1;
        
        if(freq[arr[i-k]] == 0)
        {
            freq.erase(arr [i - k]);
        }
        res.push_back(freq.size());
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
    vector<int> result = countDistinct(arr, target);
    for(int i : result)
    {
        cout << i << " ";
    }
    
    return 0;
}

/*
Time Complexity: O(n)
Space Complexity: O(k)*/