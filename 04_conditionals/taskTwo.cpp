#include <iostream>
using namespace std;
int main(){
    int hour;
    cout << "Enter the time in 24 hour \n";
    cin>> hour;
    if(hour >= 8 && hour <= 18){
        cout<<"Welcome";
    }else{
        cout<<"we are closed.";
    }
    return 0;
}