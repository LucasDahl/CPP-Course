//
//  ocean levels.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/5/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Task
/*
 (5 pt) Ocean levels
 Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays a table showing the number of millimeters that the ocean will have risen each year for the next 25 years.
 */

// This sprogram is used to show how much the water level will rise in the next 25 years.
//
//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//
//    // Properties
//    float waterRisen = 1.5;
//    int year = 2020;
//    string line = "------------------------\n";
//
//    // Message to the customer to let them know what program they are using.
//    cout << setw(6) << "Future Water levels" << endl;
//    cout << "year\t\tMillimeters" << endl;
//    cout << line;
//
//    // Add 4% for the next 6 years to the cost
//    for (int i = 0; i < 26; i++) {
//
//        // Format the output
//        cout << setprecision(2) << fixed;
//
//        // Display the year and teh membership fee to the user.
//        cout << year << "\t\t\t" << waterRisen << "mm" << endl;
//        
//        // Add 1.5 mm to the total level risen, and update the year.
//        waterRisen += 1.5;
//        year ++;
//
//    }
//
//    // Used for spacing for the end line
//    cout << endl;
//
//    // Used to exit the program
//    return 0;
//
//}
