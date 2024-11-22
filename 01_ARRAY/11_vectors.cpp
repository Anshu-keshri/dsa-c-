#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>a){
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}

int main()
{
    vector<int>a;

    // a.push_back(1);
    // a.push_back(2);
    // a.push_back(3);
    // a.push_back(4);

    // print(a);


    while(1){
        int data;
        cout<<"enter the element of array: ";
        cin>>data;
        a.push_back(data);
        cout<<"capacity: "<<a.capacity()<<"  "<<"size: "<<a.size()<<"\n";
    }
}