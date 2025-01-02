#include <iostream>
#include <vector>
using namespace std;

vector<int> computeLPSArray(string& pat)
{
    int n = pat.size();
    vector<int> lps(n);

    int len = 0;
    lps[0] = 0;

}

bool areRotations(string &s1, string &s2)
{
    string txt = s1+ s2;
    string pat = s2;

    int n = txt.length();
    int m = pat.length();

    vector<int> lps = computeLPSArray(pat);
}

int main()
{
    string s1, s2;
    cout << "Enter String1: ";
    cin >> s1;
    cout << "Enter String2: ";
    cin >> s2;

    // int result = areRotations(s1, s2);
    // result ? cout << "True" : cout << "False";

    cout << (areRotations(s1, s2) ? "true" : "false");

    return 0;
}