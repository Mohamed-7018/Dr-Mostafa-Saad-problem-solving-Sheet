#include <iostream>
#include <string>

using namespace std;

char input [4][4];
bool test (int i, int j);
bool checkAbility();
int main()
{

    for (int i=0; i<4; ++i) {
        for (int j=0; j<4; ++j){
            cin>> input[i][j];
        }
    }


    bool abilty = checkAbility();

    if (abilty == false) {
        for (int i=0; i<4; i++) {
           for (int j=0; j<4; j++) {
             char original = input[i][j];

             if (input[i][j]=='.') input[i][j]='#';
             else input[i][j]='.';

             if (checkAbility()) abilty=true;

             input[i][j] = original;
           }
        }
    }

if (abilty) cout<<"YES";
else cout<< "NO";

}


bool checkAbility () {
    for (int i=0; i<4; ++i) {
        for (int j=0; j<4; ++j ){
            if (test(i,j)) return true;
        }
    }
    return false;
}


bool test (int i, int j){
if (i+1 ==4 || j+1==4)
                return false;
return input[i][j] == input[i][j+1] && input[i][j] == input[i+1][j] && input[i][j] == input[i+1][j+1];
}
