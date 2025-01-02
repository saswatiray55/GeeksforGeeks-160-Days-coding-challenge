#include <iostream>
using namespace std;

bool areRotations(string &s1, string &s2)
{
    int n = s1.size();
    for(int i = 0; i<n; i++)
    {
        char last = s1.back();
        s1.pop_back();
        s1 = last + s1;

        if( s1 == s2)
        {
            return true;
        }

    }
    return false;

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

/*
Time complexity = O(n^2)
Space Complexity = O(1)
*/