//Left shift and left rotate in an array
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

void ShiftRotate(struct Array *arr){
    int temp = arr->A[0]; 
    for(int i=1;i<arr->length;i++){
        arr->A[i-1] = arr->A[i];
    }
    arr->A[arr->length-1] = temp; 
}

int main(){
    struct Array arr = {{2,3,4,5,6},10,5};
    ShiftRotate(&arr);
    Display(arr);
    return 0;
}