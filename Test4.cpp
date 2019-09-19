#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int i = 0, j = 0;
    int primaryDiagon = 0, secondaryDiagon = 0;

    while(i < n && j < n)
    {
        primaryDiagon += a[i][j];
        i++;
        j++;
    }

    i = 0; j = n - 1;

    while(i < n && j >= 0)
    {
        secondaryDiagon += a[i][j];
        i++;
        j--;
    }

    cout << abs(primaryDiagon - secondaryDiagon);

    return 0;
}
