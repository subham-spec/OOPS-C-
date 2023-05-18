#include<iostream>
using namespace std;
class student{
    private:
        int rno;
        string name;
        double fee;
    public:
        // constructor of class name
        student(){
            cout<<"Enter the RollNo:";
            cin>>rno;
            cout<<"Enter the Name:";
            cin.ignore();
            getline(cin, name);
            cout<<"Enter the Fee:";   
            cin>>fee;
        }   

        void display(){
            cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
        }
};
 
int main(){
    student s;
    s.display();
    return 0;
 
}