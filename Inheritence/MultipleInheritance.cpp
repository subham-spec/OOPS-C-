#include <iostream>
using namespace std;
class Engine{
    private:
        int capacity, horsepower;
    public:
        void getCapacity(){
            cout<<"Enter engine capacity: ";
            cin>>capacity;
            getHorsepower();
        }
        void getHorsepower(){
            cout<<"Enter horse power in bhp number only: ";
            cin>>horsepower;
        }
        void printEngine(){
            cout<<"Engine is of capacity: "<<capacity<<endl;
            cout<<"Engine has horsepower of: "<<horsepower<<endl;
        }
};
class About{
    private:
        int length, width;
        string color;
    public:
        void getLength(){
            cout<<"Enter length of vehicle in mm: ";
            cin>>length;
            getWidth();
        }
        void getWidth(){
            cout<<"Enter the width of vehicle in mm: ";
            cin>>width;
            getColor();
        }
        void getColor(){
            cout<<"Enter color of vehicle: ";
            cin>>color;
        }
        void printAbout(){
            cout<<"Length of the vehicle is: "<<length<<endl;
            cout<<"Width of the vehicle is: "<<width<<endl;
            cout<<"Color of your vehicle is: "<<color<<endl;
        }
};
class Car: public Engine, public About{
    public:
        void getData(){
            getLength();
            getCapacity();
        }
        void printDetails(){
            printEngine();
            printAbout();
        }
};
int main(){
    Car innova;
    innova.getData();
    // printing the details
    cout<<"\n\n\nPrinting the details of above car:\n"<<endl;
    innova.printDetails();

    return 0;
}