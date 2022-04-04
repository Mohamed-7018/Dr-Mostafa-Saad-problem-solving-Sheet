#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] != '.')
        {
            if (s[i] == 'R')
            {
                while (s[i] == 'R')
                {
                    ++i;
                }
                cout << i << " " << i + 1 << endl;
            }
            else
            {
                cout << i + 1 << " " << i << endl;
            }
            break;
        }
    }

    return 0;
}