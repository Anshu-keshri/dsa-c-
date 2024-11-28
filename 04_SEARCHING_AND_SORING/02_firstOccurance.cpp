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

int occurance(vector<int> &nums,int size,int target){
    int ans_index;
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=start+(end-start)/2;  // it is same as(s+e)/2...but just used so range of int do not cross...
        if(target==nums[mid]){
            ans_index=mid;
            end=mid-1;
        } 
        else if(target<nums[mid]){
            end=mid-1; // selecting left array....(as given array is in ascending order)
        }
        else if(target>nums[mid]){
            start=mid+1;  // selecting right array....(as given array is in ascending order)
        }
    }
    return ans_index;
}

int main()
{
    vector<int> nums;
    int size;
    cout<<"enter the size of array: ";
    cin>>size;
    input(nums,size);

    int target;
    cout<<"enter the value of target element: ";
    cin>>target;
    int index=occurance(nums,size,target);
    cout<<index;

}