//Append and inserting in an array 
#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}
void Append(struct Array *arr, int x){
    if(arr->size>arr->length){
        arr->A[arr->length] = x;
        arr->length++;
    }
}
void Insert(struct Array *arr, int index, int x){
    if(arr->size>arr->length){
        for(int i=arr->length;i>index;i--){
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}
int main(){
    struct Array arr = {{8,3,7,12,6,9,10},10,7};
    Append(&arr,2);
    Insert(&arr,4,15);
    Display(arr);
    return 0;
}