//Finding Missing element in an Unsorted array(Best way mp)
#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[11];
    int size;
    int length;
}; 

void MissingElement(struct Array arr){
    int H[13] = {};
    for(int i=0;i<arr.length;i++){
        H[arr.A[i]]++;
    }
    H[0]++;
    for(int i=0;i<13;i++){
        if(H[i]==0){
            cout<<"Missing Element: "<<i<<endl;
        }
    }
}

int main(){
    struct Array arr = {{3,7,4,9,12,6,1,11,2,10},10,10};
    MissingElement(arr);
    return 0;
}