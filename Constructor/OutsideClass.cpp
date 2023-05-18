#include <iostream>
using namespace std;
class Student{
    private:
        int rno;
        string name;
        double fee;
    public:
        // For constructor overloading
        Student(int rno, string name, double fee);
        
        void display(){
            cout<<name<<endl;
            cout<<rno<<endl;
            cout<<fee<<endl;
        }
};
    // Constructor is defined outside the class
    Student::Student(int rno, string name, double fee):
        rno(rno),
        name(name),
        fee(fee){}
    
int main(){
    Student s(12012377, "Shubham Sharma", 71100);
    cout<<endl;
    s.display();
    return 0;
}