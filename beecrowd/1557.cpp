#include<bits/stdc++.h>
using namespace std;
int DigitCounter(int n){
    int cnt=0;
    while(n!=0){
            n/=10;
            cnt++;
    }
    return cnt;
}
int main() {

    int n,j,i,k,l;
    while(1){                                           //used for break the program on condition - when n=0
    scanf("%d",&n);
    int numberOfDigits = DigitCounter(pow(2,2*n-2));    //to count how many space/much width is needed
    if(n==0) break;
    for( i=0;i<n;i++){
        k=pow(2,i);
        l=1;
        l=l*k;
        for( j=0;j<n;j++){
            l=pow(2,j);
            l=l*k;
                                                        //set width for digit
            if(j!=n-1){
                cout<<right<<setw(numberOfDigits)<<l<<" ";
            }
            else
                cout<<right<<setw(numberOfDigits)<<l;

        }
        cout<<endl;
        }
        cout<<endl;
    }}
