#include <iostream>
#include <string>
using namespace std;
int main(){
    string teaOrder;
    cout<<"enter the type of tea. \n";
    getline(cin,teaOrder);

    if(teaOrder == "Green Tea"){
        cout<<"You have ordered "<< teaOrder;
    }
    return 0;
}