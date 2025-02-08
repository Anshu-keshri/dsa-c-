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

void deleteKth(node* &head,int k){
    node* count=head;
    int end=0;
    while(count!=nullptr){
        end=end+1;
        count=count->next;
    }

    if(k>end){
        return;
    }

    if(k==1){
        if(head==nullptr||head->next==nullptr){
            return;
        }
        node* oldHead=head;
        head=head->next;
        free(oldHead);
    }
    
    else{
        node* current=head;
        for(int i=1;i<k-1;i++){
            current=current->next;
        }
        node* temp=current->next;
        current->next=current->next->next;
        free(temp);
    }
    
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

    cout<<"ll before deletion: ";
    printList(head);

    deleteKth(head,5);

    cout<<"ll after deletion: ";
    printList(head);

}