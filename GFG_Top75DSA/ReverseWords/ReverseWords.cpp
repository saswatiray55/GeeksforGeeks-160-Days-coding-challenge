/*Reverse Words
Given a string s, reverse the string without reversing its individual words. Words are separated by spaces.

Note: The string may contain leading or trailing spaces, or multiple spaces between two words. The returned string should only have a single space separating the words, and no extra spaces should be included.

Examples :

Input: s = " i like this program very much "
Output: "much very program this like i"
Explanation: After removing extra spaces and reversing the whole string (not individual words), the input string becomes "much very program this like i". 
Input: s = " pqr mno "
Output: "mno pqr"
Explanation: After removing extra spaces and reversing the whole string, the input string becomes "mno pqr". 
Input: s = " a "
Output: "a"
Explanation: The input string contains only one word with extra spaces around it. After removing the extra spaces, the output is "a".Constraints:
Constraints:
1 <= s.size() <= 106
*/

#include<bits/stdc++.h>
using namespace std;

string reverseWords(string &s) 
{
    reverse (s.begin(), s.end());
    int n = s.size();
    int left = 0, right = 0, i = 0;
    while(i <n)
    {
        while(i < n && s[i] == ' ')
        {
            i++;
        }
        if(i ==n) break;
        while(i < n && s[i] != ' ')
        {
            s[right++] = s[i++];
        }
        reverse(s.begin() + left, s.begin() + right);
        s[right++] = ' ';
        left = right;
        i++;
    }
    s.resize(right - 1);
    return s;
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
Space Complexity: 0(1)*/