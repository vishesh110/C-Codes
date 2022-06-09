//Binary search using recursion
#include<bits/stdc++.h>
using namespace std; 
struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    cout<<"The elements are:\n";
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i];
    }
}

int RBinarySearch(int a[], int l, int h, int key){
    if(l<=h){
        int mid = (l+h)/2;
        if(key == a[mid]){
            return mid;
        }
        else if(key>a[mid]){
            return RBinarySearch(a,mid+1,h,key);
        }
        else{
            return RBinarySearch(a,l,mid-1,key);
        }
    }
    return -1;
}

int main(){
    struct Array arr = {{2,3,4,5,6},10,5};
    cout<<"\n"<<RBinarySearch(arr.A,0,arr.length-1,6)<<"\n";
    Display(arr);
    return 0;

}