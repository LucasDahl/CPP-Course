//
//  pennies for pay.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/6/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Task
/*
 Write a program that calculates how much a person would earn over a period of time if his or her salary is one penny for the first day and two pennies the second day, and continues to double each day. The program asks the user for the number of days.

 Display a table showing how much the salary was for each day, and then show the total pay at the end of the period. The output should be displayed in a dollar amount, not the number of pennies.

 Input validation: Do not accept a number less than 1 for the number of days worked.
 */

// This program is to simulate how much a person would make if the made double the amout of pennis
// they made the day prior.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Properties
    // Const
    const int PENNIESPERDAY = 2;
    
    // Variables
    int days = 0;
    float daySalary = 0.01, totalSalary = 0;

    // Ask the user how manys they worked. Make sure it is a vlaid date.
    while (days <= 0) {

        cout << "Please enter the total number of days(must be more than zero): ";
        cin >> days;

    }

    cout << "\n   Day\t\t\tTotal Earned" << endl;
    cout << "--------------------------------------\n";
    cout << setprecision(2) << fixed;
    
    for(int i = 0; i < days; i++) {

        // Update the total salary.
        totalSalary += daySalary;
        
        cout << "\t" << (i + 1) << "\t\t\t\t$";
        cout << daySalary << endl;
        
        // Get the total salary
        daySalary *= PENNIESPERDAY;

    }

    // Display the total.
    cout << "\nTotal salary for " << days;
    cout << " days is $" << totalSalary << endl;
    cout << endl;

    // Used to end the program
    return 0;

}

