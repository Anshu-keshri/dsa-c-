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

void change1(Car c){
    c.price=3000000;
}

void change2(Car& c){
    c.price=3000000;
}

void change3(Car* c){
    (*c).price=3000000;
}

void change4(Car* c){
    c->name="thar";  // it is just a different way of writing...... (*c).name="thar"
}

int main()
{
    Car c1("fortuner",4000000,"suv",7);
    Car c2("honda city",1500000,"sedan",5);

    //c1.print();
    //c2.print();

    //int pps=c1.pricePerSeat();
    //cout<<pps<<"\n";

    // Car* p1=&c1;
    // cout<<(*p1).name<<"\n";
    // cout<<c1.price<<"\n";
    // (*p1).price=3200000;
    // cout<<c1.price<<"\n";


    //NO CHANGE WILL BE OBSERVED AS IT IS PASS BY VALUE .....
    // cout<<c1.price<<"\n";
    // change1(c1);
    // cout<<c1.price<<"\n";

    //THIS IS CALLED CALL BY REFERENCE....
    // cout<<c1.price<<"\n";
    // change2(c1);
    // cout<<c1.price<<"\n";

    //DOING ABOVE OPERATION BY USING POINTERS...
    cout<<c1.price<<"\n";
    change3(&c1);  // in pointer we need to pass the address...
    cout<<c1.price<<"\n";

    cout<<c1.name<<"\n";
    change4(&c1);  // in pointer we need to pass the address...
    cout<<c1.name<<"\n";
}