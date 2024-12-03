#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(vector<int> &arr,int size,int index){
    if(index==size){
        return true;
    }
    if(arr[index-1]>arr[index]){
        return false;
    }
    int ans=checkSorted(arr,size,index+1);
    return ans;
}

int main()
{
    vector<int> arr;
    arr.push_back(100);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(45);
    arr.push_back(60);
    int size=arr.size();

    int value=checkSorted(arr,size,1);
    cout<<"is array sorted? "<<value<<"\n";
}
