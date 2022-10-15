#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int row_s = 0, row_e = n - 1, column_s = 0, column_e = m - 1;
    while (row_s <= row_e && column_s <= column_e)
    {
        // row start
        for (int col = column_s; col <= column_e; col++)
        {
            cout << arr[row_s][col] << " ";
        }
        row_s++;

        // for column end
        for (int row = row_s; row <= row_e; row++)
        {
            cout << arr[row][column_e] << " ";
        }
        column_e--;

        // for row end
        for (int col = column_e; col >= column_s; col--)
        {
            cout << arr[row_e][col] << " ";
        }
        row_e--;
        // for column start
        for (int row = row_e; row >= row_s; row--)
        {
            cout << arr[row][column_s] << " ";
        }
        column_s++;
    }
return(0);
}