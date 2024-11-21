#include<iostream>
using namespace std;

int main()
{
    int arr[5]={2,4,6,8,10};
    int target=8;
    for(int i=0;i<5;i++){
        if(arr[i]==target){
            cout<<"target found succesfully..... ";
            break;
        }
    }
}