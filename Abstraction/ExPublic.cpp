#include <iostream>
using namespace std;
class Circle{
    public:
        double radius;
        double  compute_area(){
            return 3.14*radius*radius;
        }
     
};
int main(){
    Circle c;
    c.radius = 33;
    cout<<"Area is: "<<c.compute_area();
}