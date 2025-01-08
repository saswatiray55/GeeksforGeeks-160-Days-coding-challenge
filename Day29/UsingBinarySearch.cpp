#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int>& arr)
{
    int n = arr.size();
    int low = 0, high = n-1;
    while(low < high)
    {
        if(arr[low] < arr[high])
            return arr[low];
        int mid = (low+high) /2;

        if(arr[mid] > arr[high])
            low = mid +1;
        else
            high = mid;
    }
    return arr[low];

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
    cout << findMin(arr);
    return 0;
}