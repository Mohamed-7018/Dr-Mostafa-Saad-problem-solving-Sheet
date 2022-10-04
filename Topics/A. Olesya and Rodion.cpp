#include <bits/stdc++.h>
 
using namespace std;
#define ll  long long
#define ld  long double
#define mk  make_pair
#define vi  vector<int>
#define vs  vector<string>
#define vp  vector<pair<string, string>>
#define vl  vector<long long>
#define pqi priority_queue<int>
#define qi  queue<int>
#define sc  set<char>
#define ss  set<string>
#define si  set<int>
#define pii pair<int, int>
#define psv pair<string, vector<int>>
#define mci map<char,int>
#define msv map<string,vector<string>>

int main() {
	int n,d;
	string s;
	cin>>n>>d;
	if(d==10&&n<2)cout<<"-1";
	else if(d==10&&n>=2){
		for(int i=0;i<n-1;i++){
			s+=1+'0';
		}
		s+=0+'0';
		cout<<s;
	}
	else{
	for(int i=0;i<n;i++){
		s+= d+'0';
	}
	cout<<s;}
	return 0;
}


// g++ -o hello hello.cpp
// ./hello