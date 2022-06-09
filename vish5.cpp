//Taylors series using iterative loops 
#include<bits/stdc++.h>
using namespace std;
double e(int x, int n){
    double s=1, num = 1, den = 1;
    for(int i=1;i<=n;i++){
        
        num = num * x;
        den = den * i;
        s = s + num/den;

    }
    return s;
}
int main(){
    cout<<e(4,15)<<endl;
    return 0;
}