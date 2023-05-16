#include <iostream>
using namespace std;
class FunctionOverload{
    public: 
        void print(){
            cout<<"In void function"<<endl;
        }
        void print(int a){
            cout<<"In int with a: "<<a<<endl;
        }
        void print(int a, int b){
            cout<<"In int int with a: "<<a<<", b: "<<b<<endl;
        }
        void print(double a){
            cout<<"In double with a: "<<a<<endl;
        }
};
int main(){
    FunctionOverload op;
    op.print();
    op.print(5);
    op.print(1,7);
    op.print(5.89);
}