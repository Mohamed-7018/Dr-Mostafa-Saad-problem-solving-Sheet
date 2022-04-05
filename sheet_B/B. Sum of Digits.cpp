#include <iostream>
#include<string>
using namespace std;

int main() {
	 string s;
	 cin>>s;
	 int lengthOfWord=s.length(), counter=0;
	  
	 while(lengthOfWord>1){
		int sum=0;
		for(int i=0;i<lengthOfWord;i++){
			sum+=s[i]-'0';
		}
		 s=to_string(sum);
         lengthOfWord=s.length();
         ++counter;
	 }
	 cout<<counter;
	return 0;
}