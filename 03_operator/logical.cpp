#include <iostream>
using namespace std;
int main(){
    bool isStudent;
    int teaCups;
    cout<< "Are your a student? (1 for yes, 0 for false.) \n";
    cin>> isStudent;
    cout<< "How many tea cups? \n";
    cin>> teaCups;
    if(isStudent || teaCups >= 15){
        cout<<"Eligible for discount";
    }else{
        cout<<"not eligible";
    }
    return 0;
}