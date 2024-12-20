//Using Two Pointers - O(n) Time and O(1) Space

#include <iostream>
#include  <vector>

using namespace std;

void reverseArr(vector<int> &arr)
{
    int n = arr.size();
    int left = 0, right = n-1;
    
    while(left < right)
    {
        swap(arr[left], arr[right]);

        left++;
        right--;
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
    reverseArr(arr);

    for(int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}
