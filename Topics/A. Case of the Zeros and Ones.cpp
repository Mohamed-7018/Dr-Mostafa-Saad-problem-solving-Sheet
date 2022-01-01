#include <iostream>
using namespace std;
#include<string>
#include<algorithm>


int  main () {
    int n;
    cin >>n;
    int zeros =0, ones =0, remains=0;
    string s;
	 cin>>s;
	  zeros=count(s.begin(),s.end(),'0');
	  ones=count(s.begin(),s.end(),'1');
    cout<< n-(2*min(zeros,ones));
}

