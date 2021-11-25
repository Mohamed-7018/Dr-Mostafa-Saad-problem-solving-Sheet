#include <iostream>
#include<string>


using namespace std;

int main () {
   string input,output;
   cin>>input;

   for (int i=0; i<input.length(); i++) {
    if (input[i]=='a'||input[i]=='o'||input[i]=='y'||input[i]=='e'||input[i]=='u'||input[i]=='i'||input[i]=='A'||input[i]=='O'||input[i]=='Y'||input[i]=='E'||input[i]=='U'||input[i]=='I')
        continue;
    else {
            output+='.';
            output+=tolower(input[i]);
          }

   }

   cout << output;
}
