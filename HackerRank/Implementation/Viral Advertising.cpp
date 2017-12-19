//easy (15)
//executed yes
//submitted yes
// link: https://www.hackerrank.com/challenges/strange-advertising/problem

#include <bits/stdc++.h>
using namespace std;

int findNum(int n, int m)
{
    m=5; int sum=0; int people;
    for(int i=1;i<=n;i++)
    {
        people=m/2;
        m=people*3;
        sum=sum+people;
    }
    return sum;
}


int main() {
    int n,m, people, ans;
    cin>>n;
    ans=findNum(n,m);
    cout<<ans;
    return 0;
}

