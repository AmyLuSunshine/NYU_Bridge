//const double PI = 3.14; area = PI * (radius*radius);
//not accurate cout: The area of a circle with radius of 2.6 is 21.2264    ** Process exited - Return Code: 0 

//#include <cmath>; area = M_PI * (radius*radius);
//accurate: The area of a circle with radius of 2.6 is 21.2372

#include<iostream>
#include <cmath>
using namespace std;

//const double PI = 3.14;
int main()
{
    double radius;
    double area;
    
    cout<<"Please enter radius:"<<endl;
    cin>>radius;
    
    area = M_PI * (radius*radius);//leave space for single operator or number is better 
    
    cout<<"The area of a circle with radius of "<<radius<<" is "<<area<<endl;

    return 0;
}
