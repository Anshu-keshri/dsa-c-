#include<iostream>
#include<vector>
using namespace std;

void createArray(vector<vector<int>> &arr,int rowSize,int colSize){
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            cout<<"enter the ("<<i<<","<<j<<") element of array: ";
            cin>>arr[i][j]; 
        }
    }
}

void outputArray(vector<vector<int>> &arr,int rowSize,int colSize){
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void transpose(vector<vector<int>> &arr,int rowSize,int colSize){

    createArray(arr,rowSize,colSize);
    for(int i=0;i<rowSize;i++){
        for(int j=i;j<colSize;j++){   
            swap(arr[i][j],arr[j][i]);
        }
    }

}

int main()
{
    vector<vector<int>>arr(3,vector<int>(3,0));
    int rowSize=arr.size();
    int colSize=arr[0].size();
    
    transpose(arr,rowSize,colSize);
    outputArray(arr,rowSize,colSize);
    
}