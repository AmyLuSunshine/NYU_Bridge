/*Hello
Hello world
Hello world*/

# include <iostream> 
#include <string>
using namespace std; 

int main(){ 
    int x;
    double y; 
    string s;
    
    x = 5;
    y = 7.3;
    s = "Hello" ; //string use double quote" ", char use single quote ''
    
    cout<<s<<endl ; 
    
    cout<<s + " world"<<endl; 
    
    s = s + " world";
    cout<<s<<endl ; 
    
    return 0; 

}
