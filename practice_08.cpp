#include <iostream>
#include<fstream>
using namespace std;

int main(){
    string st="matu saala lalitha baaz";
    string new1;
    // ofstream out("practice.txt");
    ifstream in("practice.txt");
    getline(in,new1);
    in>>st;
    cout<<st;
    return 0;
}