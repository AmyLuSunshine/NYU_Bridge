//cout: 1 0 1   1 0 0 1   0 1 1   1 0 1 1 1 // 1 is true, while 0 is false

# include <iostream> 
using namespace std; 

int main(){ 
    bool b1, b2, b3, b4, b5;
    
    //! not boolean operation:
    b1 = true;
    b2 = !b1;
    b3 = !false;
    
    cout << b1 <<endl;
    cout << b2 <<endl;
    cout << b3 <<endl;
    
    //&& and boolean operation:
    b1 = true;
    b2 = false;
    b3 = b1 && b2;
    b4 = b1 && !b2;
    
    cout << b1 <<endl;
    cout << b2 <<endl;
    cout << b3 <<endl;
    cout << b4 <<endl;
    
    // || or boolean operation:
    b1 = false;
    b2 = b1 || !b1;
    b3 = b2 && (b1 || true);
    
    cout << b1 <<endl;
    cout << b2 <<endl;
    cout << b3 <<endl;
    
    //atomic and compound boolean expression:
    int x;
    
    b1 = true;
    b2 = (true && !b1);
    
    x =3;
    b3 = (x < 5);
    b4 = (x >= 0) && (x < 5);
    b5 = (x == 3) || (x == 4);
    
    cout << b1 <<endl;
    cout << b2 <<endl;
    cout << b3 <<endl;
    cout << b4 <<endl;
    cout << b4 <<endl;
    
    return 0; 

}
