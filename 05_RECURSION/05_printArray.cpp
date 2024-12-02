#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> &arr,int size,int index){
    if(index==size){
        return;
    }
    cout<<arr[index]<<"\t";
    printArray(arr,size,index+1);
}

int main()
{
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    arr.push_back(60);
    int size=arr.size();
    printArray(arr,size,0);
}