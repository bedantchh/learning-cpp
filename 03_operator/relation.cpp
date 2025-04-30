#include <iostream>
using namespace std;
int main(){
    int cups;
    cout<<"Enter the num of cups";
    cin>> cups;
    if(cups>20){
        cout<<"Gold badge";
    }
    else if (cups >= 10 && cups <= 20)
    {
        cout<<"silver badge.";
    }else{
        cout<<"No badges.";
    }
    
    return 0;
}