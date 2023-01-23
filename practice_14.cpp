#include <iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string, int> marksmap;
    marksmap["harry"]=89;
    marksmap["potter"]=90;
    marksmap["noob"]=88;
    map<string,int> :: iterator iter;
    for(iter=marksmap.begin(); iter!=marksmap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    return 0;
}