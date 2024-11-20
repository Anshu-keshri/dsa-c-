#include<iostream>
using namespace std;

class Car{
public:
    string name;
    int price;
    string type;
    int seat;
    // using constructor..
    Car (string name,int price,string type,int seat){
        this->name=name;
        this->price=price;
        this->type=type;
        this->seat=seat;
    }
    // creating function  inside this class only...
    //WE ARE USING THIS HERE BECAUSE ,WE MAY GIVE PARAMETERS NAME ,AND CREATES AN ISSUE ,LIKE IT HAPPENS IN CONSTRUCTORS BUILDING..
    void print(){
        cout<<"Car details: "<<this->name<<" "<<this->price<<" "<<this->type<<" "<<this->seat<<"\n";
    }

    int pricePerSeat(){
        return this->price/this->seat;
    }
};

int main()
{
    Car c1("fortuner",4000000,"suv",7);
    Car c2("honda city",1500000,"sedan",5);

    c1.print();
    c2.print();

    int pps=c1.pricePerSeat();
    cout<<pps<<"\n";
}