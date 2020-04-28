//
//  mobileServiceProviderPt2.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 4/23/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

//MARK: - Task

/*
 Modify the program in Problem 5 so that it also displays how much package A customers would save if they purchased package B or C, and how much money Package B customers would save if they purchases Package C. If there would be no savings, no message should be printed.

 Note:

 It is easier to first calculate the cost of all plans (A, B, and C) based on the number of minutes the user-entered. Then based on the plan user chose, compare, and calc. the difference among the plans. 
 */


// Header
#include <iostream>
#include <string>

using namespace std;

int calculate() {

    // Properties

    // Constants
    const float
    PACKAGE_A = 39.99,
    PACKAGE_B = 59.99,
    PACKAGE_C = 69.99,
    PACKAGE_A_MINUTES = 450,
    PACKAGE_B_MINUTES = 900,
    PACKAGE_A_ADDITIONAL_MINUTES = .45,
    PACKAGE_B_ADDITIONAL_MINUTES = .4;

    // Variables
    char userChoice, couldHaveSavedOne, couldHaveSavedTwo;
    float numberOfMinutes, totalChargesA, totalChargesB;

    // Ask the user what package they have.
    cout << "What package do you have? ";
    cin >> userChoice;

    // ask the user how many minutes they used.
    cout << "How many minutes did you use? ";
    cin >> numberOfMinutes;

    // Make sure user choice is lower.
    tolower(userChoice);

    // Message part one
    cout << "\nTotal monthly charges are \n";

    switch (userChoice) {
        case 'a':

            // Calculate the total charges
            totalChargesA =
            numberOfMinutes > PACKAGE_A_MINUTES
            ? PACKAGE_A + ((numberOfMinutes - PACKAGE_A_MINUTES) * PACKAGE_A_ADDITIONAL_MINUTES)
            : PACKAGE_A;
            
            totalChargesB =
            numberOfMinutes > PACKAGE_A_MINUTES
            ? PACKAGE_B + ((numberOfMinutes - PACKAGE_B_MINUTES) * PACKAGE_B_ADDITIONAL_MINUTES)
            : PACKAGE_B;

            // Message part two.
            cout << "$" << totalChargesB  << " dollars.\n";
            
            if (totalChargesA > totalChargesB) {
                couldHaveSavedOne = totalChargesA - totalChargesB;
                cout << "You could have saved $"
                     << couldHaveSavedOne << " with Package B." << endl;
                couldHaveSavedTwo = totalChargesA - PACKAGE_C;
                cout << "You could have saved $"
                     << couldHaveSavedTwo << " with Package C." << endl;
                
            }

            break;
        case 'b':

            // Calculate the total charges
            totalChargesB =
            numberOfMinutes > PACKAGE_A_MINUTES
            ? PACKAGE_B + ((numberOfMinutes - PACKAGE_B_MINUTES) * PACKAGE_B_ADDITIONAL_MINUTES)
            : PACKAGE_B;

            
            // Message part two.
            cout << "$" << totalChargesB  << " dollars.\n";
            
            if (totalChargesB > PACKAGE_C) {
                couldHaveSavedOne = totalChargesB - PACKAGE_C;
                cout << "You could have saved $"<< couldHaveSavedOne << " with Package C." << endl;
            }

            

            break;
        case 'c':

            // Message part two.
            cout << "$" << PACKAGE_C  << " dollars.\n";

            break;

        default:

            // The user didnt pick a valid option
            cout << "Not a valid option... please pick again.\n";

            // Reset total charges
            totalChargesA = totalChargesB = 0;
            numberOfMinutes = 0;

            // Restart the program.
            calculate();

            break;
    }




    // Used to exit the program
    return 0;
}

// The main method
int main() {

    // Program name
    cout << "Mobile Service monthly charge Calculator.\n";

    // Display the packages
    cout << "\nPackage A: For $39.99 per month 450\n"
    << "minutes are provided.\n"
    << "Additional minutes are $0.45 per minute.\n"
    << endl
    << "Package B: For $59.99 per month 900\n"
    << "minutes are provided.\n"
    << "Additional minutes are $0.40 per minute.\n"
    << endl
    << "Package C: For $69.99 per month unlimited\n"
    << "minutes provided.\n"
    << endl;

    // Call the calculate method.
    calculate();

    // Used to exit the program
    return 0;;

}
