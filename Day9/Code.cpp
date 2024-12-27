#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getMinDiff(vector<int> &arr, int k) {
        
    int n = arr.size();
    sort(arr.begin(), arr.end());
    
    int res = arr[n - 1] - arr[0];

    for (int i = 1; i < arr.size(); i++) {
        
        if (arr[i] - k < 0)
            continue;
        
        int minH = min(arr[0] + k, arr[i] - k);
        
        int maxH = max(arr[i - 1] + k, arr[n - 1] - k);

        res = min(res, maxH - minH);
    }
    return res;
}

int main()
{
    int n ;
    cout << "Enter no of size: ";
    cin >> n;

    vector<int> arr;

    for(int i = 0; i<n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int k;
    cin >> k;
    cout << getMinDiff(arr, k);
    return 0;

}
/*
Time Complexity = 0(n*log(n))
Space Complexity = 0(1)
*/