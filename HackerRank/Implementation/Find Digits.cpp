//easy (25)
//executed yes
//submitted yes
//link: https://www.hackerrank.com/challenges/find-digits/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int temp , m=n , c = 0 ;
        while(m>0) {
            temp = m%10 ;
            if(temp != 0 && n%temp==0)
                c++;
            m/=10 ;
        }
        cout << c << endl ;
    }
    return 0;
}

