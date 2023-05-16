#include <iostream>
using namespace std;
// Declairing a class
class Person{
    string name;
    int age;
    
    public:
        void getData(){
            cout<<"Name: \""<<name<<"\" and Age: "<<age<<endl;
        }
        void setData(string name, int age){
            this->name = name;
            this->age = age;
        }
};
int main(){
    Person a;
    a.setData("Shubham Sharma",21);
    a.getData();
}