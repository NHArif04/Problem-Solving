#include<iostream>

using namespace std;
typedef unsigned long ul;

ul countCycle(ul);

int main(){
    ul i, j;
    while(cin >>i>>j){
        cout<<i<<" "<<j<<" ";
        if(i>j) i^=j^=i^=j;
        ul max{};

        for(ul n=i; n<=j; n++){
            ul newMax = countCycle(n);
            if(newMax > max) max = newMax;
        }
        cout<<max<<endl;
    }
    return 0;
}

ul countCycle(ul n){
    ul count = 1;
        while (n!=1) {
            if ( n % 2 ){
                n = 3 * n + 1;
            } else {
                n /= 2;
            }
            count++;
        }
    return count;
}