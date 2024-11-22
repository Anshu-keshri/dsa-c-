#include<iostream>
using namespace std;

void orderedPair(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i]<<","<<arr[j]<<"  ";
        }
        cout<<"\n";
    }
}

int main()
{
    int arr[]={1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);

    orderedPair(arr,size);
}