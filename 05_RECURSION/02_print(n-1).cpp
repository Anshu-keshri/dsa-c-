#include<iostream>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    cout<<n<<"\n";
    print(n-1);
}

int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    print(n);
}