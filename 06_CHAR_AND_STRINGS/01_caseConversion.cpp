#include<iostream>
using namespace std;

char lowerConversion(char &ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
    return -1;
}

int main()
{
    char ch;
    cout<<"enter the character: ";
    cin>>ch;

    char convert=lowerConversion(ch);
    cout<<"output character: "<<convert<<"\n";

}