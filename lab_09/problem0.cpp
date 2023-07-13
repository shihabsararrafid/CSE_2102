#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter number of nodes\n";
    cin >> n;
    cout << "enter number of edges\n";
    cin >> m;
    vector<int> arr[n + 1];
    cout << "Enter the edges\n";
    for (int i = 0; i < m; i++)
    {
        int c, d;
        cin >> c >> d;
        arr[c].push_back(d);
        arr[d].push_back(c);
    }

    for (int i = 1; i <= n; i++)
    {
        int arr1[n + 1] = {0};
        for (int j = 0; j < arr[i].size(); j++)
        {
            arr1[arr[i][j]] = 1;
            // cout << arr[i][j] << " ";
        }
        for (int j = 1; j <= n; j++)
        {
            // arr1[arr[i][j]] = 1;
            cout << arr1[j] << " ";
        }
        cout << endl;
    }
}