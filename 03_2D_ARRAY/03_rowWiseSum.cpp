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

void rowSum(vector<vector<int>> &arr,int rowSize,int colSize){

    createArray(arr,rowSize,colSize);

    for(int i=0;i<rowSize;i++){
        int sum=0;
        for(int j=0;j<colSize;j++){
            sum=sum+arr[i][j];
        }
        cout<<"sum of row "<<i<<" is: "<<sum<<"\n";
    }
}

int main()
{
    vector<vector<int>>arr(4,vector<int>(3,0));
    int rowSize=arr.size();
    int colSize=arr[0].size();

    rowSum(arr,rowSize,colSize);



}