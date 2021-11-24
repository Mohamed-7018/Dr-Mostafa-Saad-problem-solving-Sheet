#include <iostream>
#include<set>

using namespace std;

int main () {
    int n;
    cin>>n;


    set<int> levels;

    int levelX, levelY;
    cin >> levelX;


    for (int i=0; i<levelX; i++) {
        int x;
        cin>>x;
        levels.insert(x);
    }

    cin>> levelY;
    for (int i=0; i<levelY; i++) {
        int y;
        cin>>y;
        levels.insert(y);
    }

    if (levels.size()==n) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";

}
