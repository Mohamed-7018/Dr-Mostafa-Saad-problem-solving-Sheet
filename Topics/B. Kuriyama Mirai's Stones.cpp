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

    begin ()  ;

    int n;
    cin >> n;

    ll arr[n], prefixSum[n], sortArr[n], prefixSumSorted[n];


    for (int i=0;i<n;i++) {
        cin >> arr[i];
        sortArr[i] = arr[i];
        if (i!=0) prefixSum[i] = prefixSum[i-1] + arr[i];
        else prefixSum[0] = arr[0];
//        cout << prefixSum[i] << "  ";
    }
//    cout <<endl;

    sort(sortArr,sortArr+n);
    for (int i=0;i<n;i++) {
        if (i!=0) prefixSumSorted[i] = prefixSumSorted[i-1] + sortArr[i];
        else prefixSumSorted[0] = sortArr[0];
//        cout << prefixSumSorted[i]<< "  ";
    }
//    cout <<endl;



    ll m, ans;
    cin >> m;
    while (m--) {
        ans = 0;
        int type,l,r;
        cin >> type>>l>>r;
        if(type == 1)  {
            if (l<2)   ans = prefixSum[r-1];
           else  ans = prefixSum[r-1]- prefixSum[l-2];
        }else {
            if (l<2)   ans = prefixSumSorted[r-1];
            else ans = prefixSumSorted[r-1] - prefixSumSorted[l-2];
        }

        cout << ans  << endl;
    }

//    for (int i=0;i<n;i++) {
//        cout << prefixSum[i] << " ";
//    }
    return 0;
}





// g++ -o hello hello.cpp
// ./hello
