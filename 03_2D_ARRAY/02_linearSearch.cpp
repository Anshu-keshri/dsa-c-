#include<iostream>
#include<vector>
using namespace std;

void createArray(vector<vector<int>>&arr,int rowSize, int colSize){
    
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            cout<<"enter the element of array: ";
            cin>>arr[i][j];
        }
    }
}

int main()
{
    vector<vector<int>>arr(4,vector<int>(3,0));
    int rowSize=arr.size();
    int colSize=arr[0].size();

    createArray(arr,rowSize,colSize);

    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}