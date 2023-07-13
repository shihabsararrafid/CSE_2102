#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
    time_t start, end;

    fstream file;
    file.open("example.txt", ios::out | ios::in);

    cout << "Random number is being inserted  ..........\n";
    time(&start);
    for (int i = 0; i < 100000; i++)
    {
        long long num = rand() % 100000;
        file << num << endl;
        // cout << num << endl;
    }
    // file.open("example.txt");
    // vector<long long> arr[10000];
    // int j = 0;
    // while (j < 10000 && file >> arr[j])
    // {
    //     j++;
    // }

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken in this function is " << fixed << time_taken << setprecision(5) << endl;
    cout << "Done :)\n";

    file.close();
    return 0;
}