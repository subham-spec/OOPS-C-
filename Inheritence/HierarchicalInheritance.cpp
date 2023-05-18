#include <iostream>
using namespace std;
class InfoVehicle{
    private:
        int engine, top_speed;
        string name, type;
    public:
        void getData(){
            cout<<"Enter the name: ";
            cin.ignore();
            getline(cin, name);
            cout<<"Enter the type of vehicle: ";
            cin>>type;
            cout<<"Enter the engine cc: ";
            cin>>engine;
            cout<<"Enter the top speed: ";
            cin>>top_speed;
        }
        void printInfo(){
            cout<<"Engine has capacity of: "<<engine<<endl;
            cout<<"Name of the vehicle is: "<<name<<endl;
        }
};
class Car: InfoVehicle{
    private:
        int doors;
    public:
        void getData(){
            InfoVehicle::getData();
            cout<<"Enter the number of doors: ";
            cin>>doors;
        }
        void printInfo(){
            InfoVehicle::printInfo();
            cout<<"No of doors are: "<<doors<<endl;
        }
};
class Bike: InfoVehicle{
    private:
        int mirror;
    public:
        void getData(){
            InfoVehicle::getData();
            cout<<"Enter the number of mirror: ";
            cin>>mirror;
        }
        void printInfo(){
            InfoVehicle::printInfo();
            cout<<"No of mirror are: "<<mirror<<endl;
        }
};
int main(){
    Car c1;
    c1.getData();

    cout<<endl;
    cout<<"Details of car is: "<<endl;
    c1.printInfo();
    
    cout<<endl;

    Bike b1;
    b1.getData();

    cout<<endl;
    cout<<"Details of bike is: "<<endl;
    b1.printInfo();
}