#include <bits/stdc++.h>
using namespace std;

int countTriplets(vector<int> &arr, int target)
{
    int n = arr.size();
    int res = 0;
    for(int i = 0; i<n-2; i++)
    {
        int left = i+1, right = n-1;
        while(left < right)
        {
            int sum = arr[i] + arr[left] + arr[right];
            if(sum < target)
            {
                left++;
            }
            else if (sum > target)
            {
                right--;
            }
            else if (sum == target)
            {
                int ele1 = arr[left], ele2 = arr[right];
                int cnt1 =0, cnt2 = 0;
                while (left <= right && arr[left] == ele1)
                {
                    left++;
                    cnt1++;
                }
                while(left <= right & arr[right] == ele2)
                {
                    right--;
                    cnt2++;
                }
                if (ele1 == ele2)
                {
                    res += (cnt1 * (cnt1 -1)) /2;
                }
                else
                {
                    res += (cnt1 * cnt2);
                }
            }
        }
    }
    return res;
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
    int k;
    cin >> k;
    int result = countTriplets(arr, k);
    cout << result;
    
    return 0;
}