//
// Created by yl10952 on 8/18/2023.
//
/*
Question 2:
Write a program that, prints a ‘pine tree’ consisting of triangles of increasing sizes, filled
with a character (eg. ‘*’ or ’+’ or ‘$’ etc).
Your program should interact with the user to read the number of triangles in the tree and
the character filling the tree.
Your implementation should include the following functions:
a. void printShiftedTriangle(int n, int m, char symbol)
It prints an n-line triangle, filled with symbol characters, shifted m spaces from the left
margin.
For example, if we call printShiftedTriangle(3, 4, `+`), the expected output
is:


b. void printPineTree(int n, char symbol)
It prints a sequence of n triangles of increasing sizes (the smallest triangle is a 2-line
triangle), which form the shape of a pine tree. The triangles are filled with the symbol
character.
For example, if we call printPineTree(3, `#`), the expected output is:
 */
#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);

int main(){
    int numTriangle;
    char treeChar;

    //user design 1 or 2 or 3 or 4 ... triangles in the tree
    cout <<"Please enter the number of triangles in the tree: "<<endl;
    cin >> numTriangle;
    cout <<"Please enter the character filling the tree: "<<endl;
    cin >> treeChar;

    printPineTree(numTriangle,treeChar);

    return 0;
}

void printShiftedTriangle(int n, int m, char symbol){
    for(int i=n; i>0; i--) {
        for (int j = 0; j < m + i -1; j++) {
            cout << " ";
        }

        for (int j=2*i-1; j <2*n; j++){
            cout << symbol;
        }
        cout << endl;
    }
    /*for(int i=0; i<n; i++){
        for(int j=0; j<m+n-i-1; j++){
            cout << " ";
        }
        for(int j=0; j<2*i+1; j++){
            cout << symbol;
        }
        cout << endl;
    }*/
}


/*//this will only print three related triangles
void printPineTree(int n, char symbol){
    for(int i=n-1; i<=n+1; i++) {
        int shiftSpace = 2*n + 1 -i;
        printShiftedTriangle(i, shiftSpace, symbol);
    }
}*/

void printPineTree(int n, char symbol){
    for(int i=2; i<=n+1; i++) {
        int shiftSpace = 2*n + 1 -i;
        printShiftedTriangle(i, shiftSpace, symbol);
    }
}