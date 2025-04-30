#include <iostream>
#include <string>
using namespace std;
int main(){
    int teaBags;
    cout << "Enter the no of tea bags you have? \n ";
    cin>>teaBags;
    if(teaBags<10){
        teaBags += 5;
        cout << "Now you have "<< teaBags<< " tea bags.";
    }else{
        cout<< "You have sufficient no of bags.";
    }
    return 0;
}