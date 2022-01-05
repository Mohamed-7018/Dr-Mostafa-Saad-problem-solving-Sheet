#include <iostream>
using namespace std;
#include<string>
#include<algorithm>

#include <cmath>

int  main () {
   int n;
   cin >>n;


   for (int i=0; i<n; i++) {
    int angle;
    cin >> angle;

   if  (360 % (180 - angle) == 0)   cout <<"YES"<<endl;
    else cout <<"NO" <<endl;
   }

}

