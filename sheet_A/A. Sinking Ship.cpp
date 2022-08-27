#include <bits/stdc++.h>
using namespace std;
#define ll  long long
#define ld  long double
#define mk  make_pair
#define vi  vector<int>
#define vs  vector<string>
#define vp  vector<pair<string, string>>
#define vl  vector<long long>
#define pqi priority_queue<int>
#define qi  queue<int>
#define sc  set<char>
#define ss  set<string>
#define si  set<int>
#define pii pair<int, int>
#define psv pair<string, vector<int>>
#define mci map<char,int>
#define msv map<string,vector<string>>


int main () {
   int n;
   cin >> n;


    vector<string> rats, womenAndChildren, men, captain;

    for (int i=0;i<n; i++) {
       string name, status;
       cin >>  name >> status;

        if (status == "rat")  rats.push_back(name);

        else if (status == "woman" || status == "child") womenAndChildren.push_back(name);

        else if (status == "man") men.push_back(name);

        else captain.push_back(name);
   }

    // print
    for (int i =0 ; i<rats.size(); i ++) {
        cout << rats[i] << endl;
    }
    for (int i =0 ; i<womenAndChildren.size(); i ++) {
        cout << womenAndChildren[i]<< endl;
    }
    for (int i =0 ; i<men.size(); i ++) {
        cout << men[i]<< endl;
    }
    for (int i =0 ; i<captain.size(); i ++) {
        cout << captain[i]<< endl;
    }
    


    return 0;
 }