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

    double n, t, k, d;
    cin >> n >> t >> k >> d;
    if (n < k)
        cout << "NO";
    else
    {
        double a = ceil(n/k) * t;
        double b = d + t;
        if (a > b)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}