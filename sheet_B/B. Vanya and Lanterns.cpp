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
    begin () ;

    int n, l;
    cin >> n>>l;


    int arr[n]; double maxDifference=0;

    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    sort(arr,arr+n);

//    cout << l <<' ' <<arr[n-1] << endl;
    for (int i=0;i<n;i++){
      if (arr[0] !=0) {

          if (n==1) {
            maxDifference = max(arr[0], l-arr[0]);
          }
          else if (i==0) maxDifference = arr[i] -0;
          else maxDifference = max(maxDifference,max(((arr[i] -arr[i-1])*1.0)/2.0, ((l- arr[n-1])*1.0)));
      }else {
          if (n==1) {
              maxDifference = l*2;
          }
          if (i!=0)  {
              maxDifference = max(maxDifference,max((arr[i] -arr[i-1])*1.0, (l- arr[n-1])*1.0));
          }


      }
    }

    if (arr[0] !=0) cout <<fixed<<setprecision(10)<< maxDifference;
    else cout <<fixed<<setprecision(10)<< maxDifference/2.0;

    return 0;
}





// g++ -o hello hello.cpp
// ./hello
