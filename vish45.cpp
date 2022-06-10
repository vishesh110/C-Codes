//Finding a pair of elements with their sum = k in Sorted Array
#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[11];
    int size;
    int length;
};

void PairElements(struct Array arr,int k){
    int i,j;
    i=0,j=arr.length-1;
    while(i!=j){
        if(arr.A[i]+arr.A[j]>10){
            j--;
        }
        else if(arr.A[i]+arr.A[j]<10){
            i++;
        }
        else{
            cout<<arr.A[i]<<" "<<arr.A[j]<<endl;
            i++;
            j++;
        }
    }
}

int main(){
    struct Array arr = {{1,3,4,5,6,8,9,10,12,14},10,10};
    PairElements(arr,10);
    return 0;
}