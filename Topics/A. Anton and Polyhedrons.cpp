#include <iostream>
using namespace std;
#include<string>
#include<algorithm>

#include <cmath>

int  main () {
     int n;

     cin >> n;
     string  s[n];

     int number = 0;


     for (int i = 0; i<n; i++) {
         cin >>s[i];
          if (s[i] == "Tetrahedron") {
             number = number+4;
         }
         else if (s[i] == "Cube"){
             number = number+6;
         }
         else if (s[i] == "Octahedron") {
             number = number+8;
         }
         else if (s[i] == "Dodecahedron") {
             number = number+12;
         }
         else if (s[i] == "Icosahedron") {
             number = number+20;
         }
     }
     
     

 
     cout <<number;
     return 0;

}

