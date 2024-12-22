#include <iostream>
#include  <vector>
using namespace std;

vector<int> findMajority(vector<int>& arr)
{
    int n = arr.size();
    
    vector<int> result;
    for(int i = 0; i<n; i++)
    {
        int count = 0;
        for(int j = i; j<n; j++)
        {
            if(arr[j] == arr[i])
            {
                count++;
            }
        }
        if(count > (n/3))
        {
            if(result.size() == 0 || arr[i] != result[0])
            {
                result.push_back(arr[i]);
            }
        }
        if(result.size() == 2)
        {
            if(result[0] > result[1])
            {
                swap(result[0], result[1]);
            }
            break;
        }
    }
    return result;
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

/*Time Complexity = 0(n^2)
Space Complexity = 0(1)*/