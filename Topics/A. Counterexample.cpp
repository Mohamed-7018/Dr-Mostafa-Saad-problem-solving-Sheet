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
#define sz(s)    (ll)(s.size())


using namespace std;


void begin() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}



int main() {
    begin();


    ll l, r;
    cin >> l >> r;


    if (l%2 != 0) l =l+1;

    if(abs (l-r) <2) cout << -1;
    else {
         cout << l <<" " << l+1 << " " << l+2;
    }

    return 0;


}





// g++ -o hello hello.cpp
// ./hello