//Linear search in array with Move to front/Head method 
#include<bits/stdc++.h>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    cout<<"\nElements are:"<<endl;
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}

void swap(int *x, int *y){
    int temp=*x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array *arr, int key){
    for(int i=0;i<arr->length;i++){
        if(arr->A[i] == key){
            swap(&arr->A[i],&arr->A[0]);
            return i;
        }
    }
    return -1;
}

int main(){
    struct Array arr = {{8,9,4,7,6,3,10,5,14,2},10,10};
    cout<<LinearSearch(&arr,5);
    Display(arr);
    return 0;
}