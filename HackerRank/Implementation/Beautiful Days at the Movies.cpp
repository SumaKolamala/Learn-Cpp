// easy (15)
// executed yes
// submitted yes
// link: https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem


#include <bits/stdc++.h>
using namespace std;

int rev(int x)
{
    int rev=0, rem;
     while(x!=0)
    {
        rem = x%10;
        rev= rev*10 + rem;
        x/=10;
    }
    return rev;
}

int main() {
    int i,j,k,x,r,temp, count=0;
    cin>>i>>j>>k;
    for(x=i;x<=j;x++)
        {
            r=rev(x);
            temp=abs(r-x);
            if((temp%k)==0)
                count++;
        }
    cout<<count;
     
    
    return 0;
}

