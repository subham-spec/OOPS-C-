#include<iostream>
using namespace std;
class Test{
    public:
        Test(){
            cout<<"\n Constructor executed";
        }
        ~Test(){
            cout<<"\n Destructor executed";
        }
};
int main(){
    Test t,t1,t2,t3;
    return 0;
}