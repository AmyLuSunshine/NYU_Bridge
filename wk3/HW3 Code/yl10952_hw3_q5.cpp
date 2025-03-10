/*Body mass index (BMI) is a number calculated from a person’s weight and height using the  following formula: weight/height2.Where weight is in kilograms and height  is in meters. 
According to the Centers for Disease Control and Prevention, the BMI is a fairly reliable  indicator of body fatness for most people. BMI does not measure body fat directly, but  research has shown that BMI correlates to direct measures of body fat, such as underwater  weighing and dual-energy X-ray absorptiometry.  
The following table gives the weight status in respect to the BMI value: 

BMI Range   /Weight Status
Below 18.5  /Underweight
[18.5, 25)   /Normal
[25, 30)     /Overweight
30 and above /Obese

Write a program that prompts for weight (in pounds) and height (in inches) of a person, and  prints the weight status of that person.
Your program should interact with the user exactly as it shows in the following example: Please enter weight (in pounds): 135   
Please enter height (in inches): 71   
The weight status is: Normal 
Note: 1 pound is 0.453592 kilograms and 1 inch is 0.0254 meters. 

*/

float const pondToKilo = 0.453592;
float const inchToMeter = 0.0254;
#include <iostream>
#include <string>
using namespace std;


int main(){
    string bmiStatus;
    double weight, height, bmi;
    
    cout<<"Please enter weight (in pounds):   ";
    cin>>weight;
    
    cout<<"Please enter height (in inches): ";
    cin>>height;
    
    weight = weight*pondToKilo;
    height = height*inchToMeter;
    bmi = weight / (height * height );
    
    if(bmi < 25){
        if(bmi < 18.5){
            bmiStatus="Underweight";
        }
        else
            bmiStatus="Normal";
    }
    else{
        if(bmi > 30 || bmi == 30 ){
            bmiStatus="Obese";
        }
        else
            bmiStatus="Overweight";
    }
    
    
    cout<<"The weight status is: "<<bmiStatus<<endl;
    
    return 0;

}