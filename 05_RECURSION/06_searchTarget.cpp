#include<iostream>
#include<vector>
using namespace std;

bool searchTarget(vector<int> &arr,int size,int index,int target){
    if(index==size){
        return false;
    }
    if(arr[index]==target){
        return true;
    }
    bool ans=searchTarget(arr,size,index+1,target);
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

    bool value=searchTarget(arr,size,0,50);
    cout<<"target is present? : "<<value<<"\n";
}