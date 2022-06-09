//-ve on left side and +ve on right side of an array
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

void Rearrange(struct Array *arr){
    int i=0,j=arr->length-1;
    while(i<j){
        while(arr->A[i]<0){
            i++;
        }
        while(arr->A[j]>=0){
            j--;
        }
        if(i<j){
            int temp;
            temp = arr->A[i];
            arr->A[i] = arr->A[j];
            arr->A[j] = temp;
        }
    }
}

int main(){
    struct Array arr = {{-6,3,-8,10,5,-7,-9,12,-4,2},10,10};
    Rearrange(&arr);
    Display(arr);
    return 0;
}
