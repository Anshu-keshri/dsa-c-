#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> &nums,int size){
    int data;
    for(int i=0;i<size;i++){
        cout<<"enter the element "<<i+1<<": ";
        cin>>data;
        nums.push_back(data);
    }
}

bool binarySearch(vector<int> &nums,int target,int size){
    int start=0;
    int end=size-1;
    
    while(start<=end){
        int mid=(start+end)/2;

        if(target==nums[mid]){
        return true;
        }
        else if(target>nums[mid]){
        start=mid+1;
        }
        else if(target<nums[mid]){
            end=mid-1;
        }
    }
    return false;
}

int main()
{
    vector<int> nums;
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    input(nums,size); // THE DATA IS GIVEN TO ARRAY...
    
    int target;
    cout<<"enter the target element: ";
    cin>>target;

    bool value=binarySearch(nums,target,size);
    cout<<value;


}