//Converting the C programs untill now to a C++ program 
#include<bits/stdc++.h>
using namespace std;

class Array{ //Inside the class we have functions in public domain
private:
    int *A;
    int size;
    int length;
    void swap(int *x, int *y);

public:
    Array(){
        size = 10;
        length = 0;
        A = new int[size];
    }
    Array(int sz){ //Paramterized constructor 
        size = sz;
        length = 0;
        A = new int[size];
    }
    ~Array(){
        delete []A;
    }
    //Now adding the functions in the class as prototypes
    void Display();
    void Append(int x);
    int Delete(int x);
    void Insert(int index, int x);
    int LinearSearch(int key);
    int BinarySearch(int key);
    int Get(int index);
    void Set(int index, int x);
    int Max();
    int Min();
    int Sum();
    float Avg();
    void Reverse();
    void Insert(int x);
    void Rearrange();
    Array* Merge(Array *arr2);
    Array* Union(Array *arr2);
    Array* Intersection(Array *arr2);
    Array* Difference(Array *arr2);

}; 

void Array::Display(){
    cout<<"\nThe elements are:";
    for(int i=0;i<length;i++){
        cout<<"\n"<<A[i];
    }
    cout<<"\n";
}

void Array::Insert(int index, int x){
    if(size>length){
        for(int i=length;i>index;i--){
            A[i] = A[i-1];
        }
        A[index] = x;
        length++;
    }
}

int Array::Delete(int index){
    int x = 0;
    if(index>=0 && index<length-1){
        x = A[index];
        for(int i=index;i<length-1;i++){
            A[i] = A[i+1];
        }
        length--;
        return x;
    }
    return 0;
}

int Array::BinarySearch(int key){
    int l,mid,h;
    l = 0;
    h = length-1;

    while(l<=h){
        mid = (l+h)/2;
        if(key == A[mid]){
            return mid;
        }
        else if(key<A[mid]){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return -1;
}

int Array::Sum(){
    int sum = 0;
    for(int i=0;i<length;i++){
        sum = sum + A[i];
    }
    return sum;
}

//Same like this procedure where we dont use arr. or arr-> since we are using class not structure, we can add all other functions for our use as well.

int main(){
    
    Array *arr1;
    int n,x,index,sz,sum;
    
    cout<<"Enter the size of Array: ";
    cin>>sz;
    arr1 = new Array(sz);

    do
    {
    cout<<"Menu\n";
    cout<<"1. Insert\n"; 
    cout<<"2. Delete\n";
    cout<<"3. Search\n";
    cout<<"4. Sum\n";
    cout<<"5. Display\n";
    cout<<"6. Exit\n";

    cout<<"Enter your choice: ";
    cin>>n;

    switch(n){
        case 1: cout<<"Enter the index and the value of the element you want to Insert: ";
        cin>>index>>x;
        arr1->Insert(index,x);
        break;

        case 2: cout<<"Enter the index of the element you want to Delete: ";
        cin>>index;
        x = arr1->Delete(index);
        cout<<"The deleted element is: "<<x;
        cout<<"\n";
        break;

        case 3: cout<<"Enter the element you want to search in the array: ";
        cin>>x;
        index = arr1->BinarySearch(x);
        cout<<"Element's index is "<<index;
        cout<<"\n";
        break;

        case 4: sum = arr1->Sum();
        cout<<"The Sum of all the elements of the Arrya are: "<<sum;
        cout<<"\n";
        break;

        case 5: arr1->Display();
    }
    }while(n<6);
    return 0;
}

