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

ll minNumber (ll n1, ll n2){
    if (n1>n2) return  n2;
    else return n1;

}

ll maxNumber (ll n1, ll n2) {
    if (n1>n2)  return n1;
    else return n2;
}

int main() {
    int n;
    cin >> n;

    ll arr[n];

    for (int i=0; i<n; i++) cin >> arr[i];

    for (int i=0; i<n; i++){
        if (i==0) cout<<abs(arr[i + 1] - arr[i])<<" "<<abs(arr[n -1] - arr[i])<<endl;
        else if (i==(n-1)) cout<<abs(arr[i-1] - arr[i])<<" "<<abs(arr[0] - arr[i])<<endl;

        else {
            ll maxi, mini;
            maxi = maxNumber(abs(arr[0] - arr[i]), abs(arr[n - 1] - arr[i]));
            mini = minNumber(abs(arr[i - 1] - arr[i]), abs(arr[i + 1] - arr[i]));
            cout<<mini<<" "<<maxi<<endl;
        }
    }
}