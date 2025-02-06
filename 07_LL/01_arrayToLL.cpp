#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
    int data;
    node* next;

    public:
    node(int data,node* next){
        this->data=data;
        this->next=next;
    }

    public:
    node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

// CREATING FUNCTON OUTSIDE THE CONSTRUCTOR.......
node* arrToLL(vector<int>&arr){
    node* head=new node(arr[0]);
    node* mover=head;
    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int main()
{
    vector<int>arr={2,5,1,6};
    node* head=arrToLL(arr);
    cout<<head->data<<"\n";
}