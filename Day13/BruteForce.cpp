#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int missingNumber(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    int res = 1;

    for(int i = 0; i<arr.size(); i++)
    {
        if(arr[i] == res)
        {
            res++;
        }
        else if(arr[i]> res)
        {
            break;
        }
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
    cout << missingNumber(arr);
    return 0;

}