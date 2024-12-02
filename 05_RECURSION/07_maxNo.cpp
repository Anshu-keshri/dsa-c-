#include<bits/stdc++.h>
using namespace std;

int maxInArray(vector<int> &arr,int size,int index,int max){
    
    if(index==size){
        return max;
    }    
    if(arr[index]>max){
        max=arr[index];
    }
    int ans=maxInArray(arr,size,index+1,max);
    
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
    int max_value=maxInArray(arr,size,0,INT_MIN);
    cout<<"maximum value is: "<<max_value<<"\n";
}