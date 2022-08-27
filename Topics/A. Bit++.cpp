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

int main(){
    int n, ans = 0;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++){
        cin >> s;
        if (s[1] == '+'){
            ans++;
        }else{
            ans--;
        }
    }
    cout << ans;
    return 0;
}