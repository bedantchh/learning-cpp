#include <iostream>
#include <string>
using namespace std;
int main(){
    string userTea;
    int userQuantity;
    cout << "Which tea? \n ";
    cin >> userTea;
    cout << "How many cups of " << userTea << " would you like to have? \n";
    cin >> userQuantity;

    cout<< userTea << endl << userQuantity;
    return 0;
}