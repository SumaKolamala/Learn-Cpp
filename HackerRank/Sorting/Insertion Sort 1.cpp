//executed yes
//submitted yes
//link: https://www.hackerrank.com/challenges/insertionsort1/problem


#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector <int>  ar, int n) {
    int i, hole, value;
    value=ar[n-1];
    hole=n-1;
    for (i=n-2; i>-1; i--)
    {
        if (value<ar[i])
        {
            ar[i+1]=ar[i];
            hole--;
            for (int j=0;j<n;j++)
            {
                cout<<ar[j]<<" ";
            }
            cout<<endl;
        }
        
    }
    ar[hole]=value;
    for (int j=0;j<n;j++)
    {
        cout<<ar[j]<<" ";
    }


}
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    insertionSort(_ar, _ar_size);
    return 0;
}

