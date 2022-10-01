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



    string binary ;
    cin >> binary;


    ll sz = sz(binary),
    cnt = 0 ;
    ll ans = (sz)/2;
    if(sz%2==0){
        cout << ans << endl;
        return 0;
    }
    for(ll i = 1 ; i < sz; i ++){
        if(binary[i]=='1')
            cnt ++;
    }
    if(cnt > 0)
        cnt = 1;
    cout << ans + cnt << endl;

    return 0;


}





// g++ -o hello hello.cpp
// ./hello