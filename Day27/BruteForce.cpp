#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void mergeArrays(vector<int>& a, vector<int>& b) 
{
    for (int i = b.size() - 1; i >= 0; i--) 
    {
        if (a.back() > b[i]) 
        {
            int last = a.back();
            int j = a.size() - 2;
            while (j >= 0 && a[j] > b[i]) {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = b[i];
            b[i] = last;
        }
    }
}

int main() {
    int n1;
    cout << "Enter the 1st array size: ";
    cin >> n1;
    vector<int> a;
    
    for (int i = 0; i < n1; i++) 
    {
        int x;
        cin >> x;
        a.push_back(x);
    
    }

    int n2;
    cout << "Enter the 2nd array size: ";
    cin >> n2;
    vector<int> b;
    
    for (int i = 0; i < n2; i++) 
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    mergeArrays(a, b);

    
    for (int i : a) {
        cout << i << " ";
    }
    cout << "\n";
    for (int i : b) {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}

/*
Time Complexity: O(m * n), where n and m are sizes of a[] and b[] respectively.
Space Complexity: O(1)
*/
