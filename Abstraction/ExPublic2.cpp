#include <iostream>
using namespace std;
class Figure{
    public:
        string shape;
        int radius, length, breadth;
        void setData(string shape, int r, int l, int b){
            this->shape = shape;
            this->radius = r;
            this->length = l;
            this->breadth = b;
        }
        void printArea(){
            if(this->shape == "Circle"){
                cout<<"Area of Circle is: "<<3.14*this->radius*this->radius<<endl; 
            }
            else{
                cout<<"Area of figure is: "<<this->length*this->breadth<<endl;
            }
        }
};  
class Triangle: public Figure{
    public: 
        void setData(int l, int b){
            this->length = l;
            this->breadth = b;
        }
        void printArea(){
            cout<<"Area of triangle is: "<<this->length*this->breadth/2<<endl;
        }
};
int main(){

    Figure f1;
    Figure f2,f3;
    f1.setData("Circle",14,0,0);
    f1.printArea();

    f2.setData("Square",0,5,5);
    f2.printArea();
    
    f3.setData("rectangle",0,10,8);
    f3.printArea();


    Triangle t1;
    t1.setData(10,10);
    t1.printArea();
}