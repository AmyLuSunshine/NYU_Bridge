
//cout: 753102189     ** Process exited - Return Code: 0 

#include<iostream>

using namespace std;

int main()
{
    int x;
    int y;
    
    x = 5;
    
    cout<<x + 2;//the arithemetic operation in cout won't influence the inner body code value
    y = x + 2; //so here y is 7=5+2, not influenced by cout.
    x + 2;
    cout<<y;
    
    cout<<x;
    cout<<x-2;
    y = x * 2;
    cout<<y;
    
    cout<<x / 2;
    cout<<x % 2;
    
    x = 6;
    //cout<<x = 7;//this is not working for it's an old version of C++
    y = (x = 8);
    cout<<y;
    y = x = 9;
    cout<<y;

    return 0;
}
