#include <bits/stdc++.h>
using namespace std;
#define ll  long long
#define ld  long double
#define mk  make_pair
#define vi  vector<int>
#define vl  vector<long long>
#define pqi priority_queue<int>
#define qi  queue<int>
#define sc  set<char>
#define ss  set<string>
#define si  set<int>
#define pii pair<int, int>
#define mci map<char,int>

int ans = 0;
vector<vector<int>> a;

void dfs(int node, int depth) {
    if (node == -1) {
        ans = max(ans, depth);
        return;
    }
    for (auto &child: a[node]) {
        dfs(child, depth + 1);
    }
}


int main()
{
    int n;
    cin >> n;
    a.resize(n + 1);
    for (int i = 1, x; i <= n; ++i) {
        cin >> x;
        a[i].push_back(x);
    }
    for (int i = 1; i <= n; ++i) {
        dfs(i, 0);
    }
    cout << ans;

    return 0;
}