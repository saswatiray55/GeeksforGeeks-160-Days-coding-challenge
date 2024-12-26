#include <iostream>
#include <vector>

using namespace std;

 int maxProduct(vector<int> &arr)
 {
    int n = arr.size();
    int res = arr[0];

    for(int i = 0; i<n; i++)
    {
        int mul = 1;

        for(int j = i; j <n; j++)
        {
            mul *= arr[j];

            res = max(res, mul);
        }
    }
    return res;
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
Time Complexity = 0(n^2)
Space Complexity = 0(1)
*/