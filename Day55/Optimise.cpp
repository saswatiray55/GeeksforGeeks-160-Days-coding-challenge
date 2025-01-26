#include <bits/stdc++.h>
using namespace std;

int countTriangles(vector<int>& arr) 
{
    int n = arr.size();
    int res = 0;
    sort(arr.begin(), arr.end());
    for(int i = 2; i<n; i++)
    {
        int left = 0, right = i-1;
        while(left < right)
        {
            if(arr[left] + arr[right] > arr[i])
            {
                res += right - left;
                right--;
            }
            else
            {
                left++;
            }
        }
        
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
    cout << countTriangles(arr);

    return 0;
}

/*
Time Complexity: O(n^2)
Space Complexity: O(1)*/