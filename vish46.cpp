//Finding MIN and MAX in an Array in a single scan
#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[11];
    int size;
    int length;
};

void Min_Max(struct Array arr){
    int min,max;
    min=max=arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]<min){
            min=arr.A[i];
        }
        else if(arr.A[i]>max){
            max=arr.A[i];
        }
    }
    cout<<"MAX: "<<max<<endl;
    cout<<"MIN: "<<min<<endl;
}
int main(){
    struct Array arr = {{5,8,3,9,6,2,10,7,-1,4},10,10};
    Min_Max(arr);
    return 0;
}