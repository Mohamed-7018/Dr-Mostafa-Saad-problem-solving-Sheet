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



int main() {
    begin () ;

   int n;
   cin >> n;


   if (n>0) cout << n;
   else if (n>=-10) cout<< 0;
   else {
       if (n%10  > (n%100)/10) cout  << n/10+ ((n%100)/10 )* (-1) - (n%10) *(-1) ;
       else cout << n /10;
   }
    return 0;
}





// g++ -o hello hello.cpp
// ./hello
