#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void pushZerosToEnd(vector<int>& arr)
{
    int n = arr.size();
    int count = 0;

    for(int i = 0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[count], arr[i]);
            count++;
        }
    }
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