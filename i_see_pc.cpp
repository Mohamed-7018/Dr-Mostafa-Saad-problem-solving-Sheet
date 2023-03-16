/**
 *    author:  I_See_PC - Mohamed Samir Salem
 *    created at:2023-01-03  00:07:10+02:00
 *    Samir's 1st law : خلاص هانت كلها كام سنة و نموت فمش فارقة كتير
 *    Samir's 2nd law : ايه فايدة البروبلم سولفنج و انت مش عارف تحل مشاكلك الشخصية
 *    Samir's 3rd law : عامل ايه ..=بحاول ابقا كويس-
 *    Samir's 4th law : محدش مهتم
 *    Samir's 5th law :depression is not a side effect of illness it's a side effect of dying✨
 **/

#include <bits/stdc++.h>
// #define  LOCAL
using namespace std;

// #include "debug.hpp"

#ifdef LOCAL
#include "debug.hpp"
#else
#define debug(...) 42
#endif

#define endl '\n'

#define lowbit(i) (i & -i)

// #define ll  long long
using ll = long long;
#define ld long double
#define ull unsigned long long int

#define psv pair<string, vector<int>>
#define mci map<char, int>
#define msv map<string, vector<string>>
#define sz(s) (int)(s.size())
#define mll map<ll, ll>

template <typename T>
using vc = vector<T>;
template <typename T>
using vvc = vector<vc<T>>;
template <typename T>
using vvvc = vector<vvc<T>>;
#define vi vector<int>
#define vs vector<string>
#define vvs vector<vector<string>>
#define vl vector<long long>
#define vps vector<pair<string, string>>
#define vpl vector<pair<ll, ll>>
#define vpsi vector<pair<string, int>>
#define vpsl vector<pair<string, ll>>
#define um un_orderedmap

#define pii pair<int, int>
#define pll pair<ll, ll>

#define fi first
#define se second

#define pb push_back
#define ppb pop_back
#define ppf pop_front
#define eb emplace_back

#define SORT(v) sort(all(v))
#define REV(v) reverse(all(v))
#define pqi priority_queue<int>
#define qi queue<int>
#define sc set<char>
#define si set<int>
#define sl set<ll>
#define mk make_pair

#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))

#define F(I, S, E) for (int I = S; I < E; I++)
#define RF(I, S, E) for (int I = S; I > E; I--)

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

#define PImpossible cout << "Impossible\n"
#define PInfinity cout << "Infinity\n"
#define Pinfinity cout << "infinity\n"

#define show(C)           \
    for (auto J : C)      \
        cout << J << " "; \
    cout << endl;

template <class T>
bool chmax(T &a, const T &b)
{
    if (a < b)
    {
        a = b;
        return 1;
    }
    return 0;
}

template <class T>
bool chmin(T &a, const T &b)
{
    if (a > b)
    {
        a = b;
        return 1;
    }
    return 0;
}

template <typename typC, typename typD>
istream &operator>>(istream &cin, pair<typC, typD> &a) { return cin >> a.first >> a.second; }

template <typename typC>
istream &operator>>(istream &cin, vector<typC> &a)
{
    for (auto &x : a)
        cin >> x;
    return cin;
}

template <typename typC, typename typD>
ostream &operator<<(ostream &cout, const pair<typC, typD> &a) { return cout << a.first << ' ' << a.second; }

template <typename typC, typename typD>
ostream &operator<<(ostream &cout, const vector<pair<typC, typD>> &a)
{
    for (auto &x : a)
        cout << x << '\n';
    return cout;
}

template <typename typC>
ostream &operator<<(ostream &cout, const vector<typC> &a)
{
    int n = a.size();
    if (!n)
        return cout;
    cout << a[0];
    for (int i = 1; i < n; i++)
        cout << ' ' << a[i];
    return cout;
}

template <typename typC, typename typD>
bool cmin(typC &x, const typD &y)
{
    if (x > y)
    {
        x = y;
        return 1;
    }
    return 0;
}

template <typename typC, typename typD>
bool cmax(typC &x, const typD &y)
{
    if (x < y)
    {
        x = y;
        return 1;
    }
    return 0;
}

template <typename typC>
vector<typC> range(typC l, typC r, typC step = 1)
{
    assert(step > 0);
    int n = (r - l + step - 1) / step, i;
    vector<typC> res(n);
    for (i = 0; i < n; i++)
        res[i] = l + step * i;
    return res;
}

#define TEST          \
    int(testcases);   \
    cin >> testcases; \
    while (testcases--)

#define TEST1       \
    int(testcases); \
    testcases = 1;  \
    while (testcases--)

ll mypow(ll x, ll n)
{
    ll result = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
            result = result * x;

        x = x * x;
        n = n / 2;
    }

    return result;
}

void begin()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

bool isPrime(ll x)
{
    if (x <= 1)
        return false;
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

//*----------------------------------------------------------------------------*//
//*----------------------------------   GCD ------------------------------------//
//*----------------------------------------------------------------------------*//
long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a % b, b);
    return gcd(a, b % a);
}

class Graph
{
    int v;
    vector<list<int>> adj;

public:
    Graph(int v);
    void addEdge(int v, int w);
    void BFS(int s);
    // dfs variables
    map<int, bool> dfsVisited;
    void DFS(int v);
};

Graph::Graph(int v)
{
    this->v = v;
    adj.resize(v);
}

// -------------------------------------------------------------------------- //
// -------------------------- Graph DFS - BFS ------------------------------- //
// -------------------------------------------------------------------------- //
void Graph::addEdge(int v, int w)
{
    adj[v].pb(w);
}

void Graph::BFS(int s)
{
    vector<bool> visited;
    visited.resize(v, false);

    list<int> queue;

    visited[s] = true;
    queue.pb(s);

    while (!queue.empty())
    {
        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        for (auto adjacent : adj[s])
        {
            if (!visited[adjacent])
            {
                visited[adjacent] = true;
                queue.pb(adjacent);
            }
        }
    }
}

void Graph ::DFS(int v)
{
    dfsVisited[v] = true;
    cout << v << " ";
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
    {

        if (!dfsVisited[*i])
            DFS(*i);
    }
}

// ----------------------------------------------------------------------------------------- //
// --------------------- Dijkstra's shortest path algorithm ------------------------------- //
// --------------------------------------------------------------------------------------- //

// coming soon

// --------------------------------------------------------------------------- //
// --------------------- Main Function (solve )------------------------------- //
// -------------------------------------------------------------------------- //
void solve()
{
    ll n, m;
    cin >> n >> m;

    vl xx(n);

    ll ans = n;
    F(i, 0, m)
    {
        ll x, y;
        cin >> x >> y;
        if (x > y)
        {
            ll temp = x;
            x = y;
            y = temp;
        }
        if (xx[x] == 0)
            ans--;
        xx[x]++;
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll o, u, v;
        cin >> o;
        if (o == 1)
        {
            cin >> u >> v;

            if (u > v)
            {
                ll temp = u;
                u = v;
                v = temp;
            }
            if (xx[u] == 0)
                ans--;
            xx[u]++;
        }
        if (o == 2)
        {
            cin >> u >> v;
            if (u > v)
            {
                ll temp = u;
                u = v;
                v = temp;
            }
            if (xx[u] == 0)
                ans--;
            xx[u]--;
        }
        if (o == 3)
        {
            cout << ans << endl;
        }
    }
}

int main()
{
    begin();

    TEST1
    {
        solve();
    }

    return 0;
}


/*
g++ -o hello hello.cpp
./hello
*/
