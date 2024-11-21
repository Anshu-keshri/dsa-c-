#include<iostream>
using namespace std;

void swap(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}

void reverse(int arr[],int size){
    for(int i=0,j=size-1;i<size/2-1,j>=size/2;i++,j--){
        swap(arr[i],arr[j]);
    }
}

int main()
{
    int arr[]={3,5,7,2,9,4};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"input array is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    reverse(arr,size);

    cout<<"\n"<<"reversed array is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


}