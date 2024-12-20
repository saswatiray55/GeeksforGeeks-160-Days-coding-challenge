#include <iostream>
#include  <vector>
#include <algorithm>
using namespace std;

void reverseArr(vector<int> &arr)
{
    int n = arr.size();

    vector<int> temp;

    for(int i =n-1; i>=0; i--)
    {
        temp.push_back(arr[i]);
    }
    arr = temp;
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
    reverseArr(arr);

    for(int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}

/* Time Complexity 0(n)
Space Complexity 0(n) */