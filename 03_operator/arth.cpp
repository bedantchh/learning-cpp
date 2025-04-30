#include<iostream>
using namespace std;
int main() {
    int cups;
    double pricePerCup, totalPrice, discountedPrice;
    cout<<"Enter number of tea cups"<<endl;
    cin>>cups;
    cout<<"Enter the price per cup:"<<endl;
    cin>>pricePerCup;

    totalPrice= cups * pricePerCup;

    if(totalPrice>100){
        double discount = totalPrice * (0.05);
        discountedPrice = totalPrice - discount; 
        cout<<discountedPrice<<" is the discounted amount to be paid."<<endl; 
    } else{
        cout<<totalPrice<< " is to be paid.";
    }
   
    return 0;
}