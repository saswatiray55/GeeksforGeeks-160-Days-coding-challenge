#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void nextPermutation(vector<int>& arr)
{
    next_permutation(arr.begin(), arr.end());
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

    nextPermutation(arr);

    for(int i : arr)
    {
        cout << i <<" ";
    }

    return 0;
}