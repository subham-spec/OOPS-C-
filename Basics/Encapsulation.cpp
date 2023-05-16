#include <iostream>
using namespace std;
class Rectangle{
    private:
        int length, breadth, area;

    public:
        void setArea(int length, int breadth){
            this->length = length;
            this->breadth = breadth;
            this->area = length*breadth;
        }
        int findArea(){
            return this->area;
        }
};
int main(){
    Rectangle r1;
    r1.setArea(13,5);

    cout<<r1.findArea()<<endl;
}