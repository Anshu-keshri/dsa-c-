#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[5]={2,4,6,8,10};
    int target=8;
    // for(int i=0;i<5;i++){
    //     if(arr[i]==target){
    //         cout<<"target found succesfully..... ";
    //         break;
    //     }
    // }

    bool ans=linearSearch(arr,5,target);
    if(ans==1){
        cout<<"element found....";
    }
    else{
        cout<<"element not found.....";
    }


}