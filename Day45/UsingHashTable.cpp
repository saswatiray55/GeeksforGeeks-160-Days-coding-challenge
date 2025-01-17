#include<bits/stdc++.h>
using namespace std;
vector<int> intersectionWithDuplicates(vector<int> &a, vector<int> &b)
{
    unordered_set<int> sa(a.begin(), a.end());
    vector<int> res;
    for(int i = 0; i<b.size(); i++)
    {
        if(sa.find(b[i]) != sa.end())
        {
            res.push_back(b[i]);
            sa.erase(b[i]);
        }
    }
    return res;

}

int main()
{
    int n,m;
    cout << "Enter the size of 1st array: " << endl;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++)
    {
        // int x;
        // cin >> x;
        // a.push_back(x);
        cin >> a[i];
    }
    
    cout << "Enter the size of 2nd array: ";
    cin >> m;
    vector <int> b(m);
    for(int i = 0; i<m; i++)
    {
        // int x;
        // cin >> x;
        // b.push_back(x);
        cin >> b[i];
    }

    vector<int> res = intersectionWithDuplicates(a,b);
    for(int i = 0; i<res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;

}