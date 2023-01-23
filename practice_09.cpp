#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream hout("practice.txt");
    cout<<"enter your name ";
    string name;
    cin>>name;
    hout<<"my name is " + name;
    hout.close();

    ifstream hin("practice.txt");
    string nice;
    hin>>nice;
    getline(hin,nice);
    cout<<"'the content in the file is->"+nice;
    hin.close();
    return 0;
}