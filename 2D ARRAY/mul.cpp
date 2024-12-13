#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int a[2][2] = {
        {-2, 1},
        {0, 4}};
    int b[2][2] = {
        {6, 5},
        {-7, 1}};
    int c[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum = sum + (a[i][j] * b[j][i]);
        }
        cout << sum << endl;
        // c[i][j] = sum;
        sum = 0;
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // cout << c[i][j] << "\t";
        }
        cout << "\n";
    }
}