/*
Largest odd number in string

Given a string S, representing a large integer. Return the largest-valued odd integer (as a string) that is substring of the given string S.
Note: A substring is a contiguous sequence of characters within a string. A null string ("") is also a substring.

Example 1:
Input: s = "504"
Output: "5"
Explanation: The only subtring "5" is odd number.
Example 2:

Input: s = "2042"
Output: ""
Explanation: All the possible non-empty substring have even value.
Your Task:
You don't need to read input or print anything. Your task is to complete the function maxOdd() which takes the string S as input and returns the largest-valued odd integer that is substring of the given string.

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).*/


#include<bits/stdc++.h>
using namespace std;

string maxOdd(string s) 
{
    int n = s.size();
    int first = 0, last = n-1;
    string result = "";
    while(first < n && s[first] == '0')
    {
        first++;
    }
    while(last < n && (s[last] -'0')% 2 == 0)
    {
        last--;
    }
    if(last< first)
    {
        return result;
    }
    return s.substr(first, last-first+1);
}

int main()
{
    string s;
    cout << "Enter the String: ";
    cin >> s;
    
    string result = maxOdd(s);
    cout << result << endl;
    return 0;
}