#include<iostream>   //library file used

using namespace std;

int main()
{
    float time;
    float rate;
    float principal;
    float emi;


    cout<<"Enter Principal Amount : \n ";
    cin>>principal;

    cout<<"Enter rate of Interest: \n ";
    cin>>rate;

    cout<<"Enter number of months : \n ";
    cin>>time;

    emi=rate/time*principal;

    cout<<"Your Monthly EMI is "<<emi;
}