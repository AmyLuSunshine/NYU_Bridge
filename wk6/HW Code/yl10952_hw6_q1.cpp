//
// Created by yl10952 on 8/18/2023.
//
/*
Question 1:
The Fibonacci numbers sequence, Fn, is defined as follows:
F1 is 1, F2 is 1, and Fn = Fn-1 + Fn-2 for n = 3, 4, 5, ...
In other words, each number is the sum of the previous two numbers. The first 10 numbers
        in Fibonacci sequence are: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
Note: Background of Fibonacci sequence: https://en.wikipedia.org/wiki/Fibonacci_number
1. Write a function int fib(int n) that returns the n-th element of the Fibonacci
        sequence.
2. Write a program that prompts the user to enter a positive integer num, and then
        prints the num’s elements in the Fibonacci sequence.
Your program should interact with the user exactly as it shows in the following
example:
Please enter a positive integer: 7
13*/


#include <iostream>
using namespace std;

int fib(int n);

int main(){
    int input;

    cout << "Please enter a positive integer:";
    cin >> input;

    cout <<"The " << input;
    cout << "'s elements in the Fibonacci sequence is: "<< fib(input);

    return 0;
}

int fib(int n){
    int element = 0;
    int frontElement = 0;
    int frontFrontElement =1;

    for(int i=1; i<=n; i++){
        element = frontElement + frontFrontElement;
        frontFrontElement = frontElement;
        frontElement = element;
    }
    return element;
}

/*int fib(int n){
    //three variables
    int element = 0;
    int frontElement = 1;
    int frontFrontElement =1;

    //F1 is 1, F2 is 1,
    if(n == 1 || n== 2)
        element = 1;
    //and Fn = Fn-1 + Fn-2 for n = 3, 4, 5, ...
    //start from front and frontFront =1, and given an input n.
    for(int i=3; i<=n; i++){
        element = frontElement + frontFrontElement;

        //update front (Fn-1) and frontFront (Fn-2) for each iteration
        frontFrontElement = frontElement;
        frontElement = element;
    }
    return element;
}*/