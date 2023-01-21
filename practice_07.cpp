#include <iostream>
using namespace std;

class baseclass{
    public:
    int data1;
        void display(){
            cout << "The value of data1 is " << data1 << endl;
        }
};
class derivedclass : public baseclass{
    public:
        int var_derived;
        void display(){
            cout<<"displaying base class variable " << data1<<endl;
            cout<<"displaying derived class variable "<< var_derived<<endl;
        }
};

int main(){
    baseclass * baseclass_pointer;
    baseclass obj_base;
    derivedclass obj_derived;
    baseclass_pointer = &obj_derived;
    baseclass_pointer->data1=34;
    baseclass_pointer->display();
    baseclass_pointer->data1=3400;
    baseclass_pointer->display();

    derivedclass * derivedclass_pointer;
    derivedclass_pointer = &obj_derived;
    derivedclass_pointer->var_derived=90;
    derivedclass_pointer->display();
    return 0;
}