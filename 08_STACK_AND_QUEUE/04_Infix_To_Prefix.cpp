#include<iostream>
#include<string>
#include<stack>

using namespace std;

int priority(char ch){
    if(ch=='^') return 3;
    if(ch=='*' || ch=='/') return 2;
    if(ch=='+' || ch=='-') return 1;

    return 0;
}

string reverseString(string str){
    int strSize=str.length();
    int s=0;
    int e=strSize-1;
    while(s<=e){
        swap(str[s],str[e]);
        s++;
        e--;
    }
    return str;
}

string InfixToPostfix(string reverseInfix){
    int n=reverseInfix.length();
    stack<char> st;
    string postfix="";

    for(int i=0;i<n;i++){
        char ch=reverseInfix[i];
        if((ch>='A'&&ch<='Z') || (ch>='a'&&ch<='z')){
            postfix=postfix+reverseInfix[i];
        }
        else if(ch=='('){
            st.push('(');
        }
        else if(ch==')'){
            while(!st.empty() && st.top()!='('){
                postfix=postfix+st.top();
                st.pop();
            }
            st.pop();  // it means removing '(' from stack.
        }
        else{
            while(!st.empty() && priority(st.top())>priority(ch)){
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

    // now reverse postfix string to get prefix for this.
    
    return postfix;
}

string InfixToPrefix(string infix){
    string reverseInfix=reverseString(infix);
    
    for(int i=0;i<reverseInfix.length();i++){
        if(reverseInfix[i]=='(') reverseInfix[i]=')';
        else if(reverseInfix[i]==')') reverseInfix[i]='(';
    }

    string postfix=InfixToPostfix(reverseInfix);

    string prefix=reverseString(postfix);

    return prefix;
}

int main()
{
    string infix="a+b*(c^d-e)^(f+g*h)-i";

    string Prefix=InfixToPrefix(infix);
    cout<<"prefix is: "<<Prefix;

}