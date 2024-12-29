// Using  Dutch National Flag Algorithm
#include <iostream>
#include  <vector>

using namespace std;

void sort012(vector<int>& arr)
{
    int n = arr.size();
    int start =0, end = n-1, mid = 0;

    while(mid<=end)
    {
        if(arr[mid] == 0)
        {
            swap(arr[mid],arr[start]);
            start++;
            mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[end--]);
        }
    }

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
    sort012(arr);

    for(int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}

/*
Time Complexity = 0(n)
Space Complexity = 0(1)
*/
