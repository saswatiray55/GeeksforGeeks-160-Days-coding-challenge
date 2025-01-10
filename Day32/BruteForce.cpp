#include <bits/stdc++.h>
using namespace std;

int kthElement(vector<int>& a, vector<int>& b, int k)
{
    int n = a.size(), m = b.size();
    vector<int> arr(n+m);
    int i = 0, j = 0, d = 0;
    while(i < n && j < m)
    {
        if(a[i] < b[j])
        {
            arr[d++] = a[i++];
        }
        else
        {
            arr[d++] = b[j++];
        }
    }
    while(i < n)
    {
        arr[d++] =a[i++];
    }
    while(j < m)
    {
        arr[d++] = b[j++];
    }
    return arr[k-1];
}

int main()
{
    int n, m;
    cout << "Enter the size for 1st array: ";
    cin >> n;
    vector<int> a;
    for(int i = 0; i<n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    
    cout << "Enter the size for 2nd array: ";
    cin >> m;
    vector<int> b;
    for(int i = 0; i<m; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    int key;
    cin >> key;

    int ans = kthElement(a, b, key);
    cout << ans << endl;
}