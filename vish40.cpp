//Finding more than 1 or more elements in an Sorted Array 
#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[11];
    int size;
    int length;
}; 

void MissingElement(struct Array arr){
    int difference = arr.A[0]-0;
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]-i != difference){
            while(difference<arr.A[i]-i){
                cout<<i+difference<<endl;
                difference++;
            }
        }
    }
}

int main(){
    struct Array arr = {{6,7,8,9,11,12,15,16,17,18,19},11,11};
    MissingElement(arr);
    return 0;
}