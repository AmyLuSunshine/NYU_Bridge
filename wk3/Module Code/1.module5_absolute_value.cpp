//times negative 1 (-1) to reverse the 正负数.   cout： -7  7，    7  7

# include <iostream> 
using namespace std; 

int main(){ 
    int userInput,absValue;
    
    cout<<"Please enter an integer:"<<endl;
    cin>>userInput;
    
    absValue = userInput;
    if(userInput < 0){
        //userInput = -userInput;//lol this actually works !
        //userInput = userInput*(-1);//userInput is changed in system, not so good
        //userInput *= (-1);//shortcut way expression
        absValue = userInput*(-1);
    }
    
    cout <<"|"<< userInput <<"| = "<<absValue<<endl;
    
    return 0; 

}
