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

#define F(I, S, E)  for (ll I = S; I < E; I++)
#define input(a, n)            \
    for (LL I = 0; I < n; I++) \
    {                          \
        cin >> a[I];           \
    }
#define PYES cout << "YES\n"
#define PNO cout << "NO\n"
#define show(C)           \
    for (auto J : C)      \
        cout << J << " "; \
    cout << endl;


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


    string string1;
    getline(cin, string1);

    string string2;
    getline(cin, string2);

    string string3;
    getline(cin, string3);


    int cnt1 = 0, cnt2 = 0, cnt3 =0;
    F(i, 0, string1.length())
    {
        if (string1[i] == 'a' || string1[i] =='e' || string1[i] == 'i'|| string1[i] == 'o' || string1[i]=='u')
            cnt1++;
    }

    F(i, 0, string2.length()) {
        if (string2[i] == 'a' || string2[i] =='e' || string2[i] == 'i'|| string2[i] == 'o' || string2[i]=='u')
            cnt2++;
    }

    F(i, 0, string3.length()) {
        if (string3[i] == 'a' || string3[i] =='e' || string3[i] == 'i'|| string3[i] == 'o' || string3[i]=='u')
            cnt3++;
    }

    if (cnt1 == 5 && cnt2 == 7 && cnt3 == 5) PYES;
    else PNO;

   // cout  << string1 << endl << string2 << endl << string3 ;
}






// g++ -o hello hello.cpp
// ./hello
