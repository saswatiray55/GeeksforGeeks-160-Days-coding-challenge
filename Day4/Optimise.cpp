#include <iostream>
#include  <vector>
#include <algorithm>
using namespace std;

void rotateArr(vector<int>& arr, int d)
{
    int n = arr.size();

    d = d%n;

    reverse(arr.begin(), arr.begin()+d);

    //The reverse function reverses the elements in the range [arr.begin(), arr.begin() + d) 
    //(from the start of the vector up to but not including the d-th element).
    
    reverse(arr.begin()+d, arr.end());

    reverse(arr.begin(), arr.end());
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
Space Complexity = 0(1)*/