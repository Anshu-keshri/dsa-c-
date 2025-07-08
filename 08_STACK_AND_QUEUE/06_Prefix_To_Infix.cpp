#include<iostream>
#include<string>
#include<stack>

using namespace std;

string reverseString(string str){
    int s=0;
    int e=str.length()-1;
    while(s<=e){
        swap(str[s],str[e]);
        s++;
        e--;
    }
    return str;
}

bool isOperator(char ch){
    return ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^';
}

string PrefixToInfix(string prefix){
    stack<string> st;
    string reversePrefix=reverseString(prefix);
    for(int i=0;i<Prefix.length();i++){
        char ch=reversePrefix[i];
        if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
            string myString(1,ch);
            st.push(myString);
        }
        else if(isOperator(ch)){
            string left=st.top();
            st.pop();
            string right=st.top();
            st.pop();
            string final="("+left+ch+right+")";
            st.push(final);
        }

    }
    return st.top();
}

int main()
{
    string prefix="*+ab*+cde";
    string infix=PrefixToInfix(prefix);
    cout<<"infx is: "<<infix;
}