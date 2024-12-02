#include<bits/stdc++.h>
using namespace std;

int minInArray(vector<int> &arr,int size,int index,int min){
    
    if(index==size){
        return min;
    }    
    if(arr[index]<min){
        min=arr[index];
    }
    int ans=minInArray(arr,size,index+1,min);
    
    return ans;
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
    int min_value=minInArray(arr,size,0,INT_MAX);
    cout<<"minimum value is: "<<min_value<<"\n";
}