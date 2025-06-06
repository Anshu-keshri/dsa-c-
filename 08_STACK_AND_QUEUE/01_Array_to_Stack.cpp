#include<iostream>
using namespace std;

const int size=10;
int stack[size];
int top=-1;

void push(int val){
    if(top>=size){
        cout<<"stack is full";
        return;
    }
    top=top+1;
    stack[top]=val;
}

void pop(){
    if(top==-1){
        cout<<"stack is empty";
        return;
    }
    top=top-1;
}

int TopElem(){
    if(top==-1){
        cout<<"stack is empty";
        return -1;
    }
    return stack[top];
}

int Size(){
    return top+1;
}

void display(){
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<"\t";
    }
}

int main()
{
    push(2);
    push(8);
    
    cout<<"size is: "<<Size();

}