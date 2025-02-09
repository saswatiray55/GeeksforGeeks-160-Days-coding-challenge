/*
Merge two strings

Given two strings S1 and S2 as input, the task is to merge them alternatively i.e. the first character of S1 then the first character of S2 and so on till the strings end.
NOTE: Add the whole string if other string is empty.

Example 1:

Input:
S1 = "Hello" S2 = "Bye"
Output: HBeylelo
Explanation: The characters of both the 
given strings are arranged alternatlively.
â€‹Example 2:

Input: 
S1 = "abc", S2 = "def"
Output: adbecf
Explanation: The characters of both the
given strings are arranged alternatlively.

Your Task:
You don't need to read input or print anything. Your task is to complete the function merge() which takes the strings S1 and S2 as input and returns the resultant string by merging both S1 and S2 alternatively starting from S1.

Expected Time Complexity: O(|S1| + |S2|).
Expected Auxiliary Space: O(1).

Constraints:
1<=|S1|, |S2| <=103
*/

#include<bits/stdc++.h>
using namespace std;

string merge (string S1, string S2)
{
    string res = "";
    int i = 0, j = 0;
    
    while(i < S1.size() and j < S2.length())
    {
        res += S1[i];
        i++;
        res += S2[j++];
    }
    while(i < S1.length())
    {
        res += S1[i++];
    }
    while(j < S2.size())
    {
        res += S2[j++];
    }
    return res;
}

int main()
{
    string s1, s2;
    cout << "Enter the String1: ";
    cin >> s1;
    cout << "Enter the String2: ";
    cin >> s2;
    string result = merge(s1, s2);
    cout << result << endl;
    return 0;
}