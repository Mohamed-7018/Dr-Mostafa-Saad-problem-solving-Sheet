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
    for (int i=0; i< n; i++) {
        string s;
        cin >>s;
        if (s.length()<=10) cout <<s <<endl;
        else cout << s[0] << s.length()-2 << s[s.length()-1] << endl;
    }

    return 0;
}