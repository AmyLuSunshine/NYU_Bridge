
//cout: 19 days are 2 weeks and 5 days    ** Process exited - Return Code: 0 

#include<iostream>
using namespace std;

const int DAYS_IN_A_WEEK = 7;
int main()
{
    int travel_num;
    int weeks;
    int days;
    
    cout<<"Please enter number of days you traveled:"<<endl;
    cin>>travel_num;
    
    weeks = travel_num / days_of_week; //weeks = travel_num / 7;
    days = travel_num % days_of_week; //days = travel_num % 7;
    
    cout<<travel_num<<" days are "<<weeks<<" weeks and "<<days<<" days";

    return 0;
}
