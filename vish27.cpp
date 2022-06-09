//Reversing an Array without Auxiliary array
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
    int i,j,temp;
    for(i=0,j=arr->length-1;i<j;i++,j--){
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}

int main(){
    struct Array arr = {{2,3,4,5,6},10,5};

    Reverse(&arr);
    Display(arr);
    return 0;
}