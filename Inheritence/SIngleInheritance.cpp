#include <iostream>
using namespace std;
class Name{
    private:
        string name, surname;
    public:
        void getName(){
            cout<<"Enter your first name: ";
            cin>>name;
            getSurname();
        }
        void getSurname(){
            cout<<"Enter your surname: ";
            cin>>surname;
        }
        void printName1(){
            cout<<"Your name is: "<<name<<" "<<surname<<endl;
        }
};
class Contact: public Name{
    private:
        string mailid;
    public:
        void getmailid(){
            getName();
            cout<<"Enter your mailid: ";
            cin>>mailid;
        }
        void printName(){
            printName1();
            cout<<"Your mailid is: "<<mailid<<endl;
        }
};
int main(){
    Contact person1;
    person1.getmailid();

    cout<<"\n\n";
    person1.printName();
}