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
            c[i][j] = (a[i][j] * b[j][i]); // can use "+" for addition and "-" for subtraction and "/" for division
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << c[i][j] << "\t";
        }
        cout << "\n";
    }
}