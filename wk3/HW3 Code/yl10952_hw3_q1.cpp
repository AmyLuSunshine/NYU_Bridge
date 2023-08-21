/*Write a program that computes how much a customer has to pay after purchasing two  items. The price is calculated according to the following rules: 
• Buy one get one half off promotion: the lower price item is half price.
• If the customer is club card member, additional 10% off. 
• Tax is added. 
Inputs to the program include: 
• Two items’ prices 
• Have club card or not (User enters ‘Y’ or ‘y’ for “yes”; ‘N’ or ‘n’ for “no”) 
• Tax rate (User enters the percentage as a number; for example they enter 8.25 if the tax  rate is 8.25%) 
Program displays: 
• Base price - the price before the discounts and taxes  
• Price after discounts - the price after the buy one get one half off promotion and the  member’s discount, if applicable  
• Total price – the amount of money the customer has to pay (after tax). 
Your program should interact with the user exactly as it shows in the following example: Enter price of first item: 10 
Enter price of second item: 20 
Does customer have a club card? (Y/N): y 
Enter tax rate, e.g. 5.5 for 5.5% tax: 8.25 
Base price: 30.0 
Price after discounts: 22.5 
Total price: 24.35625 
*/

#include <iostream>
using namespace std;

const double CLUBCARD_DIS = 0.9;
const double HALF_PRICE = 0.5;
int main(){
    double priceOne, priceTwo, basePrice, priceForTwo, priceTotal ;
    double taxRate;
    char clubCard;
    
    cout<<"Enter price of first item: ";
    cin>>priceOne;
    cout<<"Enter price of second item: ";
    cin>>priceTwo;
    
    cout<<"Does customer have a club card? (Y/N): ";
    cin>>clubCard;
    
    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin>>taxRate;
    
    basePrice =priceOne + priceTwo;
    taxRate *= 0.01;
    
    if(priceOne>priceTwo || priceOne==priceTwo){
        priceForTwo = priceOne + (priceTwo*HALF_PRICE);
    }
    else{
        priceForTwo = priceTwo + (priceOne*HALF_PRICE);
    }
    
    if (clubCard == 'y' || clubCard == 'Y'){ 
        priceForTwo = priceForTwo*CLUBCARD_DIS;
    }
    
    cout<<fixed;
    cout.precision(1);
    cout<<"Base price: "<<basePrice<<endl;//<<fixed<<endl;
    cout.precision(1);
    cout<<"Price after discounts: "<<priceForTwo<<endl;
    cout.precision(5);
    cout<<"Total price: "<<(priceForTwo)*(1+taxRate)<<endl;
    
    return 0;

}

/*
Enter price of first item: 
10
Enter price of second item: 
20
Does customer have a club card? (Y/N): 
y
Enter tax rate, e.g. 5.5 for 5.5% tax: 
8.25
Base price: 30.0
Price after discounts: 22.5
Total price: 24.35625*/