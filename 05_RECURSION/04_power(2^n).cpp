#include <iostream>
using namespace std;

int power(int n){ //2^1=2....
    if(n==1){
        return 2;
    }
    int ans=2*power(n-1);
    return ans;
}

int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int value=power(n);
    cout<<"the value of 2^"<<n<<" is: "<<value<<"\n";
}