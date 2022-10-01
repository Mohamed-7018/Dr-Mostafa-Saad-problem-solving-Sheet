#include <bits/stdc++.h>

using namespace std;
#define ll  long long
#define ld  long double
#define mk  make_pair
#define vi  vector<int>
#define vs  vector<string>
#define vp  vector<pair<string, string>>
#define all(v) v.begin(),v.end()
#define vl  vector<long long>
#define pqi priority_queue<int>
#define qi  queue<int>
#define sc  set<char>
#define si  set<int>
#define pii pair<int, int>
#define psv pair<string, vector<int>>
#define mci map<char,int>
#define msv map<string,vector<string>>
#define sz(s)    (int)(s.size())


using namespace std;


void begin() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}
int d =1;

int count (int n) {
    if(n == 1)   d *= 7;
    if(n==2 || n == 6 || n ==0 || n == 9 ) d *= 2;
    if( n== 3 || n == 4)  d *= 3;
    if(n == 5)    d *= 4;
    if(n == 7 ) d *= 5;
    
  

    return  d;
}

int main() {
    begin();

    int n;
    cin >> n;

    int x= n%10;
    n=n/10;




   count(n) ; count(x);
   cout <<d;


    return 0;

}





// g++ -o hello hello.cpp
// ./hello