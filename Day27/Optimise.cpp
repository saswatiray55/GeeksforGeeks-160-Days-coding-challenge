#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void mergeArrays(vector<int>& a, vector<int>& b) 
{
    int i = a.size()-1;
    int j = 0;
    while(i>=0 && j < b.size() && a[i] > b[j])
    {
        swap(a[i], b[j]);
        i--;
        j++;
        
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
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
Time Complexity: O((m+n) + m*log(m) + n*log(n)), where n and m are sizes of a[] and b[] respectively.
Space Complexity: O(1)
*/
