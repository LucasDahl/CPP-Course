//
//  Square display.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/6/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Task
/*
 Write a program that asks the user for a positive integer no greater than 15. The program should then display a square on the screen using the character ‘X’. The number entered by the user will be the length of each side of the square. For example, if the user enters 5, the program should display the following:

 XXXXX

 XXXXX

 XXXXX

 XXXXX

 XXXXX
 */

// This program is used to make a square if X's based off a given number from the user.

//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//    // Properties
//    int num = 0;
//    bool flag = false;
//
//    // Ask the user for a number between 1 and 15.
//    while (flag != true) {
//
//        cout << "Please enter a number between 1 and 15: ";
//        cin >> num;
//
//        if ((num < 1) || (num >= 16)) {
//
//            // User picked an invalid option
//            cout << "Invlaid number, try again...\n";
//
//
//        } else {
//
//            // User picked a valid option
//            flag = true;
//
//        }
//
//    }
//
//
//    // Loop three the number given by the user to display a square.
//    for(int i = 0; i < num; i++) {
//
//        // Make the column
//        cout << endl;
//
//        // Make the row
//        for(int i = 0; i < num; i++) {
//            cout << 'x';
//        }
//
//    }
//
//    // Used to end the program
//    cout << endl << endl;
//    return 0;
//
//}
