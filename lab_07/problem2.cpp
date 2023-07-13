/**
 * @file problem2.cpp
 * @author your name (you@domain.com)
 * @brief Given a set ,s of n elements and a number containing r digits from set s find next r permutation
 * @version 0.1
 * @date 2023-06-10
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of set\n";
    cin >> n;
    set<int> s;
    cout << "Enter element";
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        s.insert(num);
    }
    vector<int> arr;
    for (auto x : s)
    {
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    vector<int> arr2;
    int n2;
    cout << "Select size of new retreived set from previos one\n";
    cin >> n2;
    cout << "Enter element";
    for (int i = 0; i < n2; i++)
    {
        int num;
        cin >> num;
        arr2.push_back(num);
    }
    int index;
    int i, j;
    for (i = n2 - 1, j = 1; i >= 0; i--, j++)
    {
        if (arr2[i] == arr[n - j])
        {
            continue;
        }
        else
        {
            break;
        }
    }
    int indexNeeded = n2 - i;

    int indexx;
    for (int k = 0; k < n; k++)
    {
        if (arr[k] == arr2[i])
        {
            indexx = k + 1;
            break;
        }
    }
    for (int k = 0; k < i; k++)
    {
        cout << arr2[k];
    }
    for (int k = indexx, l = 0; l < indexNeeded; k++, l++)
        cout << arr[k];
    cout << endl;
    // cout << i << " " << j << endl;
}