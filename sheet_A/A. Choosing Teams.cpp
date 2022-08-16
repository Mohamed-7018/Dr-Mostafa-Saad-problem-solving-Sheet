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


int main(){
    int n , k;
    cin >>n >> k;
    int valid  =0;

    for (int i = 0; i < n; i++) {
      int persons;
      cin >> persons;

      if (persons + k <= 5) {
          valid ++;
      }
    }
    cout << valid/3;

    return  0;

}