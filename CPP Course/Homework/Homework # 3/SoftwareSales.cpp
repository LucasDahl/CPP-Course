//
//  SoftwareSales.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 4/23/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Task

/*
 A software company sells a package that retails for $99. Quantity discounts are given according to the following table.

 Quantity

 Discount

 10-19 20%
 20-49 30%
 50-99 40%
 100 or more 50%
 
 Write a program that asks for the number of units sold and computes and displays the total cost of the purchase.
 Input validation: Make sure the number of units is greater than 0.
 */

// This program is used to caluclate sales fora software company

// Header
//#include <iostream>
//
//using namespace std;
//
//// Main method for the program
//int main() {
//    
//    // Properties
//    
//    // Constants
//    const double unitPrice = 99.0;
//    
//    // variables
//    int unitsSold;
//    bool flag;
//    string message = "when you buy ",
//    priceMessage = " units is ";
//    
//    // Ask the user how mant units they want/need, keep asking until an int is given.
//    do {
//        
//        cout << "Please enter the number of packages you want to buy"
//        << "\n(must be in complete packages, must also be more than zero.)? ";
//        cin >> unitsSold;
//        
//        // Check if the user entered an int
//        if (unitsSold >= 1) {
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
//    } while (flag != true);
//    
//    
//    // Apply the correct qty disscount and let the user know the total.
//    switch (unitsSold) {
//        case 1 ... 9:
//            cout << message << unitsSold << priceMessage << "$" << (unitsSold * unitPrice) << "." << endl;
//            break;
//        case 10 ... 19:
//            cout << "\nYour price with a 20% disscount...\n";
//            cout << message << unitsSold << priceMessage << "$" << ((unitsSold * unitPrice) *  .8) << "." << endl;
//            break;
//        case 20 ... 49:
//            cout << "\nYour price with a 30% disscount...\n";
//            cout << message << unitsSold << priceMessage << "$" << ((unitsSold * unitPrice) *  .7) << "." << endl;
//            break;
//        case 50 ... 99:
//            cout << "\nYour price with a 40% disscount...\n";
//            cout << message << unitsSold << priceMessage << "$" << ((unitsSold * unitPrice) *  .6) << "." << endl;
//            break;
//        default: // this will catch anything 100 +.
//            cout << "\nYour price with a 50% disscount...\n";
//            cout << message << unitsSold << priceMessage << "$" << ((unitsSold * unitPrice) *  .5) << "." << endl;
//            break;
//    }
//    
//    // Used to exit the program
//    return 0;
//    
//}
