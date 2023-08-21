/*Question 2:
Implement a number guessing game. The program should randomly choose an integer
between 1 and 100 (inclusive), and have the user try to guess that number.
Implementations guidelines:
1. The user can guess at most 5 times.
2. Before each guess the program announces:
• An updated guessing-range, taking in to account previous guesses and responses.
• The number of guesses that the user has left.
3. If the user guessed correctly, the program should announce that, and also tell how many
guesses the user used.
4. If the user guessed wrong, and there are still guesses left, the program should tell the
user if the number (it chose) is bigger or smaller than the number that the user guessed.
5. If the user didn’t guess the number in all of the 5 tries, the program should reveal the
number it chose.
6. Follow the execution examples below for the exact format.
In order to generate random numbers (of type int), you should first call the srand
function (one time) to initialize a seed for the random number generator. Then, you can call
the rand function repeatedly to generate random integers.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int GUESS_MAX= 5;
int main() {
    int gameAnswer;
    int userGuess;
    
    int guessLeft = GUESS_MAX;
    int leftRange = 1;
    int rightRange =100;
    
    bool noGuessLeft = false;
    
    //The program randomly choose an integer between 1 and 100 (inclusive)
    srand(time(0));
    gameAnswer = (rand() % 100) + 1;// 1-100
    //cout <<"reveal: "<<gameAnswer<<"\n";
    
    //The user can guess at most 5 times
    while(noGuessLeft == false){
        
    //Before each guess the program announces:
        //An updated guessing-range, taking in to account previous guesses and responses.
        if(guessLeft<5){
            if(gameAnswer >= userGuess)
                leftRange = userGuess + 1;
            else
                rightRange = userGuess - 1;
        }
        
        //start each guess the program announces:
        cout << "I thought of a number between 1 and 100! Try to guess it.\n";
        cout << "Range: [" <<leftRange << ", " <<rightRange<<"], Number of guesses left: " << guessLeft <<"\n";
        
        //The number of guesses that the user has left.
        guessLeft--;
        
    //start guess
        cout << "Your guess: ";
        cin >> userGuess;
        
        //If the user guessed correctly, the program should announce that, 
        //and also tell how many guesses the user used.
        if(userGuess == gameAnswer){
            cout <<"Congrats! You guessed my number in "<< GUESS_MAX-guessLeft << " guesses. \n";
            noGuessLeft = true;
            //return 0;//the program is stop fully with no issue
            cout <<"********************************************************\n";
        }
        //If the user guessed wrong, and there are still guesses left, 
        //the program should tell the user if gameAnswer is bigger/smaller than the userGuess
        else{
            if(userGuess > gameAnswer){
                cout <<"Wrong! My number is smaller.\n";
                cout <<"********************************************************\n";
            }
            else{
                cout <<"Wrong! My number is bigger.\n";
                cout <<"********************************************************\n";
            }
        //If the user didn’t guess the number in all of the 5 tries, 
        //the program should reveal the number it chose.
        if(guessLeft == 0){
            noGuessLeft = true;
            cout << "Out of guesses! My number is "<< gameAnswer<<"\n";
            cout <<"********************************************************\n";
        }    
            
        }
        
        
        
    }    
    
   return 0;
}

/*
reveal: 12
I thought of a number between 1 and 100! Try to guess it.
Range: [1, 100], Number of guesses left: 5
Your guess: 
50
Wrong! My number is smaller.
********************************************************
I thought of a number between 1 and 100! Try to guess it.
Range: [1, 50], Number of guesses left: 4
Your guess: 
25
Wrong! My number is smaller.
********************************************************
I thought of a number between 1 and 100! Try to guess it.
Range: [1, 25], Number of guesses left: 3
Your guess: 
15
Wrong! My number is smaller.
********************************************************
I thought of a number between 1 and 100! Try to guess it.
Range: [1, 15], Number of guesses left: 2
Your guess: 
10
Wrong! My number is bigger.
********************************************************
I thought of a number between 1 and 100! Try to guess it.
Range: [10, 15], Number of guesses left: 1
Your guess: 
13
Wrong! My number is smaller.
********************************************************
Out of guesses! My number is 12
********************************************************


** Process exited - Return Code: 0 **

reveal: 67
I thought of a number between 1 and 100! Try to guess it.
Range: [1, 100], Number of guesses left: 5
Your guess: 
50
Wrong! My number is bigger.
********************************************************
I thought of a number between 1 and 100! Try to guess it.
Range: [50, 100], Number of guesses left: 4
Your guess: 
75
Wrong! My number is smaller.
********************************************************
I thought of a number between 1 and 100! Try to guess it.
Range: [50, 75], Number of guesses left: 3
Your guess: 
60
Wrong! My number is bigger.
********************************************************
I thought of a number between 1 and 100! Try to guess it.
Range: [60, 75], Number of guesses left: 2
Your guess: 
65
Wrong! My number is bigger.
********************************************************
I thought of a number between 1 and 100! Try to guess it.
Range: [65, 75], Number of guesses left: 1
Your guess: 
67
Congrats! You guessed my number in 5 guesses. 
********************************************************

** Process exited - Return Code: 0 **

reveal: 40
I thought of a number between 1 and 100! Try to guess it.
Range: [1, 100], Number of guesses left: 5
Your guess: 
40
Congrats! You guessed my number in 1 guesses. 
********************************************************


** Process exited - Return Code: 0 **


*/