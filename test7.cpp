#include <iostream>
using namespace std;

int GCD(int _a, int _b)
{
    int a = _a, b = _b;

    if(a == 0 && b != 0) return b;
    if(a != 0 && b == 0) return a;
    if(a == 0 && b == 0) return b;

    while(a != b)
    {
        if(a > b) a = a - b;
        if(b > a) b = b - a;
    }

    return a;
}

int main()
{
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    cout << GCD(GCD(a1, a2), GCD(a3, a4));
    return 0;
}
