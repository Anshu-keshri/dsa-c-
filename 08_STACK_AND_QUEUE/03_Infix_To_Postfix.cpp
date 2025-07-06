#include<iostream>
#include<stack>
#include<string>
using namespace std;

int priority(char op){
    if(op=='^') return 3;
    if(op=='*'||op=='/') return 2;
    if(op=='+'||op=='-') return 1;

    return 0;
}

string InfixToPostfix(string infix){
    string postfix="";
    stack<char> st;
    int n=infix.length();

    for(int i=0;i<n;i++){
        char ch=infix[i];
        if(ch>='A'&&ch<='Z' || ch>='a'&&ch<='z'){
            postfix=postfix+infix[i];
        }
        else if(ch=='('){
            st.push(ch);
        }
        else if(ch==')'){
            while(!st.empty() && st.top()!='('){
                postfix=postfix+st.top();
                st.pop();
            }
            if(!st.empty()) st.pop();
        }
        else{
            while(!st.empty() && priority(st.top())>=priority(ch)){
                postfix=postfix+st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while(!st.empty()){
        postfix=postfix+st.top();
        st.pop();
    }

    return postfix;
}

int main()
{
    string infix = "a+b*(c^d-e)^(f+g*h)-i";
    string postfix=InfixToPostfix(infix);
    cout<<"postfix is: "<<postfix;
}