#include <iostream>
#include<algorithm>

using namespace std;

int main () {
    int colors[4];
    int counter=0;
    for (int i=0; i<4; i++)
        cin>>colors[i];

    sort (colors, colors+4);
    for (int i=0; i<3;i++) {
        if (colors[i]==colors[i+1]) counter++;
    }

    cout<<counter;

}
