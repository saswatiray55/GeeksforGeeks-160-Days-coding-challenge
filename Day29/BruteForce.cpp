#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int>& arr)
{
    int n = arr.size();
    int result = arr[0];
    for(int i =1; i<n; i++)
    {
        if(arr[i] < result)
        {
            result = arr[i];
        }
    }
    return result;

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