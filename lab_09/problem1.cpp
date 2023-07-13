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
        // arr[d].push_back(c);
    }
    vector<int> arr2[n + 1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            arr2[arr[i][j]].push_back(i);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "Out Degree Edges of vertex " << i << " are : " << endl;
        if (arr[i].size() == 0)
            cout << "None";
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
        cout << "In Degree Edges of vertex " << i << " are : " << endl;
        if (arr2[i].size() == 0)
            cout << "None";
        for (int j = 0; j < arr2[i].size(); j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << "\n";
    }
}