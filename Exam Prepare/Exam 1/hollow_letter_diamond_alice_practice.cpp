//
// Created by yl10952 on 8/10/2023.
//
#include <iostream>
using namespace std;

//from Amy
int main(){
    int n;
    int l = 0;
    char a = 'a';

    cout << "Enter n:" << endl;
    cin >> n;

    for(int i=n; i>0; i--){
        for(int j=1; j<i; j++){
            cout << " ";
        }

        cout << a;

        for(int j=1; j<l; j++){
            cout << " ";
        }
        l+=2;

        if(i != 5 ){
            cout << a;
        }
        a++;

        cout << endl;
    }

    a--;
    l-=2;
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }

        a--;
        cout << a;

        l-=2;
        for(int j=1; j<l; j++){
            cout << " ";
        }

        if(i != n-1){
            cout << a;
        }

        cout << endl;
    }

    return 0;
}


//learn from Alice
/*int main() {
    int n;
    cout << "Enter number: " << endl;
    cin >> n;

    char letter = 'a';
    char space = ' ';
    //int space = 1;

    int outSpaceLimit = n-1;
    int insideSpaceLimit = 0;

    // 2*n -1 outer rows
    for (int i = 1; i <= 2 * n - 1; i++){
        for(int j=1; j<= outSpaceLimit; j++)
            cout << space;

        cout << letter;

        for(int j=1; j<insideSpaceLimit;j++)
            cout << space;

        if(i != 1 && i != 2*n-1)
            cout << letter;

        if(i < n){
            outSpaceLimit--;
            letter++;
            insideSpaceLimit += 2;
            //space++;
        }
        else{
            outSpaceLimit++;
            letter--;
            insideSpaceLimit -= 2;
            //space++;
        }
        cout << endl;
    }

    return 0;

}*/

/*
"C:\Users\yangm\Documents\NYU Bridge\Exam\Exam 1\hollow_letter_diamond_alice.exe"
enter number:
5
1111a
222b2b
33c333c
4d44444d
e5555555e
6d66666d
77c777c
888b8b
9999a

Process finished with exit code 0
*/





/*//from Jesse
#include <iostream>
using namespace std;

int main() {

    int input;
    char letter = 'a';
    cout<<"Enter an integer"<<endl;
    cin>>input;
    input = 5;
    for(int i = 0; i < input; i++) {
        for(int j = i; j < input; j++) {
            cout<<" ";
        }
        cout<<char(letter + i);
        for(int j = 0; j < i - 1; j++) {
            cout<<" ";
        }
        for(int j = 0; j <= i ; j++) {
            cout<<" ";
        }
        //if(char(letter+i) == 'a') {
        if(i == 0){
            cout<<"";
        }
        else{
            cout<<char(letter + i);
        }

        cout<<endl;
    }
    letter-=1;
    for(int i = input-1; i > 0; i--) {
        for(int j = i-1; j < input; j++) {
            cout<<" ";
        }
        cout<<char(letter + i);
        for(int j = 0; j < i - 1; j++) {
            cout<<" ";
        }
        for(int j = 1; j < i ; j++) {
            cout<<" ";
        }
        //if(char(letter+i) == 'a') {
        if(i == 1){
            cout<<"";
        }
        else{
            cout<<char(letter + i);
        }

        cout<<endl;
    }

    return 0;

}*/

/*Enter an integer
5
     a
    b  b
   c    c
  d      d
 e        e
  d      d
   c    c
    b  b
     a

Process finished with exit code 0*/