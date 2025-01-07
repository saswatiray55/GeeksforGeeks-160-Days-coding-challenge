#include <iostream>
#include <vector>
using namespace std;

int countFreq(vector<int>& arr, int target) 
{
    int count = 0;
    for(int i =0; i< arr.size(); i++)
    {
        if(arr[i] == target)
        {
            count++;
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
    int target;
    cin >> target;
    int result = countFreq(arr, target);
    cout << result;
    
    return 0;
}