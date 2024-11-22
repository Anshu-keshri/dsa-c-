#include<iostream>
#include<vector>
using namespace std;

void createArray(vector<vector<int>>&arr,int rowSize, int colSize){  // call by reference....
    
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            cout<<"enter the element of array: ";
            cin>>arr[i][j];
        }
    }
}

bool linearSearch(vector<vector<int>> &arr,int rowSize,int colSize,int target){  // call by reference.....

    createArray(arr,rowSize,colSize);
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }

    return false;

}

int main()
{
    vector<vector<int>>arr(4,vector<int>(3,0));
    int rowSize=arr.size();  // gives size of row...
    int colSize=arr[0].size();  //gives size of column....

    //createArray(arr,rowSize,colSize);

    // for(int i=0;i<rowSize;i++){
    //     for(int j=0;j<colSize;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

    int target=9;

    int ans=linearSearch(arr,rowSize,colSize,target);
    if(ans==1){
        cout<<"found true";
    }
    else{
        cout<<"not found";
    }
}