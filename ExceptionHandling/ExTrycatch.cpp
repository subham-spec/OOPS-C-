#include <iostream>
using namespace std;

int main(){
    int age;
    cin>>age;
    try{
        if(age <= 0){
            throw age;
        }
        else{
            if(age >= 18){
                cout<<"You are allowed to vote"<<endl;
            }
            else{
                cout<<"Can not vote now try next year"<<endl;
            }
        }
    }
    catch(int age){
        cout<<"Wrong age"<<endl;
    }
}