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
    begin();

    string s;
    cin >> s;

    int h =0,e =0,l =0,o =0;


    for (int i=0; i<s.length() ; i++) {
        if (s[i] == 'h') h++;
        else if (s[i] == 'e' && h>=1) e++;
        else if (s[i] == 'l' && e>=1) l++;
        else if (s[i] == 'o' && l>=2) o++;
    }

    if (o>=1) cout << "YES";
    else cout << "NO";


    return 0;


}





// g++ -o hello hello.cpp
// ./hello