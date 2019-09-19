#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int values[2000] = { }, n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        values[a[i]]++;
    }

    for(int i = 0; i < 2000; i++)
    {
        if(values[i] == *max_element(values, values + 2000)) cout << i << " ";
    }

    return 0;
}
