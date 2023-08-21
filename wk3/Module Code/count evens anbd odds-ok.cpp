// 2 3 4 5 : Same numbers of evens and odds
// 1 1 2 3 : More odd numbers
// 2 2 3 4 : More even numbers

#include <iostream>
using namespace std;

int main() {
    int num;
    int evensCount, oddsCount;

    cout<<"Please enter 4 positive integers, separated by a space:"<<endl;

    evensCount = 0;
    oddsCount = 0;

    cin>>num;
    if((num % 2) == 0)
        evensCount += 1;
    else
        oddsCount += 1;

    cin>>num;
    if((num % 2) == 0)
        evensCount += 1;
    else
        oddsCount += 1;

    cin>>num;
    if((num % 2) == 0)
        evensCount += 1;
    else
        oddsCount += 1;

    cin>>num;
    if((num % 2) == 0)
        evensCount += 1;
    else
        oddsCount += 1;


    if(evensCount > oddsCount)
        cout<<"More even numbers"<<endl;
    else if(oddsCount > evensCount)
        cout<<"More odd numbers"<<endl;
    else
        cout<<"Same number of evens and odds"<<endl;

    return 0;
}
