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
#define watch(x) cout << #x << " = " << x << endl;


using namespace std;


void open() {
#ifndef ONLINE_JUDGE
    freopen("standard.in", "r", stdin);
    freopen("standard.out", "w", stdout);
#endif
}

void begin() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    begin();
   // open();

   int n,x;
   cin >> n >> x;

   int arr[n],sum=0;
   for (int i=0;i<n;i++) {
       cin >> arr[i];
       sum+=arr[i];
   }

   cout << ceil(abs(sum*1.0)/x);
    return 0;
}





// g++ -o hello hello.cpp
// ./hello

