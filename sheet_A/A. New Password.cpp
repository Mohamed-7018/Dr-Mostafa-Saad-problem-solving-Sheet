#include <iostream>
#include <string>

using namespace std;

int main()
{
   string s= "abcdefghijklmnopqrstuvwxyz";
   string sol="";

   int n,k;
   cin >>n>>k;

   for (int i=0; i<n ; i++) {
    sol = sol+s[i%k];
   }

   cout << sol;

}
