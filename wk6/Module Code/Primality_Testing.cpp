//
// Created by yl10952 on 8/15/2023.
//From Module 7

#include <iostream>
#include <cmath> // for the using of sqrt();
using namespace std;

//initialize function
bool isPrime(int num);

int main(){
    int num;

    cout << "Please enter integer that is greater/equal to two: " <<endl;
    cin >> num;

    //bool isPrime(num); //variable // no need to mark return type of function
    //isPrime(num);//seems like this is working, I don't need to write bool again in the main?

   /* //Print way 1
    cout << num << " is Prime or not ? (1 yes, 0 no): ";
    cout << isPrime(num) <<endl;*/

    //Print way 2
    //if (isPrime(num) != true) //if (isPrime(num) !=0) // this works too//if statement 默认 True, yes
    if (!isPrime(num))//this is a good way
        cout << num << " is not a prime number. " << endl;
    else
        cout << num << " is a prime number. " << endl;

    return 0;
}

  /* //2-num
    bool isPrime(int num){
        int countDivs;

        countDivs = 0;
         for (int i = 2; i < sqrt(num); i++)
        //for (int i = 2; i < num; i++) {// 1 and num itself doesn't need to count
            if (num % i == 0)
                countDivs++;
        }

        if(countDivs == 0)
            return true;
        else
            return false;
    }*/


  //Amy wrong example: num only divide when i is 2, then return the whatever result and stop
  //i will never go up from initial 2, i++ is not working/never been used, so it's in grey
  //Local variable 'i' used in loop condition is not updated in the loop
  /*bool isPrime(int num){

      for(int i=2; i < sqrt(num); i++) {//need to check sqrt,so i<=sqrt(num); check 5 for 25
          if (num % i == 0)
              return false;
          else
              return true;
      }
  }*/


//sqrt(num) correction Amy and Gor
    bool isPrime(int num){
        for(int i=2; i <= sqrt(num); i++) {//what's the problem?? // need to check sqrt&every i
            if (num % i == 0) {
                return false;
            }//no else true here,because have to check every number
        }
        return true;//leave return outside the for loop
    }// correct my thought, I can't put both T&F return inside for loop, good to leave one return outside the for loop



/*//sqrt(num) = i*i
bool isPrime(int num){
    if (num != 2){
        if (num < 2 || num % 2 == 0) {
            return false;
        }
        for(int i=3; (i*i)<=number; i+=2){
            if(number % i == 0 ){
                return false;
            }
        }
    }
    return true;
}*/



/*
//This is a cute way, 2-num/2
#include <iostream>
using namespace std;
int main()
{
    int n, i, m=0, flag=0;
    cout << "Enter the Number to check Prime: ";
    cin >> n;
    m=n/2;
    for(i = 2; i <= m; i++)
    {
        if(n % i == 0)
        {
            cout<<"Number is not Prime."<<endl;
            flag=1;
            break;
        }
    }
    if (flag==0)
        cout << "Number is Prime."<<endl;
    return 0;
}*/

/*
//Online solution: The standard way of using bool in my opinion
#include <iostream>
using namespace std;

bool check_prime(int);

int main() {

    int n;

    cout << "Enter a positive  integer: ";
    cin >> n;

    if (check_prime(n))
        cout << n << " is a prime number.";
    else
        cout << n << " is not a prime number.";

    return 0;
}

bool check_prime(int n) {
    bool is_prime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        is_prime = false;
    }

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}*/
