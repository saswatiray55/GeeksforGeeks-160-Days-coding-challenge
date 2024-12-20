#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void pushZerosToEnd(vector<int>& arr)
{
    int n = arr.size();
    vector<int> temp;
    for(int i = 0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }

    for(int i = temp.size(); i<n; i++)
    {
        temp.push_back(0);
    }
    arr = temp;

} 

int main()
{
    int n;
    cout << "Enter no. of size: ";
    cin >> n;
    vector<int> arr;
    for(int i = 0; i<n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    pushZerosToEnd(arr);

    for(int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}

/* Time Complexity 0(n)
Space Complexity 0(n) */