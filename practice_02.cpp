#include <iostream>
using namespace std;

class base1 {
    int data;
    public:
        base1(int i){
            data =i;
            cout<<"base class constructor called "<<endl;
        }
        void printdatabase1(void){
            cout<<"the value of data is "<<data<<endl;
        }
};

class base2 {
    int data;
    public:
        base2(int i){
            data =i;
            cout<<"base class constructor called "<<endl;
        }
        void printdatabase2(void){
            cout<<"the value of data is "<<data<<endl;
        }
};

class derived : public base1,public base2{
    int derived1 , derived2;
    public:
        derived(int a ,int b ,int c,int d ): base1(a),base2(b){
            derived1=c;
            derived2=d;
        }
    void printdata(void){
        cout<<"the value of derived1 is  "<< derived1<< endl;
        cout<<"the value of derived2 is  "<< derived2<< endl;
    }
    
};

int main(){
    derived raunaliya (1,24,5,7);
    raunaliya.printdatabase1();
    return 0;
}