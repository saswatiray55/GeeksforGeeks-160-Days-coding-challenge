#include <bits/stdc++.h>
using namespace std;

bool twoSum(vector<int>& arr, int target)
{
    int n = arr.size();
    unordered_map<int, int> mpp;
    for(int i = 0; i<n; i++)
    {
        int num = arr[i];
        int needNum = target - num;
        if(mpp.find(needNum) != mpp.end())
        {
            return true;
        }
        mpp[num] = i;
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