//Finding a single element in an sorted array, not starting from 0 or 1 
#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[11];
    int size;
    int length;
}; 

void MissingElement(struct Array arr){
    int difference = arr.A[0] - 0;
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]-i != difference){
            cout<<"The missing element is: "<<i+difference<<endl;
            break;
        }
    }
}
int main(){
    struct Array arr = {{6,7,8,9,10,11,13,14,15,16,17},11,11};
    MissingElement(arr);
    return 0;
}