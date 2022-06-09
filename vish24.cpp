//get,set,max,min,sum and avg functions performed on array
#include<bits/stdc++.h>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    cout<<"The elements in the array are: \n";
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i];
    }
}

int Get(struct Array arr, int index){
    if(index>=0 && arr.length>index){
        return arr.A[index];
    }
    return -1;
}

void Set(struct Array *arr, int index, int x){
    if(index>=0 && arr->length>index){
        arr->A[index] = x;
    }
}

int Max(struct Array arr){
    int max = arr.A[0];
    for(int i=0;i<arr.length;i++){
        if(max<arr.A[i]){
            max = arr.A[i];
        }
    }
    return max;
}

int Min(struct Array arr){
    int min = arr.A[0];
    for(int i=0;i<arr.length;i++){
        if(min>arr.A[i]){
            min = arr.A[i];
        }
    }
    return min;
}

int Sum(struct Array arr){
    int sum = 0;
    for(int i=0;i<arr.length;i++){
        sum = sum + arr.A[i];
    }
    return sum;
}

float Avg(struct Array arr){
    float sum = 0, avg;
    for(int i=0;i<arr.length;i++){
        sum = sum + arr.A[i];
    }
    avg = sum/(arr.length);
    return avg;
}
int main(){
    
    struct Array arr = {{3,0,5,2,7},10,5};
    
    cout<<Get(arr,2)<<endl;
    
    Set(&arr,1,9);  
    
    cout<<Max(arr)<<endl;
    
    cout<<Min(arr)<<endl;
    
    cout<<Sum(arr)<<endl;
    
    cout<<Avg(arr)<<endl;
    
    Display(arr);
    
    return 0;
}


