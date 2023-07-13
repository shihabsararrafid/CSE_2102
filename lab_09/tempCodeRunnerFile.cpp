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