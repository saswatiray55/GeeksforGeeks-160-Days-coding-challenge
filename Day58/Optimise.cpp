#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR = 26;

int longestUniqueSubstr(string &s) 
{
    int n = s.size();
    int res = 0;
    vector<int> lastIndex(MAX_CHAR, -1);
    int start = 0;
    
    for(int end = 0; end <n; end++)
    {
        start = max(start, lastIndex[s[end] - 'a'] + 1);
        res = max(res,end - start + 1);
        
        lastIndex[s[end] - 'a'] = end;
    }
    return res;
}

int main() {
    string s;
    cout << "Enter the string: ~";
    cin >> s;

    cout << longestUniqueSubstr(s);
    return 0;
}