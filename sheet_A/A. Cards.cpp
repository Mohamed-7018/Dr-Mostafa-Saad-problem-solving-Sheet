#include <bits/stdc++.h>
//#define  LOCAL
using namespace std;

//#include "debug.hpp"

#ifdef LOCAL
#include "debug.hpp"
#else
#define debug(...) 42
#endif

//#define endl '\n'


#define ll  long long
#define ld  long double
#define ull unsigned long long int


#define psv pair<string, vector<int>>
#define mci map<char,int>
#define msv map<string,vector<string>>
#define sz(s)    (int)(s.size())
#define mll map<ll,ll>

template<typename T> using vc = vector<T>;
template<typename T> using vvc = vector<vc<T>>;
template<typename T> using vvvc = vector<vvc<T>>;
#define vi  vector<int>
#define vs  vector<string>
#define  vvs vector < vector < string >>
#define vl  vector<long long>
#define vps  vector<pair<string, string>>
#define vpl  vector<pair<ll, ll>>
#define vpsi  vector<pair<string, int>>
#define vpsl  vector<pair<string, ll>>
#define  um un_orderedmap


#define pii pair<int, int>
#define pll pair << ll, ll>


#define fi first
#define se second


#define pb push_back
#define ppb pop_back
#define ppf pop_front
#define eb emplace_back


#define SORT(v) sort(all(v))
#define REV(v) reverse(all(v))
#define pqi priority_queue<int>
#define qi  queue<int>
#define sc  set<char>
#define si  set<int>
#define mk  make_pair

#define all(v) v.begin(),v.end()
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))

#define F(I, S, E)  for (int I = S; I < E; I++)
#define input(a, n)            \
    for (ll I = 0; I < n; I++) \
    {                          \
        cin >> a[I];           \
    }
#define PYES cout << "YES\n"
#define PNO cout << "NO\n"
#define PYes cout << "Yes\n"
#define PNo cout << "No\n"
#define Pyes cout << "yes\n"
#define Pno cout << "no\n"


#define show(C)           \
    for (auto J : C)      \
        cout << J << " "; \
    cout << endl;

template<class T>
bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}

template<class T>
bool chmin(T &a, const T &b) {
    if (a > b) {
        a = b;
        return 1;
    }
    return 0;
}


#define TEST                                                                                                                                                   \
    int(testcases);                                                                                                                                            \
    cin >> testcases;\
    while(testcases--)

void begin() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}

//class Graph {
//public:
//    map < int,bool> visited;
//    map < int,list<int>> adj;
//    void  addEdge (int v, int w);
//    void DFS (int v);
//};
//
//void Graph ::addEdge(int v, int w) {
//    adj[v].push_back(w);
//}
//
//void Graph :: DFS (int v) {
//    visited[v] = true;
//
//    list<int> :: iterator  i;
//    for (i= adj[v].begin(); i !=adj[v].end(); ++i) {
//        if (!visited[*i]){
//            DFS (*i);
//        }
//    }
//}
//bool compare(string a, string b) {
//    if (a.size() == b.size()) {
//        return a < b;
//    }
//    return a.size() < b.size();
//}

int main() {
    begin();

    int n;
    cin >> n;

    vi arr;
    vector < pair<ll,ll>> v;
    F(i,0,n) {
        int x ;
        cin >> x;
        arr.push_back(x);
        v.push_back({arr[i],i+1});
    }

    // 1 3 4 4 5 7

    sort (all(v));
    auto st=v.begin(),end=prev(v.end());
    while(st<end){
        cout<<st->second<<" "<<end->second<<endl;
        st++;
        end--;
    }
    return 0;
}



// g++ -o hello hello.cpp
// ./hello