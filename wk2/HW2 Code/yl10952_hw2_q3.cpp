/*Question 3: 
Suppose John and Bill worked for some time and we want to calculate the total time both  
reof them worked. Write a program that reads number of days, hours, minutes each of them worked, and prints the total time both of them worked together as days, hours, minutes. 
Hint: Try to adapt the elementary method for addition of numbers to this use. 
Your program should interact with the user exactly as it shows in the following example:
Please enter the number of days John has worked: 2 
Please enter the number of hours John has worked: 12 
Please enter the number of minutes John has worked: 15 
Please enter the number of days Bill has worked: 3 
Please enter the number of hours Bill has worked: 15 
Please enter the number of minutes Bill has worked: 20 
The total time both of them worked together is: 6 days, 3 hours and 35 minutes.
*/

#include <iostream>
using namespace std;

int main(){
    int j_hour;
    int j_min;
    int j_day;
    
    int b_hour;
    int b_min;
    int b_day;
    
    int days;
    int hours;
    int minutes;
    
    cout<<"Please enter the number of days John has worked:  "<<endl;
    cin>>j_day;
    cout<<" Please enter the number of hours John has worked :"<<endl;
    cin>>j_hour;
    cout<<"Please enter the number of minutes John has worked:"<<endl; 
    cin>>j_min;
    
    cout<<"Please enter the number of days Bill has worked: "<<endl;
    cin>>b_day;
    cout<<"Please enter the number of hours Bill has worked:"<<endl;
    cin>>b_hour;
    cout<<"Please enter the number of minutes Bill has worked:"<<endl;
    cin>>b_min;
    
    minutes=((((j_day+b_day)*24)+(j_hour+b_hour))*60)+(j_min+b_min);
    days=minutes/(60*24);
    
    minutes=minutes%(60*24);
    hours=minutes/60;
    
    minutes=minutes%60;
    
    cout<<"The total time both of them worked together is: "<<days << " days," << hours <<" hours and "<< minutes << " minutes.";
    
    return 0;
}