#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int i = 0;

    if(s1.length() > 1)
    {
        while(i != s1.length())
        {
            if(s1[i] == s1[i - 1] && s1[i] == '_')
            {
                s1.erase(s1.begin() + i);
                continue;
            }
            else i++;
        }
    }

    i = 0;

    if(s2.length() > 1)
    {
        while(i != s2.length())
        {
            if(s2[i] == s2[i - 1] && s2[i] == '_')
            {
                s2.erase(s2.begin() + i);
                continue;
            }
            else i++;
        }
    }

    cout << s1 << endl << s2;
    return 0;
}

