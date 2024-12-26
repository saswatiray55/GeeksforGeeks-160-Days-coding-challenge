#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

 int maxProduct(vector<int> &arr)
 {
    int n = arr.size();
    int currMax = arr[0];
    int currMin = arr[0];
    int maxPro = arr[0];

    for(int i = 1; i<n; i++)
    {
        int temp = max({arr[i], arr[i]*currMax, arr[i]*currMin});
        currMin = min({arr[i], arr[i]*currMax, arr[i]*currMin});

        currMax = temp;

        maxPro = max(maxPro, currMax);
    }
    return maxPro;

 }

int main()
{
    int n ;
    cout << "Enter no of size: ";
    cin >> n;

    vector<int> arr;

    for(int i = 0; i<n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    cout << maxProduct(arr);
    return 0;

}
/*
Time Complexity = 0(n)
Space Complexity = 0(1)
*/