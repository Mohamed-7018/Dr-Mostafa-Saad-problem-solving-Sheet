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

    int n,m;
    cin >> n>>m;

    string marks[n];
    int students[n];

    for (int i=0;i<n;i++) {
        cin >> marks[i];
        students[i] =0;
    }

    for (int i=0;i<m;i++) {
        int ma = 0, higher=0;
        for (int j=0;j<n;j++) {
           int mark = marks[j][i] - '0';
           if (mark>ma) {
//               cout  << mark << j;
               ma = mark;
               higher=j;
           }
       }
        students[higher]++;
        for (int k=0;k<n;k++) {
            int mark = marks[k][i] - '0';
            if (mark == ma) {
                students[k] ++;
            }
        }
    }

    int ans =0;
    for (int i=0;i<n;i++) {
        if (students[i] > 0)  ans ++;
    }
    cout<< ans;

    return 0;

}





// g++ -o hello hello.cpp
// ./hello