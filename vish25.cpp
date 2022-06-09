//Sum function on array using recursion
#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    cout<<"\nThe elements are:";
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<"\n";
    }
}

int RSum(int a[], int n){
    if(n<0){
        return 0;
    }
    else{
        return RSum(a,n-1) + a[n];
    }
    
}

int main(){
    struct Array arr = {{3,0,5,2,7},10,5};
    cout<<RSum(arr.A,arr.length-1);
    Display(arr);
    return 0;
}