#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int key)
{
    int low = 0, high = arr.size()-1;
    while(low <= high)
    {
        int mid = low + (high - low)/2;

        if(arr[mid] == key)
        {
            return mid;
        }
        if(arr[mid] >= arr[low])  // left subarray sorted
        {
            if(key >= arr[low] && key < arr[mid])
            {
                high = mid -1;
            }
            else
            {
                low = mid +1;
            }
        }
        else
        {
            if(key > arr[mid] && key <= arr[high])
            {
                low = mid +1;
            }
            else
            {
                high = mid -1;
            }
        }
    }
    return -1;

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
    int key;
    cin >> key;

    int ans = search(arr, key);
    cout << ans << endl;
}

/*
Time Complexity = 0(log(n))
Space Complexity = 0(1)
*/