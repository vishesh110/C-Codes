//nCr using recursion
#include<bits/stdc++.h>
using namespace std;
int C(int n, int r){
    int ans;
    if(n==r || r==0){
        return 1;
    }
    ans = C(n-1,r-1) + C(n-1,r);
    return ans;
}
int main(){
    cout<<C(10,5)<<endl;
    return 0;
}