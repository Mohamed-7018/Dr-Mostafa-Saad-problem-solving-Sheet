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

int main() {
    begin();

    int x,y,m,n;
    char c,a;

    cin >> x >>c >> y>>m >> a >>n;

    m =x-m;
    n =y - n;


    if (n<0){
        n+=60;
        m--;
    }
    if (m<0) m+=24;
    
    m<=9 ? cout << 0<<m : cout << m;
    cout<< ":";
    n<=9 ? cout << 0<<n : cout << n;

    return 0;

}





// g++ -o hello hello.cpp
// ./hello