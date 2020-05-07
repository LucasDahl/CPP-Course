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

// This program is used to calculate the days in a month for any given year.

// Header
//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//    // Properties
//    int month, year;
//    bool flag;
//
//    do {
//
//        // Ask the user for the data.
//        cout << "Please enter a month (1-12): ";
//        cin >> month;
//        cout << "\nPlease enter a year: ";
//        cin >> year;
//
//        // Decision statement for month
//        switch (month) {
//
//                // For all months with 31 days
//            case 1:
//            case 3:
//            case 5:
//            case 7:
//            case 8:
//            case 10:
//            case 12:
//                cout << "31 days";
//                break;
//
//                // For all days with 30days
//            case 4:
//            case 6:
//            case 9:
//            case 11:
//                cout << "30 days";
//                break;
//
//            case 2:
//                // Decision statement for leap year
//                if (year % 100 == 0) {
//                    if (year % 400 == 0) {
//                        cout << "29 days " << endl;
//                    } else {
//                        cout << "28 days" << endl;
//                    }
//
//                } else if (year % 100 != 0) {
//                    if (year % 4 == 0) {
//                        cout << "29 days" << endl;
//                    } else {
//                        cout << "28 days" << endl;
//                    }
//                }
//                break;
//
//            default:
//                cout << "Invalid month. Rerun program. Try again." << endl;
//        }
//
//        // Check if the user entered an int
//        if (month >=1 && year >= 1) {
//            flag = true;
//        } else {
//
//            // User entered something other than a int
//            flag = false;
//
//            // Clear the input stream
//            cin.clear();
//            cin.ignore();
//        }
//
//    } while(flag != true);
//
//    cout << endl;
//
//    // Used to exit the program
//    return 0;
//
//}
