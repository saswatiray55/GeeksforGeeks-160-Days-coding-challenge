#include <bits/stdc++.h>
using namespace std;

int maxLen(vector<int> &arr)
{
    int res = 0;
    int n = arr.size();
    for(int s = 0; s< n; s++)
    {
        int sum = 0;
        for(int e = s; e< n; e++)
        {
            sum += (arr[e] == 0) ? -1 : 1;
            if( sum == 0)
            {
                res = max(res, e - s + 1);
            }
        }
    }return res;
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
    int result = maxLen(arr);
    cout << result << endl;
    return 0;
}


/*
Time Complexity: O(n^2)
Space Complexity: O(1)*/