#include<iostream>
using namespace std;

class Student{
    public:
        int roll_no;
        string name;
        float cgpa;

        // we can create as many constructors as we want......

        Student(){  // default constructor without any parameter....

        }
        Student(string n,int r,float c){
            name=n;
            roll_no=r;
            cgpa=c;
        }



};

void print(Student& s){
    cout<<"Deatil of student 1 is: "<<s.name<<s.roll_no<<s.cgpa<<"\n";
}

int main()
{
    Student s1;
    s1.name="anshu";
    s1.roll_no=1067;
    s1.cgpa=8.2;

    Student s2;
    s2.name="anshu kumar";
    s2.roll_no=1068;
    s2.cgpa=8.1;

    // BUT WE DO NOT USE IT, AS IT IS TOO LENGTHY.....
    cout<<"Deatil of student 1 is: "<<s1.name<<s1.roll_no<<s1.cgpa<<"\n";
    
    print(s1);
    print(s2);
}