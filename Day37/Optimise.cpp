#include <bits/stdc++.h>
using namespace std;

void rotateby90(vector<vector<int>>& mat) 
{
    int n = mat.size();
    for(int i = 0; i<n/2; i++)
    {
        for(int j = i; j < n- i -1; j++)
        {
            int temp = mat[i][j];
            mat[i][j] = mat[j][n-1-i];
            mat[j][n- 1 -i] = mat[n-1-i][n-1-j];
            mat[n - 1- i][n-1-j] = mat[n-1-j][i];
            mat[n-1-j][i] = temp;
        }
    }
}

int main()
{
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    vector<vector<int>> arr; 

    for (int i = 0; i < n; i++)
    {
        vector<int> row; 
        for (int j = 0; j < m; j++)
        {
            int val;
            cin >> val;
            row.push_back(val); 
        }
        arr.push_back(row); 
    }
    rotateby90(arr);
    
    for (int i = 0; i < arr.size(); ++i)
    {
        for (int j = 0; j < arr[i].size(); ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
