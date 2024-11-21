#include<iostream>
using namespace std;

void count(int arr[],int size){

    int zeroCount=0;
    int oneCount=0;

    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zeroCount=zeroCount+1;
        }

        else{
            oneCount=oneCount+1;
        }
    }
    cout<<"no of zeros in this array is: "<<zeroCount<<"\n";
    cout<<"no of ones in this array is: "<<oneCount<<"\n";

}

int main()
{
    int arr[]={0,1,0,1,0,1,1,0,0,1,1,0,1,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"size of array is: "<<size<<"\n";
    count(arr,size);

}