//Inserting in an Sorted Array 
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

void Insert(struct Array *arr, int x){
    int i=arr->length-1;
    while(arr->A[i]>x){
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;
}
int main(){
    struct Array arr = {{2,3,5,10,15},10,5};
    Insert(&arr,7);
    Display(arr);
    return 0;
}
