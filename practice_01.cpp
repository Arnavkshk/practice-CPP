#include <iostream>
using namespace std;

class student{
    protected:
        int roll_no;  
    public:
        void set_roll_number(int);
        void get_roll_number(void);  
};

void student :: set_roll_number(int r){
    roll_no=r;
}

void student :: get_roll_number(){
    cout<<"the roll number is "<<roll_no<<endl;
}

class exam : public student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);

}; 

void exam :: set_marks(float m1,float m2){
    maths=m1;
    physics=m2;
}

void exam :: get_marks(){
    cout<<"the marks obtained in maths "<<maths<<endl;
    cout<<"the marks obtained in physics "<<physics<<endl;
}

class result : public exam{
    float percentage;
    public:
     void display(){
        get_roll_number();
        get_marks();
        cout<<"the percentage optained is "<<(maths+physics)/2<<endl;
     }
};

int main(){
    result number;
    number.set_roll_number(7);
    number.set_marks(45,34);
    number.display();
    return 0;
} 