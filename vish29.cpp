//To check if the array is sorted
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

int IsSortedOrNot(struct Array arr){
    for(int i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    struct Array arr = {{2,3,5,10,15},10,5};
    cout<<IsSortedOrNot(arr);
    Display(arr);
    return 0;
}