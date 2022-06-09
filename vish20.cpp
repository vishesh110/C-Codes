//Deleting an element from an array
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

int Delete(struct Array *arr, int index){
    int x = 0;
    if(index>=0 && index<arr->length-1){
        x = arr->A[index];
        for(int i=index;i<arr->length-1;i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

int main(){
    struct Array arr = {{1,2,3,4,5},10,5};
    Delete(&arr,3);
    Display(arr);
    return 0;
}
