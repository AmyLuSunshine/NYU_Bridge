/*Question	1:	
Write	two versions of	a	program	that	reads	a	positive	integer	n,	and	prints	the	first	n even	
numbers.	
a) In	the	first,	use	a	while loop.	
b) In	the	second,	use	a	for loop.	
Each	section	should	interact	with	the	user	exactly as	it	shows	in	the	following	example:
Please	enter	a	positive	integer: 3 246
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    
    cout<<"Please input a positive integer: "<<endl;
    cin>>n;
    
   /* //a) In	the	first,	use	a	while loop.	
    int temp = 2;
    while(n > 0){
        cout<<temp<<endl;
        temp += 2;
        n--;
    }*/
    
    //b) In	the	second,	use	a	for loop.	
    int temp = 0;
    for(int i=0; i<n;i++){
        if(temp % 2 == 0){
            temp+=2;
            cout<<temp<<endl;
        }
    }
    
 
    
    return 0;
}

/*
Please input a positive integer: 
3
2
4
6
*/