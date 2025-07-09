#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isOperator(char ch){
    return ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^';
}

string PostfixToPrefix(string postfix){
    stack<string> st;
    for(int i=0;i<postfix.length();i++){
        char ch=postfix[i];
        if((ch>='A' && ch<='Z') ||(ch>='a' && ch<='z')){
            string myString(1,ch);
            st.push(myString);

        }
        else if(isOperator(ch)){
            string right=st.top();
            st.pop();
            string left=st.top();
            st.pop();
            string final=ch+left+right;
            st.push(final);
        }
    }
    return st.top();
}

int main()
{
    string postfix="ab-de+f*/";
    string prefix=PostfixToPrefix(postfix);
    cout<<"prefix is: "<<prefix;

}