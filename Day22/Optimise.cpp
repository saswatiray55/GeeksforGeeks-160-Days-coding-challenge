#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int hIndex(vector<int>& citations)
{
    int n = citations.size();
    

}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int>citations;
    for(int i =0; i<n; i++)
    {
        int a;
        cin >> a;
        citations.push_back(a);
    }

    cout << hIndex(citations);
    return 0;
}

/* Time Complexity 0(n)
Space Complexity 0(n) */