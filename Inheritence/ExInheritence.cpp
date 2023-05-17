#include <iostream>
using namespace std;

class Parent{
    public:
        void print(){
            cout<<"I am in parent"<<endl;
        }
};

class Child: public Parent{
    public:
        void print1(){
            cout<<"I am in child"<<endl;
        }
};

int main(){
    Parent p1;
    // Calling parent object
    p1.print();

    Child c1;
    // Calling Child function
    c1.print1();
    // Calling Parent function i.e., inheriting
    c1.print();
}