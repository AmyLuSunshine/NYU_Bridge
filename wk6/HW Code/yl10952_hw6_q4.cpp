//
// Created by yl10952 on 8/18/2023.
//
/*
Question 4:
a. Implement a function:
void printDivisors(int num)
This function is given a positive integer num, and prints all of num’s divisors in an ascending
order, separated by a space.
For Example, if we call printDivisors(100), the expected output is:
1 2 4 5 10 20 25 50 100
Implementation requirement: Pay attention to the running time of your function. An
efficient implementation would run in Θ%√num)

b. Use the function above when implementing a program that reads from the user a positive
integer (≥2), and prints all it’s divisors.
Your program should interact with the user exactly as it shows in the following example:
Please enter a positive integer >= 2: 100
1 2 4 5 10 20 25 50 100*/

#include <iostream>
#include <cmath> //sqrt();
#include <string>
using namespace std;

void printDivisors(int num);

int main(){
    int num;

    cout << " Please enter a positive integer >= 2: ";
    cin >> num;

    for(num=2; num<=191; num++) { //this is for illustrating the test cases
       cout << "input = "<< num << " => ";
        printDivisors(num);
   }
    return 0;
}


void printDivisors(int num){

    //********************************One “for loop” + Sting Solution*************************************

    /*string asc_sequence = "";
    string desc_sequence = "";
    string output_sequence = "";

    //cout: input = 100 => 1 2 4 5 10 20 25 50 100
    for(int i=1; i<=sqrt(num); i++) {
        if (num % i == 0) {
            asc_sequence = asc_sequence + to_string(i) + " "; //using to_string to adjust cout order is soo cool !
        }
        if (i != sqrt(num) && i * (num / i) == num) { // if(i * i != num){
            desc_sequence = to_string(num / i) + " " + desc_sequence;//the art of % and /
            }
    }
    output_sequence = asc_sequence + desc_sequence;
    cout << output_sequence;*/

    //cout : input = 100 => 1 2 4 5 10 100 50 25 20
    /*for(int i=1; i<=sqrt(num); i++) {
        if (num % i == 0) {
            asc_sequence = asc_sequence + to_string(i) + " ";
            if (i != sqrt(num) && i * (num / i) == num) {
                desc_sequence = desc_sequence + to_string(num / i) + " ";
            }
        }
    }
    output_sequence = asc_sequence + desc_sequence;
    cout << output_sequence;*/


    //***********************************One for loop + No string******************************************
     //cout: input = 100 => 1 100 2 50 4 25 5 20 10
     /* for(int i=1; i<=sqrt(num); i++){
        if(num % i == 0){
            cout << i << " ";
            if(i != sqrt(num) && i*(num/i) == num){ //seems like doesn't matter for if is nested or not
                cout << num/i <<" ";
            }
        }
    }*/


    //****************************************Two “for loops” Solution*************************************

    //the upper half for loop to combine with the other for loop below
    //1 2 4 5 10
    //sqrt need to be (int), casting be careful

    /*for ( int i = 1; i < sqrt(num); i++ ){
        if ( num % i == 0 ) {
            cout<<i<<"  ";
        }
    }
    //works
    for ( int i = sqrt(num); i >= 1; i-- ){ //
        //if.....i != squr.....
        if ( num % i == 0 ) {
            cout<<num/i<<"  ";
        }*/
    }

    //the different lower half for loops

   /* //cout: input = 8 => 1 2 8 here we lost the value of 4, so not right solution
      for (int i = sqrt(num) -1; i > 1; i--){
        if (i*i == num)
            cout << i << " ";
    }
       cout << num;
     */


    //new intuitive thought: 2 4 5; then if 5 4 2, remember to link to user input 100, 20=100/5;25=100/4;50=100/2...
    /*for (int i = sqrt(num) -1; i > 1; i--) {// sqrt(num)*sqrt(num)=num, so only use sqrt(num) once, here -1
        if (num % i == 0) //if i is divisible by num, i*cout=num; here we find i;
            cout << num/i << " "; // i*cout=num, so cout=num/i;
    }
       cout << num;*/


     //cout: input = 100 => 1 2 4 5 10 20 25 50 100
      /* for (int i = sqrt(num) +1; i <= num / 2; i++) {//half num, still O(n)....
        if (num % i == 0)
            cout << i << " ";
    }
       cout << num;*/

    cout << endl;
}


/*
 Please enter a positive integer >= 2:100
 1 2 4 5 10 20 25 50 100
Please enter a positive integer >= 2:191
1 191
*/


//run time linear, O(n)
 /*void printDivisors(int num){
    for(int i=1; i<num; i++){
        if(num % i == 0){
            cout << i << " ";
        }
    }
    cout <<num;
}*/


//final output / test cases
/*
hw6_q4.exe"
Please enter a positive integer >= 2:2
input = 2 => 1 2
input = 3 => 1 3
input = 4 => 1 2 4
input = 5 => 1 5
input = 6 => 1 2 3 6
input = 7 => 1 7
input = 8 => 1 2 4 8
input = 9 => 1 3 9
input = 10 => 1 2 5 10
input = 11 => 1 11
input = 12 => 1 2 3 4 6 12
input = 13 => 1 13
input = 14 => 1 2 7 14
input = 15 => 1 3 5 15
input = 16 => 1 2 4 8 16
input = 17 => 1 17
input = 18 => 1 2 3 6 9 18
input = 19 => 1 19
input = 20 => 1 2 4 5 10 20
input = 21 => 1 3 7 21
input = 22 => 1 2 11 22
input = 23 => 1 23
input = 24 => 1 2 3 4 6 8 12 24
input = 25 => 1 5 25
input = 26 => 1 2 13 26
input = 27 => 1 3 9 27
input = 28 => 1 2 4 7 14 28
input = 29 => 1 29
input = 30 => 1 2 3 5 6 10 15 30
input = 31 => 1 31
input = 32 => 1 2 4 8 16 32
input = 33 => 1 3 11 33
input = 34 => 1 2 17 34
input = 35 => 1 5 7 35
input = 36 => 1 2 3 4 6 9 12 18 36
input = 37 => 1 37
input = 38 => 1 2 19 38
input = 39 => 1 3 13 39
input = 40 => 1 2 4 5 8 10 20 40
input = 41 => 1 41
input = 42 => 1 2 3 6 7 14 21 42
input = 43 => 1 43
input = 44 => 1 2 4 11 22 44
input = 45 => 1 3 5 9 15 45
input = 46 => 1 2 23 46
input = 47 => 1 47
input = 48 => 1 2 3 4 6 8 12 16 24 48
input = 49 => 1 7 49
input = 50 => 1 2 5 10 25 50
input = 51 => 1 3 17 51
input = 52 => 1 2 4 13 26 52
input = 53 => 1 53
input = 54 => 1 2 3 6 9 18 27 54
input = 55 => 1 5 11 55
input = 56 => 1 2 4 7 8 14 28 56
input = 57 => 1 3 19 57
input = 58 => 1 2 29 58
input = 59 => 1 59
input = 60 => 1 2 3 4 5 6 10 12 15 20 30 60
input = 61 => 1 61
input = 62 => 1 2 31 62
input = 63 => 1 3 7 9 21 63
input = 64 => 1 2 4 8 16 32 64
input = 65 => 1 5 13 65
input = 66 => 1 2 3 6 11 22 33 66
input = 67 => 1 67
input = 68 => 1 2 4 17 34 68
input = 69 => 1 3 23 69
input = 70 => 1 2 5 7 10 14 35 70
input = 71 => 1 71
input = 72 => 1 2 3 4 6 8 9 12 18 24 36 72
input = 73 => 1 73
input = 74 => 1 2 37 74
input = 75 => 1 3 5 15 25 75
input = 76 => 1 2 4 19 38 76
input = 77 => 1 7 11 77
input = 78 => 1 2 3 6 13 26 39 78
input = 79 => 1 79
input = 80 => 1 2 4 5 8 10 16 20 40 80
input = 81 => 1 3 9 27 81
input = 82 => 1 2 41 82
input = 83 => 1 83
input = 84 => 1 2 3 4 6 7 12 14 21 28 42 84
input = 85 => 1 5 17 85
input = 86 => 1 2 43 86
input = 87 => 1 3 29 87
input = 88 => 1 2 4 8 11 22 44 88
input = 89 => 1 89
input = 90 => 1 2 3 5 6 9 10 15 18 30 45 90
input = 91 => 1 7 13 91
input = 92 => 1 2 4 23 46 92
input = 93 => 1 3 31 93
input = 94 => 1 2 47 94
input = 95 => 1 5 19 95
input = 96 => 1 2 3 4 6 8 12 16 24 32 48 96
input = 97 => 1 97
input = 98 => 1 2 7 14 49 98
input = 99 => 1 3 9 11 33 99
input = 100 => 1 2 4 5 10 20 25 50 100
input = 101 => 1 101
input = 102 => 1 2 3 6 17 34 51 102
input = 103 => 1 103
input = 104 => 1 2 4 8 13 26 52 104
input = 105 => 1 3 5 7 15 21 35 105
input = 106 => 1 2 53 106
input = 107 => 1 107
input = 108 => 1 2 3 4 6 9 12 18 27 36 54 108
input = 109 => 1 109
input = 110 => 1 2 5 10 11 22 55 110
input = 111 => 1 3 37 111
input = 112 => 1 2 4 7 8 14 16 28 56 112
input = 113 => 1 113
input = 114 => 1 2 3 6 19 38 57 114
input = 115 => 1 5 23 115
input = 116 => 1 2 4 29 58 116
input = 117 => 1 3 9 13 39 117
input = 118 => 1 2 59 118
input = 119 => 1 7 17 119
input = 120 => 1 2 3 4 5 6 8 10 12 15 20 24 30 40 60 120
input = 121 => 1 11 121
input = 122 => 1 2 61 122
input = 123 => 1 3 41 123
input = 124 => 1 2 4 31 62 124
input = 125 => 1 5 25 125
input = 126 => 1 2 3 6 7 9 14 18 21 42 63 126
input = 127 => 1 127
input = 128 => 1 2 4 8 16 32 64 128
input = 129 => 1 3 43 129
input = 130 => 1 2 5 10 13 26 65 130
input = 131 => 1 131
input = 132 => 1 2 3 4 6 11 12 22 33 44 66 132
input = 133 => 1 7 19 133
input = 134 => 1 2 67 134
input = 135 => 1 3 5 9 15 27 45 135
input = 136 => 1 2 4 8 17 34 68 136
input = 137 => 1 137
input = 138 => 1 2 3 6 23 46 69 138
input = 139 => 1 139
input = 140 => 1 2 4 5 7 10 14 20 28 35 70 140
input = 141 => 1 3 47 141
input = 142 => 1 2 71 142
input = 143 => 1 11 13 143
input = 144 => 1 2 3 4 6 8 9 12 16 18 24 36 48 72 144
input = 145 => 1 5 29 145
input = 146 => 1 2 73 146
input = 147 => 1 3 7 21 49 147
input = 148 => 1 2 4 37 74 148
input = 149 => 1 149
input = 150 => 1 2 3 5 6 10 15 25 30 50 75 150
input = 151 => 1 151
input = 152 => 1 2 4 8 19 38 76 152
input = 153 => 1 3 9 17 51 153
input = 154 => 1 2 7 11 14 22 77 154
input = 155 => 1 5 31 155
input = 156 => 1 2 3 4 6 12 13 26 39 52 78 156
input = 157 => 1 157
input = 158 => 1 2 79 158
input = 159 => 1 3 53 159
input = 160 => 1 2 4 5 8 10 16 20 32 40 80 160
input = 161 => 1 7 23 161
input = 162 => 1 2 3 6 9 18 27 54 81 162
input = 163 => 1 163
input = 164 => 1 2 4 41 82 164
input = 165 => 1 3 5 11 15 33 55 165
input = 166 => 1 2 83 166
input = 167 => 1 167
input = 168 => 1 2 3 4 6 7 8 12 14 21 24 28 42 56 84 168
input = 169 => 1 13 169
input = 170 => 1 2 5 10 17 34 85 170
input = 171 => 1 3 9 19 57 171
input = 172 => 1 2 4 43 86 172
input = 173 => 1 173
input = 174 => 1 2 3 6 29 58 87 174
input = 175 => 1 5 7 25 35 175
input = 176 => 1 2 4 8 11 16 22 44 88 176
input = 177 => 1 3 59 177
input = 178 => 1 2 89 178
input = 179 => 1 179
input = 180 => 1 2 3 4 5 6 9 10 12 15 18 20 30 36 45 60 90 180
input = 181 => 1 181
input = 182 => 1 2 7 13 14 26 91 182
input = 183 => 1 3 61 183
input = 184 => 1 2 4 8 23 46 92 184
input = 185 => 1 5 37 185
input = 186 => 1 2 3 6 31 62 93 186
input = 187 => 1 11 17 187
input = 188 => 1 2 4 47 94 188
input = 189 => 1 3 7 9 21 27 63 189
input = 190 => 1 2 5 10 19 38 95 190
input = 191 => 1 191

Process finished with exit code 0*/
