#include <iostream>
using namespace std;

unsigned long long Combination(int k, int n)
{
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return Combination(k - 1, n - 1) + Combination(k, n - 1);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << Combination(j, i) << " ";
        }
        cout << endl;
    }
    return 0;
}
