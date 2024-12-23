#include <iostream>
#include <vector>
using namespace std;

int maximumProfit(vector<int> &prices)
{
    int n = prices.size();
    int result = 0;
    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            result = max(result, prices[j] - prices[i]);
        }
    }
    return result;
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
Time Complexity = 0(n^2)
Space Complexity = 0(1)
*/