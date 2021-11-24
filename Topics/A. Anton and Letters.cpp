#include <iostream>
#include <string>
#include<algorithm>


#include<bits/stdc++.h>

using namespace std;

int main()
{
 string input;

 set <char> a;
 getline(cin,input);


for (int i=0; i<input.size(); i++) {
    if(input[i]>='a' && input[i]<='z'){
       a.insert(input[i]);
    }
}

cout <<a.size()<<endl;
}
