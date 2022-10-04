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

    int n;
    cin >>n;

    int d[n], totalDistance=0;

    for (int i=0;i<n;i++) {
        cin >>d[i];
        totalDistance +=d[i];
    }

    int start , end;
    cin >>start >>end;

    if (start > end) swap(start,end);

    int sum =0;
    for (int i= start-1; i <end-1 ; i++) {
        sum+= d[i];
    }

    if(sum<(totalDistance/2))
    {
        cout << sum;
    }
    else
    {
        cout << totalDistance-sum;
    }
    return 0;

}





// g++ -o hello hello.cpp
// ./hello