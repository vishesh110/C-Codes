//Fibonacci series using recursion 
#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}
int main(){
    cout<<fib(3)<<endl;
}
