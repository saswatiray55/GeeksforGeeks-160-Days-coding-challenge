#include <iostream>
#include <limits.h>

using namespace std;

int myAtoi(char *s)
{
    int sign = 1, res = 0, idx = 0;
    while(s[idx] == ' ')
    {
        idx++;
    }
    
    if(s[idx] == '-' || s[idx] == '+')
    {
        if(s[idx] == '-')
        {
            sign = -1;
            idx++;
        }
    }
    while(s[idx] >= '0' && s[idx] <= '9')
    {
        if(res > INT_MAX / 10 || (res == INT_MAX / 10 && s[idx] - '0' > 7))
        {
            return sign == 1 ? INT_MAX : INT_MIN;
        }
        res = 10 * res + (s[idx] - '0');
        idx++;
    }
    return res * sign;

}

int main()
{
    
    char ch[20];
    cout << "Enter the String: ";
    cin >> ch;

    int ans = myAtoi(ch);
    cout << ans;

    return 0;
}