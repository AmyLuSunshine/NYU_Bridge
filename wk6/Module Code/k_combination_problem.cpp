//
// Created by yl10952 on 8/16/2023.
// nested functions, lol
#include <iostream>
using namespace std;

//declare the functions
int factorial(int);
int kCombinations(int,int);

int main(){
    int n, k;

    cout << "Please enter n and k (k <= n): " << endl;
    cin >> n >> k; //cool way to take multi input

    int k_comb = kCombinations(n, k);

    cout << n << " choose " << k << " is " << k_comb;

    return 0;
}

int kCombinations(int n, int k){

    int nFact = factorial(n);
    int kFact = factorial(k);
    int n_kFact = factorial(n-k);

    return (nFact / (kFact*n_kFact));
}

int factorial(int num){
    int facRes = 1;

    for(int i=1; i<=num; i++)
        facRes *= i;

    return facRes;
}