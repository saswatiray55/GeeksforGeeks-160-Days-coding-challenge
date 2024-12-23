#include <iostream>
#include <vector>
using namespace std;

int maximumProfit(vector<int>& prices) 
{
    int n = prices.size();

    int res = 0;
    for(int i =1; i<n; i++)
    {
        if(prices[i] > prices[i-1])
        {
            res += prices[i] - prices[i-1];
        }
    }
    return res;
}

int main() {
    int n;
    cout << "Enter no. of size: ";
    cin >> n;

    vector<int> prices;

    for(int i =0; i<n; i++)
    {
        int a;
        cin >> a;
        prices.push_back(a);
    }

    cout << maximumProfit(prices);
    return 0;
}

/*
Time Complexity = 0(n)
Space Complexity = 0(1)
*/