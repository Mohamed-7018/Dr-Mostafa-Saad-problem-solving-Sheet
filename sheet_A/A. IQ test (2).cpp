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



int main()
{
    int n, x, even(0), lastodd(0), lasteven(0);
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            even += 1;
            lasteven = i;
        }
        else
        {
            even -= 1;
            lastodd = i;
        }
    }

    cout << (even > 0 ? lastodd : lasteven) << endl;

    return 0;
}