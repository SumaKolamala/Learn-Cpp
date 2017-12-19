// executed yes
// submitted yes
// link: https://www.hackerrank.com/challenges/insertionsort2/problem

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int n, int *  A) {
    int i, value, hole;
    for (i=1;i<n;i++)
	{
		value=A[i];
		hole=i;
		while ((hole>0) && (A[hole-1]>value))
		{
			A[hole]=A[hole-1]; 
			hole--; 
		}
		A[hole]=value; 
        for (int j=0;j<n;j++){
            cout<<A[j]<<" ";
        }
        cout<<endl;
		
    }


}
int main(void) {
   
    int _ar_size;
    cin >> _ar_size;
    //scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        cin >> _ar[_ar_i];
        //scanf("%d", &_ar[_ar_i]); 
    }

   insertionSort(_ar_size, _ar);
   
   return 0;
}

