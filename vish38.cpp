//Finding a single missing element in a Sorted Array(method 1-n number of elements starting from 0)
#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
}; 

int MissingElement(struct Array arr){
    int Element;
    int Actual_sum,n,Current_sum=0;
    n = 9;
    Actual_sum = (n*(n+1)/2);
    for(int i=0;i<arr.length;i++){
        Current_sum = Current_sum + arr.A[i];
    }
    Element = Actual_sum - Current_sum;
    return Element;
}
int main(){
    struct Array arr = {{1,2,3,4,5,6,8,9},10,9};
    cout<<MissingElement(arr)<<endl;
    return 0;
}