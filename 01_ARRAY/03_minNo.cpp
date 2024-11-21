#include<iostream>
using namespace std;

int min(int arr[],int size){
    int min=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[]={3,2,5,7,9,6,1,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int min_value=min(arr,size);
    cout<<"min value in this array: "<<min_value<<"\n";
}