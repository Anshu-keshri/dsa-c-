#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isOperator(char ch){
    return ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^';
}

string PostfixToInfix(string postfix){
    stack<string> st;
    for(int i=0;i<postfix.length();i++){
        char ch=postfix[i];
        if((ch>='A' && ch<='Z') ||(ch>='a' && ch<='z')){
            string myString(1,ch); // convert char to string.
            st.push(myString);//to push ch we need to change it to string as stack is defined for string here.
        }
        else if(isOperator(ch)){
            string right=st.top();
            st.pop();
            string left=st.top();
            st.pop();

            string final="("+left+ch+right+")";
            st.push(final);
        }
    }
    return st.top();
}

int main()
{
    string postfix="ab+cde+**";
    string infix=PostfixToInfix(postfix);
    cout<<"infix is: "<<infix;
}