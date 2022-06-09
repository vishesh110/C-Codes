//Binary search using iterative loops
#include<bits/stdc++.h>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
};
int BinarySearch(struct Array arr, int key){
    int l,mid,h;
    l = 0;
    h = arr.length-1;

    while(l<=h){
        mid = (l+h)/2;
        if(key == arr.A[mid]){
            return mid;
        }
        else if(key<arr.A[mid]){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return -1;
}
void Display(struct Array arr){
    cout<<"The elements are:\n";
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i];
    }
}
int main(){
    struct Array arr = {{2,3,4,5,6},10,5};
    cout<<BinarySearch(arr,5)<<endl;
    Display(arr);
    return 0;
}