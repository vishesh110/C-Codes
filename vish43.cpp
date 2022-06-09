//Finding duplicate elements in Unsorted Array
#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[11];
    int size;
    int length;
};

void DupUnsorted_1(struct Array arr){ //Normal Method
    for(int i=0;i<arr.length-1;i++){
        int count=1;
        if(arr.A[i]!=-1){
            for(int j=i+1;j<arr.length;j++){
                if(arr.A[i]==arr.A[j]){
                    count++;
                    arr.A[j]=-1;
                }
            }
            if(count>1){
                cout<<"The element "<<arr.A[i]<<" is repeating "<<count<<" times."<<endl;
            }
        }
    }
}

void DupUnsorted_2(struct Array arr){ //Using Hash Table 
    int H[9] = {};
    for(int i=0;i<arr.length;i++){
        H[arr.A[i]]++;
    }
    for(int i=0;i<9;i++){
        if(H[i]>1){
            cout<<"The element "<<i<<" is repeating "<<H[i]<<" times."<<endl;
        }
    }
}

int main(){
    struct Array arr = {{8,3,6,4,6,5,6,8,2,7},10,10};
    DupUnsorted_2(arr);
    return 0;
}