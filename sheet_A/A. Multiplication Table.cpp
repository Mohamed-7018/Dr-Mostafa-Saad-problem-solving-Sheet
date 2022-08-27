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
    int n,x,cnt=0;

    cin >>n>>x;
    if (x==1) {
        cout<<"1"<<endl;
        return 0;
    }

    for (int i=1;i<=n;i++) {

        if(x%i == 0 && x/i <= n)  cnt++;

    }

    cout <<cnt;
    return 0;
}