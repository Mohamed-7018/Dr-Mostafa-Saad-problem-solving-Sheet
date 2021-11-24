#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int upper(0), lower(0);
    for (size_t i = 0; i < s.length(); ++i)
    {
        if (isupper(s[i]))
        {
            upper += 1;
        }
        else
        {
            lower += 1;
        }
    }
    if (upper > lower)
    {
        for (size_t i = 0; i < s.length(); ++i)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for (size_t i = 0; i < s.length(); ++i)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}