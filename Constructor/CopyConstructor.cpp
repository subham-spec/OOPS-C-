#include<iostream>
#include<string.h>
using namespace std;
class student{
    private:
        int rno;
        char name[50];
        double fee;
    public:
        student(int,char[],double);
        //copy constructor
        student(student &t){
            rno = t.rno;
            strcpy(name,t.name);
            fee = t.fee;
        }
        void display();
};
    student::student(int no,char n[],double f){
        rno=no;
        strcpy(name,n);
        fee=f;
    }   
    void student::display(){
        cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
    }
     
int main(){
    student s(1001,"Manjeet",10000);
    s.display();
     
    student manjeet(s);   //copy constructor called
    manjeet.display();
     
    return 0;
}