#include<iostream>
using namespace std;

void extreme(int arr[],int size){
    int head=0;
    int tail=size-1;

    while(head<=tail){

        if(head==tail){
            cout<<arr[head]<<" ";
        }

        else{
            cout<<arr[head]<<" ";
            cout<<arr[tail]<<" ";
        }

        head++;
        tail--;
    }
}

int main()
{
    int arr[]={10,20,30,40,50,60};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"input array is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n"<<"extream point array is: ";
    extreme(arr,size);
}