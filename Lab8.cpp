#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int n = 3;
    const int m = 3;
    int b[n][m] = { {22,6,8},{20, 12, 14},{16,18,10} };
    int min_i = 0;
    for (int i = 0; i < n; i++)
        if (b[i][i] > b[min_i][min_i])
        {
            min_i = i;
        }
    cout << b[min_i][min_i] << endl;
}