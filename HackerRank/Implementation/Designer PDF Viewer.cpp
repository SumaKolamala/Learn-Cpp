//executed yes
//submitted yes
//link: https://www.hackerrank.com/challenges/designer-pdf-viewer/problem


#include <bits/stdc++.h>
using namespace std;

int findSize(vector <int> h, string word, int length)
{
    int max=INT_MIN; int height, val;
    for (int i=0; i<length; i++)
    {
    	cout<<i<<endl;
        val= word[i]-'0'-48;
        cout<<val<<endl;
        height = h[val-1];
        cout<<height<<endl;
        if (height>max)
        {
            max=height;
        }
        
    }
    cout<<max<<endl;
    int vol=length*max;
    return vol;
}


int main(){
    vector<int> h(5);
    for(int h_i = 0; h_i < 5; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int length=word.length();
    cout<<"l is "<<length<<endl;
    int ans= findSize(h, word, length);
    cout<<ans;
    return 0;
}

