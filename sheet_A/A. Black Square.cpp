#include <iostream>
#include<algorithm>

using namespace std;

int main () {


    int a,b,c,d,ans = 0;
    string str;
    cin >> a >> b >> c >> d;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '1')ans+=a;
        if(str[i] == '2')ans+=b;
        if(str[i] == '3')ans+=c;
        if(str[i] == '4')ans+=d;
    }
    cout << ans << endl;
}
