// easy (15)
// executed yes
// submitted yes
// link: https://www.hackerrank.com/challenges/the-hurdle-race/problem

#include <bits/stdc++.h>
using namespace std;

int findNum(vector <int> h, int n, int k)
{
    int i, max=h[0], ans;
    for (i=1;i<n;i++)
    {
        if (h[i]>max)
        {
            max=h[i];
        }
    }
    if (max<=k)
    {
        ans=0;
    }
    else 
        ans=max-k;
    return ans;
}


int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> height(n);
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
    }
    cout<<findNum(height,n,k);
    return 0;
}

