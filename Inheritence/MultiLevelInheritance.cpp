#include <iostream>
using namespace std;
// Base class I
class Vehicle{
    private:
        int wheels;
    public:
        Vehicle(int w):
            wheels(w){}
        void printInfo(){
            cout<<"No of wheels are: "<<wheels<<endl;
        }
};
class Car: Vehicle{
    private:
        int seats;
    public:
        Car(int w, int s):
            Vehicle(w),
            seats(s){}
        void printInfo(){
            cout<<"No of seats are: "<<seats<<endl;
            Vehicle::printInfo();
        }
};
class SportsCar: Car{
    private:
        string brand;
    public:
        SportsCar(string b, int w, int s):
            Car(w, s),
            brand(b){}
        void printInfo(){
            cout<<"Name of car is: "<<brand<<endl;
            Car::printInfo();
        }
};
int main(){
    SportsCar dest("RangeRover", 4, 5);
    dest.printInfo();
}