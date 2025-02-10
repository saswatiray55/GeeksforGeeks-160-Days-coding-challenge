#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    string result = "";
    int n = s.length(), i = 0;
    while(i < n)
    {
        while(i < n && s[i] == ' ')
        {
            i++;
        }
        if(i >= n) break;
        int j = i + 1;
        while( j <n && s[j] != ' ')
        {
            j++;
        }
        string sub = s.substr(i , j-i);
        if(result.length() == 0)
        {
            result = sub;
        }
        else
        {
            result = sub + " " + result;
        }
        i = j +1;
    }
    return result;

}

int main()
{
    
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    
    string result = reverseWords(s);
    cout << "Reversed words: " << result << endl;
    return 0;
}

/*Time Complexity: 0(n)
Space Complexity: 0(n)*/