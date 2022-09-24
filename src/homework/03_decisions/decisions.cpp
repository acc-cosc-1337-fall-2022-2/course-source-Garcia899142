//write include statement for decisions header
#include "decisions.h"

using std::string;

std::string get_letter_grade_using_if(int grade)
{
    string lettergrade;
    if (grade >= 90 && grade <= 100)
    {
        lettergrade = "A";
    }
    else if (grade >= 80)
    {
        lettergrade = "B";
    }
    else if (grade >= 70)
    {
        lettergrade = "C";
        }
    else if (grade >= 60)
    {
        lettergrade = "D";
    }
    else if (grade >= 00 && grade <= 59)
    {
        lettergrade = "F";
    }
    else 
    {
        lettergrade = "number is out of range";
    }
    return lettergrade;

}

std::string get_letter_grade_using_switch(int grade)
{
    string letterGrade;

    switch(grade/10)
    {
        case 10:
            letterGrade ="A";
            break;
        case 9:
            letterGrade ="A";
            break;
        case 8: 
            letterGrade ="B";
            break;
        case 7: 
            letterGrade ="C";
            break;
        case 6: 
            letterGrade ="D";
            break;
        case 5:
            letterGrade ="F";
            break;        
        default:
            letterGrade = "Number is out of range \n";
            break;
    }
    return letterGrade;
}