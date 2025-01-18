#include <bits/stdc++.h>
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
    if(index == -1)
    {
        reverse(arr.begin(), arr.end());
        return;
    }
    for(int i = n-1; i > index; i--)
    {
        if(arr[i] > arr[index])
        {
            swap(arr[i], arr[index]);
            break;
        }
    }
    reverse(arr.begin() + index + 1, arr.end());
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

    nextPermutation(arr);

    for(int i : arr)
    {
        cout << i <<" ";
    }

    return 0;
}

/*
Time Complexity = 0(n)
space complexity = 0(1)*/