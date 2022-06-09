//Fibonacci series using loops 
#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    int i,s,t0=0,t1=1;
    for(i=2;i<=n;i++){
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}
int main(){
    cout<<fib(20)<<endl;
}