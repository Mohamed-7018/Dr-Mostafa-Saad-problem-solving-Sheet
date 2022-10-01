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

    int n;
    cin >> n;

    int a[n];
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }

    int m;
    cin >> m;

    for (int i=0;i<m;i++) {
        int x,y;
        cin >>x>>y;
        if ( x-1 >=1) a[x-1-1] +=y-1;
        if (x <= n-1) a[x] += (a[x-1] - y);
        a[x-1] = 0;
    }

    for (int i=0; i<n;i++) {
        cout << a[i] <<endl;
    }
    return 0;


}





// g++ -o hello hello.cpp
// ./hello