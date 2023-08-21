//
// Created by yl10952 on 8/17/2023.
//
/*//****************** void swap example fr Module**********************************
#include <iostream>
using namespace std;
//int swap(int a, int b);//we can't use int,return more than one value is not allowed
//return b;//C allows return only one value out of a function
void swap(int& a, int& b);

int main(){
    int a = 3, b = 4;

    cout << a <<" "<< b <<endl;
    swap(a, b);
    cout << a <<" "<< b <<endl;

    return 0;
}

void swap(int& a, int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
//cout : 3 4;  4 3*/

//*********************************analyze Digits************************************

#include <iostream>
using namespace std;
//void analyzeDigits(int num, int& outCountDigs, int& outSum);

int analyzeDigits(int test, int& outSum);

int main(){
    int num, outCountDigs, outSum;

    cout <<"Please enter a positive integer: "<<endl;
    cin >> num;
    num = 375;
    //analyzeDigits(num,outCountDigs,outSum);
    outCountDigs = analyzeDigits(num, outSum);


    cout << "The number "<< num << " has " ;
    cout << outCountDigs;
    cout << " digits and their sum is " ;
    cout << outSum;

    return 0;
}

/*int analyzeDigits(int test, int& outSum){
    int count = 0;
    outSum = 0;//outSum=0 has to be initialized to 0 to make the equation to work!
    for(int i=test; i!=0; i/=10) {
        outSum += (i % 10);
        count++;
    }
    return count;
}*/

//Module Code
int analyzeDigits(int num, int& outSum){
    int count, sum; // set the variable type
    int currDig;

    count = 0; //initialize the value to start from 0;
    sum = 0;
    while(num >0) {
        currDig = num % 10;
        count++;
        sum += currDig;
        num = num / 10;
    }
    outSum = sum;

    return count;
}



/*void analyzeDigits(int num, int& outCountDigs, int& outSum){
    int count = 0;
    int sum = 0;
    int currDig;

    *//*for(i=num; i>0; i %= 10){//this is not working, for loop
        count++;
        sum += i;
        num /= 10;
    }*//*

    for(int i=num; i>0; i /= 10){ // this works now....OMG
        sum += i % 10;
        count++;
    }

    *//*for(sum=0; num != 0; num/=10){//now the for loop works !!!
        int currDig = num % 10;
        sum += currDig;
        count++;
    }*//*

    *//*while(num >0){
        currDig = num % 10;
        count++;
        sum += currDig;
        num /= 10; //num/10; compiler confused,this is not operation, no equation! num/=10; num=num/10;
    }*//*

    outCountDigs = count;
    outSum = sum;
}*/






/*void analyzeDigits(int num, int &count, int &sum);

int main() {
    int num, count, sum;
    cout << "enter a positive integer: ";
    cin >> num;

    analyzeDigits(num, count, sum);
    cout << "the number of digits in " << num << " is ";
    cout << count;
    cout << " and the sum is ";
    cout << sum;

    return 0;
}

void analyzeDigits(int num, int &count, int &sum) {
    count = 0;
    sum = 0;

    while (num > 0) {
        int digit = num % 10;
        num /= 10;
        count++;
        sum += digit;
    }
}*/
