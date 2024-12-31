#include <iostream>
using namespace std;

char nonRepeatingChar(string &s)
{
    int n = s.length();
        
    for(int i = 0; i<n; i++)
    {
        bool found = false;
        for(int j = 0; j<n; j++)
        {
            if(i != j && s[i] == s[j])
            {
                found = true;
                break;
            }
        }
        if (found == false)
        {
            return s[i];
        }
    }
    return '$';

}

int main()
{
    string s;
    cout << "Enter String: ";
    cin >> s;
    
    
    cout << nonRepeatingChar(s);

    return 0;
}
