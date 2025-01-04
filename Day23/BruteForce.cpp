#include <iostream>
#include <vector>
using namespace std;

int inversionCount(vector<int> &arr)
{
    int n = arr.size();
    int count = 0;
    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[i]> arr[j])
            {
                count++;
            }
        }
    }
    return count;

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
    
    cout << inversionCount(arr) << endl;

    return 0;
}

/*
Time Complexity = 0(n^2)
Space Complexity = 0(1)
*/