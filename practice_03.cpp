#include <iostream>
using namespace std;

class construuctor{
    int x=5;
    int y=20;
    public:
    int z;
    construuctor(){
     z=x+y;
    }
    void display(){
        cout<<"The sum of x and y is: "<<z<<endl;
    }
};

int main(){
    construuctor c;
    c.display();
    return 0;
}