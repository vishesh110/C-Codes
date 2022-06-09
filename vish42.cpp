//Finding Duplicates and counting in a Sorted Array using Hashing 
#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[11];
    int size;
    int length;
}; 

void Duplicate(struct Array arr){
    int H[21] = {};
    for(int i=0;i<arr.length;i++){
        H[arr.A[i]]++;
    }
    for(int i=0;i<21;i++){
        if(H[i]>1){
            cout<<"The Duplicate Element is "<<i<<" repeating "<<H[i]<<" times."<<endl;
        }
    }
}

int main(){
    struct Array arr = {{3,6,8,8,10,12,15,15,15,20},10,10};
    Duplicate(arr);
    return 0;
}