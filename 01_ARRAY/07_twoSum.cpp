#include<iostream>
using namespace std;

void twoSum(int arr[],int size,int target){
    
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if((arr[i]+arr[j])==target){
                cout<<"index of the number is"<<i<<" "<<j;
                return;
            }
        }
    }
}

int main()
{
    int arr[]={2, 7, 11, 15};
    int target=17;
    int size=sizeof(arr)/sizeof(arr[0]);

    twoSum(arr,size,target);

}