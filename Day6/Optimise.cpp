// Using Moore’s Voting algorithm

#include <iostream>
#include  <vector>
using namespace std;

vector<int> findMajority(vector<int>& arr)
{
    int n = arr.size();
    
    vector<int> result;
    
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> arr;
    for(int i = 0; i<n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    vector<int> ans = findMajority(arr);

    for(int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}

/*Time Complexity = 0(n)
Space Complexity = 0(1)*/