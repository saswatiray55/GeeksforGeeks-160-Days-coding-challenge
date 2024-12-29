// Using  Dutch National Flag Algorithm
#include <iostream>
#include  <vector>

using namespace std;

void sort012(vector<int>& arr)
{
    int n = arr.size();
    int c0 =0, c1 = 0, c2 =0;
    for(int i = 0; i<n; i++)
    {
        if(arr[i] == 0)
        {
            c0++;
        }
        else if (arr[i] == 1)
        {
            c1 += 1;
        }
        else{
            c2 += 1;
        }
    }
    int idx = 0;
   
    for (int i = 0; i < c0; i++)
    {
        arr[idx++] = 0;
    }

    for (int i = 0; i < c1; i++)
    {
        arr[idx++] = 1;
    }

    for (int i = 0; i < c2; i++)
    {
        arr[idx++] = 2;
    }

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
    sort012(arr);

    for(int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}

/*
Time Complexity = 0(n)
Space Complexity = 0(1)
*/
