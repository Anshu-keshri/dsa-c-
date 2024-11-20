#include<iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    // using constructors..
    Cricketer(string name,int runs){
        //doing this we will get some garbage value ..... 

    //    name=name;
    //    runs=runs;

    // SO TO SOLVE THIS ISSUE WE USE THIS->....
        this->name=name;
        this->runs=runs;
    }

};

void print(Cricketer c){
    cout<<"the detail of cricketers is: "<<c.name<<" "<<c.runs<<"\n";
}

int main()
{
    Cricketer c1("Anshu",1000);
    Cricketer c2("Anuj",700);

    print(c1);
    print(c2);
}