#include<iostream>
#include<vector>
#include<stack>

using namespace std;

vector<int> NextSmallerElement(vector<int> &arr){
    stack<int> st;
    int n=arr.size();
    vector<int> result(n);
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }
        if(st.empty()){
            result[i]=-1;
        }
        else if(!st.empty()){
            result[i]=st.top();
        }
        st.push(arr[i]);
    }
    return result;
}

int main()
{
    vector<int> arr={4,8,5,2,25};
    vector<int> result=NextSmallerElement(arr);
    cout<<"output is: "<<"\t";
    for(int i=0;i<arr.size();i++){
        cout<<result[i]<<"\t";
    }
    
}