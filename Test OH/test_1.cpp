//
// Created by yl10952 on 8/14/2023.
//
#include <iostream>

// solution 1;
bool isPrime (int num){
    int countDivs;
    countDivs = 0;
    for (int i = 1; i <=num ; i++) {
        if (num % i == 0)
            countDivs++;
        }

    if(countDivs == 2){
        return true;
    }
    else {
        return false;
    }
} //this does work because it's outside for loop