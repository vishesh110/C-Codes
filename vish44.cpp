//Finding a pair of elements with their sum = k in Unsorted Array (2 Methods) 
#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[11];
    int size;
    int length;
};

void method1(struct Array arr,int k){
    for(int i=0;i<arr.length-1;i++){
        for(int j=i+1;j<arr.length;j++){
            if(arr.A[i]+arr.A[j]==k){
                cout<<"These 2 elements are the required pair: "<<arr.A[i]<<" & "<<arr.A[j]<<endl;
            }
        }
    }
}

void method2(struct Array arr,int k){
    int H[17] = {};
    for(int i=0;i<arr.length;i++){
        if(H[k-arr.A[i]]==1){
            cout<<"These 2 elements are the required pair: "<<arr.A[i]<<" & "<<k-arr.A[i]<<endl;
        }
        H[arr.A[i]]++;
    }
}

int main(){
    struct Array arr = {{6,3,8,10,16,7,5,2,9,14},10,10};
    method2(arr,10);
    return 0;
}