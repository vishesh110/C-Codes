//Increasing the size of array 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int *p = new int[5];
    p[0]=3;
    p[1]=5;
    p[2]=7;
    p[3]=9;
    p[4]=11;
    int *q = new int[10];
    for(int i=0;i<5;i++){
        q[i] = p[i];
    }
    delete []p;
    p = q;
    q = NULL;
    for(int i=0;i<10;i++){
        cout<<p[i];
    }
    return 0;
}