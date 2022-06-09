//C to C++ program but with templates 
#include<bits/stdc++.h>
using namespace std;

template <class T>
class Array{ //Inside the class we have functions in public domain
private:
    T *A;
    int size;
    int length;
    void swap(int *x, int *y);

public:
    Array(){
        size = 10;
        length = 0;
        A = new T[size];
    }
    Array(int sz){ //Paramterized constructor 
        size = sz;
        length = 0;
        A = new T[size];
    }
    ~Array(){
        delete []A;
    }
    //Now adding the functions in the class as prototypes
    void Display();
    void Insert(int index, T x);
    T Delete(int index);
}; 

template<class T>
void Array<T>::Display(){
    cout<<"\nThe elements are:";
    for(int i=0;i<length;i++){
        cout<<"\n"<<A[i];
    }
    cout<<"\n";
}

template <class T>
void Array<T>::Insert(int index, T x){
    if(size>length){
        for(int i=length;i>index;i--){
            A[i] = A[i-1];
        }
        A[index] = x;
        length++;
    }
}

template<class T>
T Array<T>::Delete(int index){
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

//Same like this procedure where we dont use arr. or arr-> since we are using class not structure, we can add all other functions for our use as well.

int main(){
    
    Array<int> arr(10);

    arr.Insert(0,5);
    arr.Insert(1,6);
    arr.Insert(2,9);
    arr.Display();
    return 0;
}

