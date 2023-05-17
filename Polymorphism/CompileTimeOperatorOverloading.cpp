#include <iostream>
using namespace std;
class ComplexNumber {
    private:
        int real, img;
    public:
        ComplexNumber(int real = 0, int img = 0):
            real(real),
            img(img){}
        // Overloaded operator deafined here
        // This will be called automatically when ever we are gonna to add complexNumber objects
        ComplexNumber operator+(ComplexNumber const& obj){
            ComplexNumber ans;
            ans.real = real+obj.real;
            ans.img = img+obj.img;

            return ans;
        }
        // Method to print the Complex Number
        void print(){
            cout<<"The number is: "<<this->real<<" + "<<this->img<<"i"<<endl;
        }
};
int main() {
    // Creating object of the class
    // Calling the constructor to make the variable
    ComplexNumber c1(5,13);
    ComplexNumber c2(7,11);

    // Adding two object of same class with the help of operator overloaded
    ComplexNumber c3 = c1+c2;

    //printing the values
    c1.print();
    c2.print();
    c3.print();
}