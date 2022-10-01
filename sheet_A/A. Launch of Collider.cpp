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


    int n , x=INT_MAX;
    string directions;
    cin >>n >> directions;

    int arr[n];
    for (int i=0; i< n;i++) {
        cin >> arr[i];
        if (i!=0) {
            if (directions[i] == 'L' && directions[i-1] == 'R')
            {
                x = min(x, arr[i] - arr[i-1]);
            }
        }
    }

    if (x != INT_MAX)
    {
        cout<<x/2;
    }
    else
        cout<<"-1";

    return 0;


}





// g++ -o hello hello.cpp
// ./hello