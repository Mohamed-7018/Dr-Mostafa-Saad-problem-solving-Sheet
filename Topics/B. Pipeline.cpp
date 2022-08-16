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

ll sumSingleNumber (ll n) {
    return  (n*(n+1))/2;
}

ll SumTwoNumbers (ll begin , ll end) {
    if  (begin <= 1) {
        return sumSingleNumber(end);
    }
    return sumSingleNumber(end) - sumSingleNumber(begin-1);
}

ll minSplitter (ll k , ll n) {
    ll start =1;
    ll end = k;

    while (start < end) {
        ll middle = (start + end) / 2;
        ll sum = SumTwoNumbers(middle,k);


        if (sum == n)
            return  k - middle + 1;
        if (sum>n)
            start = middle +1;
        else
            end = middle;
    }
    return   k - start +2;
}

int main()
{
    ll n,k;
    cin>> n>>k;

    if (n==1 ) cout << 0;
    else if (n<=k) {
        cout << 1;
    }
    else {
        --k;
        --n;

        if (sumSingleNumber(k) < n) cout << -1 ;
        else cout << minSplitter(k,n);
    }
}