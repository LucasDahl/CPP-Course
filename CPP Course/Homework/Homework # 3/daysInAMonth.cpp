//
//  daysInAMonth.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 4/23/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: Tasks

/*
 Write a program that asks the user to enter the month (letting the user enter an integer in the range of 1 through 12) and the year. The program should then display the number of days in that month. Use the following criteria to identify leap years:

 Determine whether the year is divisible by 100. If it is, then it is a leap year if and only if it is divisible by 400. For example, 2000 is a leap year but 2100 is not. (Note: Use % operator to check if a number is divisible by another. If the remainder is 0, it means divisible. i.e.( x % y == 0 ) means x is divisible by y. )
 If the year is not divisible by 100, then it is a leap year and if only it is divisible by 4. For example, 2008 is a leap year but 2009 is not.
 Here is a sample run of the program:

 Enter a month (1-12): 2 [ENTER]

 Enter a year: 2008 [ENTER]

 29 days

 Input Validation: There are only 12 months in a year. Don’t accept negative years.
 */

// Header
#include <iostream>

//int main() {
//    
//    // Used to exit the program
//    return 0;
//    
//}
