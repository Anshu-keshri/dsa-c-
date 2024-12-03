#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<int> &arr,int size,int target,int start,int end){
    int mid=start+(end-start)/2;
    if(start>end){
        return false;
    }

    if(arr[mid]==target){
        return true;
    }

    if(arr[mid]>target){
        end=mid-1;
    }

    if(arr[mid]<target){
        start=mid+1;
    }

    bool ans=binarySearch(arr,size,target,start,end);
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

    int target;
    cout<<"enter the target element: ";
    cin>>target;

    int value=binarySearch(arr,size,target,0,size-1);
    cout<<"is target found: "<<value<<"\n";
}