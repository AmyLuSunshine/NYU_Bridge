//
// Created by yl10952 on 8/10/2023.
//This is the barn door question

//And challenge question from Amy
#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter barn size number: " << endl;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1)
                cout << "#";
            else if(i==j || i+j==n-1)
                cout << "$";
            else
                cout<<" ";
        }
        cout << endl;
    }

    return 0;
}

/*5
#####
#$ $#
# $ #
#$ $#
#####

4
####
#$$#
#$$#
####

 */





//TA Alicia, basically the same, this one start index from 1
/*int main(){
    int input;

    char frame = '#';
    char planks = '$';
    char space = ' ';

    cout << "Enter positive integer: ";
    cin >> input;

    for(int i = 1; i <= input; i++){ //10 rows
        for(int j = 1; j <= input; j++){ //10 columns
            if(j == 1 || j == input || i == 1 || i == input){
                //if we are at 1st column, or last column, or 1st row, or last row
                cout << frame;
            }
            else if(i == j || j == (input - i) + 1){
                //else, if we are at the diagonal and should print $
                cout << planks;
            }
            else {
                cout << space;
            }
        }
        cout << endl;
    }

}*/
