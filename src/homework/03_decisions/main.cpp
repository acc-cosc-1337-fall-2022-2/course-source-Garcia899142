//write include statements
#include "decisions.h"
#include <iostream>

using std::cout;
using std::cin;

int main() 
{
	std::cout<<"1. Letter grade using if \n";
	std::cout<<"2. Letter grade using switch \n";
	std::cout<<"3. exit program \n";
	int choice;
	std::cin>>choice;

	if  (choice == 3) {
	cout<<"exiting program...";
	exit(0);
	}
        
	auto grade = 0;
	cout<<"Enter a number grade: ";
	cin>>grade;

	
	
	if (choice == 1) {

	auto letterGrade = get_letter_grade_using_if(grade);

	cout<<"Letter grade is: "<<letterGrade << "\n";
	} 
	else if (choice == 2) {

	auto letterGrade = get_letter_grade_using_switch(grade);

	cout<<"Letter grade is: "<<letterGrade << "\n";
	}


	
	return 0;
	}

