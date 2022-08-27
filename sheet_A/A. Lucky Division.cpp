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
    int n;
    cin >> n;

    int luckyNumber[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};


    for (int i=0; i<14; i++) {
        if (n%luckyNumber[i] == 0) {
            cout << "YES" ;
            return 0;
        }
    }

    cout<<"NO";
    return 0;
}