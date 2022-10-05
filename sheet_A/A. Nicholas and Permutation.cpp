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
#define watch(x) cout << #x << " = " << x << endl;


using namespace std;


void open() {
#ifndef ONLINE_JUDGE
    freopen("standard.in", "r", stdin);
    freopen("standard.out", "w", stdout);
#endif
}

void begin() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    begin();
   // open();

    int n;
    cin >> n;

    int arr[n];
    int min=INT_MAX, max=0, minIndex =0, maxIndex = 0;
    for (int i=0;i<n;i++){
        cin >> arr[i];
        if (arr[i]<min) {
            min = arr[i];
            minIndex = i;
        }
         if (arr[i]>max) {
            max = arr[i];
            maxIndex = i;
        }
    }

//    cout <<  min << " "<< max << endl;
//    cout<< "a7aaaaaaaaaaaa" << ' '<< maxIndex <<endl;
    int ans = 0, ans2=0;
    if (minIndex !=0 || minIndex!=n-1){
        if (abs(n-1 - maxIndex) > abs(0 - maxIndex))  ans = abs(n-1 - maxIndex);
        else ans =  abs(0 - maxIndex);

    }
    if (maxIndex !=0 || maxIndex!=n-1){
        if (abs(n-1 - minIndex) > abs(0 - minIndex))  ans2 = abs(n-1 - minIndex);
        else ans2 =  abs(0 - minIndex);
    }

    ans>ans2 ?  cout << ans : cout << ans2;

    return 0;
}





// g++ -o hello hello.cpp
// ./hello

