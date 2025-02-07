/*
Add Binary Strings

Given two binary strings s1 and s2 consisting of only 0s and 1s. Find the resultant string after adding the two Binary Strings.
Note: The input strings may contain leading zeros but the output string should not have any leading zeros.

Input: s1 = "1101", s2 = "111"
Output: 10100
Explanation:
 1101
+ 111
10100
Input: s1 = "00100", s2 = "010"
Output: 110
Explanation: 
  100
+  10
  110
Constraints:
1 ≤s1.size(), s2.size()≤ 106
*/

#include <bits/stdc++.h>
using namespace std;

string addBinary(string s1, string s2) {
    int i = s1.size() - 1, j = s2.size() - 1, carry = 0;
    string result = "";

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += (s1[i--] - '0');
        if (j >= 0) sum += (s2[j--] - '0');

        result.push_back((sum % 2) + '0'); // Append binary sum
        carry = sum / 2;  // Update carry
    }

    reverse(result.begin(), result.end()); 

    int start = 0;
    while (start < result.size() - 1 && result[start] == '0') {
        start++;
    }
    return result.substr(start);
}

int main() {
    // string s1 = "1101", s2 = "111";
    string s1, s2;
    cout << "Enter String1: ";
    cin >> s1;
    cout << "Enter String2: ";
    cin >> s2;
    cout << addBinary(s1, s2) << endl;  // Output: 10100
    return 0;
}
