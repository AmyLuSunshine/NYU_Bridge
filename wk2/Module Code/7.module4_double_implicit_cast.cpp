

#include<iostream>
using namespace std;

int main()
{
    int x1,x2,x;
    double y1,y2,y;
    
    /*x1 = 6;
    y1 = 6.7;
    
    y2 = (double)6;
    x2 = (double)6.7;
    
    cout<< y2 <<endl;
    cout<< x2 <<endl;
    */
    
    cout<< 5 / 2 <<endl;
    cout<< 5.0 / 2.0 <<endl;
    cout<< 5.0 / 2 <<endl;
    
    x = 5/2;
    //y = 5/2; //this is not really working. result is 2
    y = (double) 5/2;// result is 2.5
    
    cout<< x <<endl;
    cout<< y <<endl;

    return 0;
}
