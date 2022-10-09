/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
#include "func.h"
#include<iostream>

using std::cout;
using std::string;
using std::cin;

int main() 
{
    int users_choice;
    do {
        users_choice = run_menu();
        if(users_choice == 1) {
            string dna_str;
            cout<<"Enter DNA String \n";
            cin>>dna_str;
            cout<<get_gc_content(dna_str);
            cout<<"\n";
        } else if(users_choice == 2){
            string dna_str;
            cout<<"Enter DNA String \n";
            cin>>dna_str;
            cout<<get_dna_complement(dna_str);
            cout<<"\n";
        }
        
    }
    while(users_choice != 3);
    
	return 0;
}