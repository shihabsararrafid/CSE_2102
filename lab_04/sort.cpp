#include <iostream>
#include <fstream>
#include <ctime>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    fstream file;
    file.open("example.txt");
    clock_t start, end;
    int n = 100000;
    long long arr[n];
    int i = 0;
    while (i < n && file >> arr[i])
    {
        i++;
    }
    file.close();
    // bubble sort
    start = clock();
    cout << arr[990] << endl;
    // clock(&start);
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n; k++)
        {
            if (arr[j] > arr[k])
            {
                swap(arr[j], arr[k]);
            }
        }
    }
    // time(&end);
    // clock(&end);
    clock_t time_taken = clock() - start;
    cout << "Time taken in this function is " << fixed << (float)time_taken / CLOCKS_PER_SEC << setprecision(5) << endl;
    cout << "Done :)\n";

    return 0;
}