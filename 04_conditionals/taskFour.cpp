#include <iostream>
using namespace std;
int main(){
    int choice;
    double price;
    cout<<"Enter the tea choice in numbers \n 1)Green tea \n 2)Red tea \n 3)Black tea \n";
    cin >> choice;
    switch (choice){
        case 1:{
            cout<<"Green tea";
            break;
        }
        case 2:{
            cout<<"Rea tea";
            break;
        }
        case 3:{
            cout: "Black tea";
            break;
        }
        default: cout<<"Enter valid no.";
    }
    return 0;
}