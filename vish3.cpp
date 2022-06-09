//Taylors series using Horner's rule(using loop)
#include<bits/stdc++.h>
using namespace std;
double e(int x, int n){
    double s = 1;
    for(;n>0;n--){
        s = 1 + x*s / n;
    }
    return s;
}
int main(){
    cout<<e(4,15)<<endl;
    return 0;
}