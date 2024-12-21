#include <iostream>
#include  <vector>
using namespace std;

void rotateArr(vector<int>& arr, int d)
{
    int n = arr.size();

    d = d%n;  

    vector<int> temp;
    for(int i = d; i<n; i++)
    {
        temp.push_back(arr[i]);
    }
    for(int i =0; i<d; i++)
    {
        temp.push_back(arr[i]);
    }
    
    //arr = temp;
    for(int i = 0; i <n; i++)
    {
        arr[i] = temp[i];
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

/*Time Complexity = 0(n)
Space Complexity = 0(n)*/