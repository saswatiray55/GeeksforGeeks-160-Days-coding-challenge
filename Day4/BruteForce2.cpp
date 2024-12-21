#include <iostream>
#include  <vector>
using namespace std;

void rotateArr(vector<int>& arr, int d)
{
    int n = arr.size();

    for (int i = 0; i < d; i++)
    {
        int first = arr[0];
        for(int j = 0; j<n-1; j++)
        {
            arr[j] = arr[j+1];
        }
        arr[n-1] = first;
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
    int d;
    cin >> d;

    rotateArr(arr,d);

    for(int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}

/*Time Complexity = 0(n*d)
Space Complexity = 0(1)*/