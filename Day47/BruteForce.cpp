#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& arr) 
{
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int res = 1, count = 1;
        
        for(int i = 1; i<n; i++)
        {
            if(arr[i] == arr[i-1])
            {
                continue;
            }
            if(arr[i] == arr[i-1] + 1)
            {
                count++;
            }
            else{
                count = 1;
            }
            res = max(res, count);
            
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
    
    cout << longestConsecutive(arr);
    return 0;

}

/*
Time Complexity: O(n* log(n))
Space Complexity: O(1)*/