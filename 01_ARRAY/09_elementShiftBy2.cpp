#include<iostream>
using namespace std;

void shift(int arr[],int size){
    int temp[]={arr[size-2],arr[size-1]}; //we created array as if question ask to shift by 10...then we can not declare 10 variables 

    for(int i=size-1;i>=2;i--){
        arr[i]=arr[i-2];
    }
    for(int i=0;i<2;i++){
        arr[i]=temp[i];
    }
}

int main()
{
    int arr[]={10,20,30,40,50,60};
    int size=sizeof(arr)/sizeof(arr[0]);
     
    shift(arr,size);
    cout<<"array after shifting: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}