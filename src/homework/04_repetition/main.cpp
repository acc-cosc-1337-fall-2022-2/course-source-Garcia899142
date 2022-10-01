//write include statements
#include "dna.h"
#include <iostream>
//write using statements
using namespace std;


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	char exit = 'N';

	do
	{	
		int choice;
		std::cout<<"1. Factorial \n";
		std::cout<<"2. Greatest Common Divisor \n";
		std::cout<<"3. Exit \n";
		std::cout<<"Choose a function: ";
		std::cin>>choice;
		
		switch(choice) 
		{
			case 1:
			{
				int num;
				std::cout<<"Enter a number: ";
				std::cin>>num;
				int value = factorial(num);
				std::cout<<num<<" factorial is "<<value<<"\n";
			}
			break;
			case 2:
			{
				int num1, num2;
				std::cout<<"Enter the first number: ";
				std::cin>>num1;
				std::cout<<"Enter the second number: ";
				std::cin>>num2;
				int value = gcd(num1, num2);
				std::cout<<"The Greatest Common Divisor of "<<num1<<" and "<<num2<<" is "<<value<<"\n";
			}
			break;
			case 3:
			{
				std::cout<<"Are you sure you want to exit? (Y/N): ";
				std::cin>>exit;
			}
			
			break;			
		}
	}	while (exit != 'Y');
		
	return 0;
}