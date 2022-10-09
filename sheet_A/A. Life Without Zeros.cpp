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

double numberWithoutZero ( int num) {
    vector<int> newNum;

    while (num) {
        if (num%10 == 0){

        }else {
//            cout << "a7aaaaaa" <<endl;
            newNum.push_back(num%10);
        }
        num/=10;
    }

    double s=0;
    for (int i= sz(newNum) -1; i>=0;i--) {
//        cout << newNum[i] << " ";
       s+=newNum[i] * pow(10, i);
    }
    return  s;
}

int main() {
    begin () ;
    int n,m;
    cin >> n >> m;
    if (numberWithoutZero(n) + numberWithoutZero(m) == numberWithoutZero(n+m))
        cout << "YES";
    else cout << "NO";
//   int n = 103;
    ;



    return 0;
}





// g++ -o hello hello.cpp
// ./hello
