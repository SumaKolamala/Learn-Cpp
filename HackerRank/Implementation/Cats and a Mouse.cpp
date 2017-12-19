// easy (15)
// executed yes
// submitted yes
// link: https://www.hackerrank.com/challenges/cats-and-a-mouse/problem

#include <bits/stdc++.h>
using namespace std;


int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        int x1= abs(x-z);
        int y1= abs(y-z);
        if(x1>y1)
            cout<<"Cat B"<<endl;
        else if (y1>x1)
            cout<<"Cat A"<<endl;
        else 
            cout<<"Mouse C"<<endl;
    }
    return 0;
}

