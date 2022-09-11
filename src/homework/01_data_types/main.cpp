//write include statements
#include<iostream>
#include "data_types.h"
using namespace std;
//write namespace using statement for cout


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int result;
    result = multiply_numbers(num);
    cout<<result<<endl;

    int num1;
    num1 = 4;
    result = multiply_numbers(num1);
    cout<<result;
    return 0;
}