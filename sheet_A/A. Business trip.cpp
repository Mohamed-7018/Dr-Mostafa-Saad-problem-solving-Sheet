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
    begin();

   int k;
   cin >>k;
   int a[12],sum=0,counter=0;
   for (int i=0;i<12; i++) {
       cin>>a[i];
       sum +=a[i];
   }

    sort(a,a+12);

    if (k==0) cout << 0;
    else if (sum < k) cout <<-1;
    else {
        sum=0;
        for (int i=0; i <12;i++) {
            //cout << a[12-i-1] << " ";
            sum+=a[12-i-1];
            counter++;
            if (sum>=k) break;
        }
      //  cout << endl;
        cout << counter ;
    }

    return 0;

}





// g++ -o hello hello.cpp
// ./hello