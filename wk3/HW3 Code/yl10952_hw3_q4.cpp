/*Question 4:  
Define the following constants: 
const int FLOOR_ROUND = 1; 
const int CEILING_ROUND = 2; 
const int ROUND = 3; 
Write a program that asks the user to enter a Real number, then it asks the user to enter the method by which they want to round that number (floor, ceiling or to the nearest integer).  The program will then print the rounded result. 
Your program should interact with the user exactly as it shows in the following example: Please enter a Real number: 
4.78 
Choose your rounding method: 
1. Floor round i

2. Ceiling round 
3. Round to the nearest whole number 
2 
5 
Implementation requirements:  
1. Use a switch statement. 
2. You are not allowed to include and use the math library. 

*/

#include <iostream>
using namespace std;

const int FLOOR_ROUND = 1; 
const int CEILING_ROUND = 2; 
const int ROUND = 3; 
int main(){
    
    double realNumber;
    int userMethod, rdResult;
    double temp;

    cout<<"Please enter a Real number: ";
    cin>>realNumber;
    
    cout<<"Choose your rounding method: "<<endl;
    cout<<"1. Floor round"<<endl;
    cout<<"2. Ceiling round "<<endl;
    cout<<"3. Round to the nearest whole number "<<endl;
    cin>>userMethod;
    
    //dont' forget negative number,very tricky
    if(realNumber < 0){
        realNumber -=1;
    }
    
    //int number is better to list out for efficiency
    
    
    switch(userMethod){
        case FLOOR_ROUND:
            rdResult = realNumber / 1; //cast double to int
            break;
        case CEILING_ROUND:
            rdResult = (realNumber + 1) / 1; //cast double to int
            break;
        case ROUND: // divide 1 won't do anything,actually
            if((realNumber - ((int)realNumber / 1)) > 0.5   ){ //double num - double num = 0; 0>0.5, always False
                rdResult = (realNumber + 1) / 1; // so easiest way to do is cast double to int.
            }
            else{
                rdResult = realNumber / 1; //double cast to int
            }
            break;
        default:
            cout <<"Illegal"<<endl;;
            break;
    }
    cout <<  rdResult; 
    
    return 0;
}

/*
Please enter a Real number: 
-2.52
Choose your rounding method: 
1. Floor round
2. Ceiling round 
3. Round to the nearest whole number 
3
-3


Please enter a Real number: 
4.56
Choose your rounding method: 
1. Floor round
2. Ceiling round 
3. Round to the nearest whole number 
3
5*/