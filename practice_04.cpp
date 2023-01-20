#include <iostream>
using namespace std;

class complex
{
    int real, imaginary;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        imaginary = i;
    }
    void getdata()
    {
        cout << "The real part is: " << real << endl;
        cout << "The imaginary part is: " << imaginary << endl;
    }
    void setdata(int r, int i)
    {
        real = r;
        imaginary = i;
    }
};

int main()
{
    complex c1;
    complex *ptr= &c1;
    (*ptr).setdata(1, 54);
    (*ptr).getdata();
    return 0;
}