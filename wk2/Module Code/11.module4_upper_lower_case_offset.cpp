//t  , The upper case of t is T

#include<iostream>
using namespace std;

int main()
{
    char lowerCaseLetter,upperCaseLetter;
    int offset;
    
    cout<<"Please enter a lower case letter:"<<endl;
    cin>>lowerCaseLetter;
    
    //upperCaseLetter = 'A' + (lowerCaseLetter - 'a');
    offset = (int)(lowerCaseLetter - 'a');
    upperCaseLetter = (char)'A' + offset;//no need to do all the cast, but let's cast
   
    cout <<"The upper case of "<<lowerCaseLetter<<" is "<<upperCaseLetter<<'\n';
    
    return 0;
}
