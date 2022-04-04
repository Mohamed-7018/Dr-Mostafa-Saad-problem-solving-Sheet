#include <iostream>
using namespace std;
#include<string>
#include<algorithm>

#include <cmath>

int  main () {

 int n;
 string s;
 char letter = 'a';

 cin >>n;
 cin >>s;

 for (int i = 0 ; i<n ; i ++) {
    s[i] = tolower(s[i]);
 }

 if (n>=26) {
   for (int i = 0 ; i<26 ; i ++ ) {
        if (s.find(letter) != -1) {
        letter ++;
        }
    else {
           cout << "NO";
           return 0;
         }
   }

   cout << "YES";
 }
 else {
    cout << "NO";
 }

 return 0;

}

