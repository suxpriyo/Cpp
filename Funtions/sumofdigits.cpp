#include <iostream>
using namespace std;

int sum(int n)
{
    int digiSum = 0;
    while (n > 0)
    {
        n = n % 10;
        int temp = n;
        n = temp / 10;
        digiSum += n;
    }
    return digiSum;
}
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    cout << sum(n);
}