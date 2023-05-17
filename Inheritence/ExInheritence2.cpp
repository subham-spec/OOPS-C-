#include <iostream>
using namespace std;

class Shape{
    protected:
        int length, breadth;
    public:
        Shape(int l, int b):
            length(l),
            breadth(b){

            }
        // This is a virtual function
        virtual int printArea() const{
            return 0;
        }
};
// Declaring a child class
class Rectangle: public Shape{
    public:
        Rectangle(int length, int breadth):
            Shape(length, breadth){}
        // inherting its parent class
        int printArea() const override{
            return length*breadth;
        }
};
int main(){
    Rectangle r1(10,8);

    Shape* s1 = &r1;
    cout<<"Area of the rectangle is: "<<s1->printArea();
}