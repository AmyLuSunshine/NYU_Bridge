//
// Created by yl10952 on 8/17/2023.
//
/*#include <iostream>
#include <string>
using namespace std;

int reverse(int number);
bool isPalindrome(int number);

//string reverse(int number);

int main(){
    int number;

    cout << "Please input a sequence of number: " <<endl;
    cin >> number;

    if(isPalindrome(number))
        cout << number << " is palindrome." << endl;
    else
        cout << number << " is not palindrome." << endl;

    return 0;
}

//non string version
int reverse(int number){
    int reverseNumber;//line 29, 41, seems need to declare variables for diff func everytime??

    while(number > 0){
        int temp = number % 10;
        reverseNumber = temp + reverseNumber*10;
        number = number / 10;
    }
    return reverseNumber;
}

bool isPalindrome(int number){
    int reverseNumber = reverse(number);
    if(number != reverseNumber)
        return false;

    return true;
}*/


/*//string version
string reverse(int number){
    string reverseNumber;
    while(number > 0){
        reverseNumber += to_string(number % 10);//reverse int and convert to string
        number /= 10;
    }
    return reverseNumber;
}

bool isPalindrome(int number){
    string reverseNumber = reverse(number);

    string strNumber = to_string(number); // convert int to string
    if(strNumber != reverseNumber)
        return false;

    return true;
}*/

//********************************Prof Code********************************************

#include <iostream>
using namespace std;

void reverse(int n, int& rev){//call by reference, actual function's intake's name keep same
    while(n != 0){ // n > 0; also works,operator is a div, it'll show 0 or !0 result
        rev = rev*10 + (n % 10);
        n = n/10;// 1/10=(int)0, not (double)0.1 like what you thought
    }
}

int checkPalindrome(int test){//call by value, actual function's intake's name doesn't matter
    int rev = 0;
    reverse(test, rev); //123 ---> 321
    return(test == rev);//this is cool, return if test == tev is true;
}

int main(){
    int number;

    cout << "Please input a sequence of number: " <<endl;
    cin >> number;
    number = 121;
    int result = checkPalindrome(number);

    if(result == 1)
        cout << number << " is palindrome." << endl;
    else
        cout << number << " is not palindrome." << endl;

    return 0;
}

