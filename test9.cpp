#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int values[2000] = { }, n;
    cin >> n;
    vector<int> a;
    int i;

    for(i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
        values[a[i]]++;
    }

    i = 0;
    while(i < a.size())
    {
        if(values[a[i]] != *max_element(values, values + 2000))
        {
            a.erase(a.begin() + i);
            continue;
        }
        else
        {
            if(a.size() > 1)
            {
                int j = i + 1;
                while(j < a.size())
                {
                    if(a[j] == a[i])
                    {
                        a.erase(a.begin() + j);
                        continue;
                    }
                    else j++;
                }
            }
        }
        i++;
    }

    for(int i = 0; i < a.size(); i++) cout << a[i] << " ";

    return 0;
}

