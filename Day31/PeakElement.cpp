#include <iostream>
#include <vector>
using namespace std;

int peakElement(vector<int> &arr)
{
    int n = arr.size();
    if(n == 1)
        return 0;
    if(arr[0] > arr[1])
        return 0;
    if(arr[n-1] > arr[n-2])
        return n-1;
    int low = 1, high = n-2;
        
    while(low <= high)
    {
        int mid = low + (high-low)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
        {
            return mid;
        }
        
        if(arr[mid] < arr[mid+1])
            low = mid+1;
        else
            high = mid -1;
    }
    return 0;

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
    peakElement(arr) ? cout << "True" : cout << "False";
    

    return 0;
}