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

node* insertStart(node* &head){
    node* newHead=new node(9);
    node* temp=head;
    head=newHead;
    newHead->next=temp;
    return head;
}

void printList(node* head){
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<"\n";
}

int main()
{
    vector<int>arr={2,3,4,5,6};
    node* head=arrToLL(arr);
    cout<<"head of this ll is: "<<head->data<<"\n";

    cout<<"ll before insertion: ";
    printList(head);

    insertStart(head);

    cout<<"ll after insertion: ";
    printList(head);


}