#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int l,i,b=1;
    char s[101];
    cin >>s;


    l=strlen(s);
    sort(s,s+l);


    for(i=0;i<l-1;i++){
        if(s[i]!=s[i+1])  b++;
    }


    if(b%2==1)   cout << "IGNORE HIM!";
    else   cout <<"CHAT WITH HER!";
    return 0;
}