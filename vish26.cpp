//Reversing an array using an auxiliary array 
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

void Reverse(struct Array *arr){
    int *B;
    int i,j;
    B = new int[arr->length];
    for(i=arr->length-1,j=0;i>=0;i--,j++){
        B[j] = arr->A[i];
    }
    for(int i=0;i<arr->length;i++){
        arr->A[i] = B[i];
    }
}

int main(){
    struct Array arr = {{2,3,4,5,6},10,5};

    Reverse(&arr);
    Display(arr);
    return 0;
}