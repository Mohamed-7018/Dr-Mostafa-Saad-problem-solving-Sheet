#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    string firstText , secondText;
    cin >> firstText >> secondText;



    for (int i=0 ; i< firstText.size() ; i++)
        {

        if (firstText[i]< 92) firstText[i]+=32;
        if (secondText[i]< 92) secondText[i]+=32;

        }


    if (firstText<secondText) cout << -1;
    else if (firstText==secondText) cout <<0;
    else cout << 1;

    return 0;
}