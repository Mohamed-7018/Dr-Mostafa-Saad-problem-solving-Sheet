#include <iostream>
using namespace std;
#include<string>
#include<algorithm>


int  main () {
   string s,t;
   cin >>s>>t;
   reverse(s.begin(),s.end());
      if (s == t)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
}

