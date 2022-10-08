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
    begin () ;

    int n,k, ans;
    cin >> n>>k;

    ll arr[n], prefixSum[n],min = LLONG_MAX;

    for (int i=1;i<=n;i++){
        cin >> arr[i];

        prefixSum[i] = prefixSum[i-1] + arr[i];
    }
    for (int i=k;i<=n;i++) {
        if (prefixSum[i] - prefixSum[i-k] < min){
            min = prefixSum[i] - prefixSum[i-k];
            ans = i-k+1;
        }
    }

    cout<< ans;

    return 0;
}





// g++ -o hello hello.cpp
// ./hello
