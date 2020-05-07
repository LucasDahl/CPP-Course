//
//  mobileServiceProviderPt1.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 4/23/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Task

/*
 A mobile phone service provider has three different subscription packages for its customers:
 
 Package A: For $39.99 per month 450 minutes are provided. Additional minutes are $0.45 per minute.
 
 Package B: For $59.99 per month 900 minutes are provided. Additional minutes are $0.40 per minute.
 
 Package C: For $69.99 per month unlimited minutes provided.
 
 Write a program that first asks which package the customer has purchased and how many minutes were used. Then calculate the customer’s monthly bill and display the total amount due.
 
 Input Validation: Be sure the customer only selects packages A, B, or C.
 */

// Header
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int calculate() {
//    
//    // Properties
//    
//    // Constants
//    const float
//    PACKAGE_A = 39.99,
//    PACKAGE_B = 59.99,
//    PACKAGE_C = 69.99,
//    PACKAGE_A_MINUTES = 450,
//    PACKAGE_B_MINUTES = 900,
//    PACKAGE_A_ADDITIONAL_MINUTES = .45,
//    PACKAGE_B_ADDITIONAL_MINUTES = .4;
//    
//    // Variables
//    char userChoice;
//    float numberOfMinutes, totalCharges;
//  
//    // Ask the user what package they have.
//    cout << "What package do you have? ";
//    cin >> userChoice;
//    
//    // ask the user how many minutes they used.
//    cout << "How many minutes did you use? ";
//    cin >> numberOfMinutes;
//    
//    // Make sure user choice is lower.
//    tolower(userChoice);
//    
//    // Message part one
//    cout << "Total monthly charges are \n";
//    
//    switch (userChoice) {
//        case 'a':
//            
//            // Calculate the total charges
//            totalCharges =
//            numberOfMinutes > PACKAGE_A_MINUTES
//            ? PACKAGE_A + ((numberOfMinutes - PACKAGE_A_MINUTES) * PACKAGE_A_ADDITIONAL_MINUTES)
//            : PACKAGE_A;
//            
//            // Message part two.
//            cout << "$" << totalCharges  << " dollars.\n";
//            
//            break;
//        case 'b':
//            
//            // Calculate the total charges
//            totalCharges =
//            numberOfMinutes > PACKAGE_A_MINUTES
//            ? PACKAGE_B + ((numberOfMinutes - PACKAGE_B_MINUTES) * PACKAGE_B_ADDITIONAL_MINUTES)
//            : PACKAGE_B;
//            
//            // Message part two.
//            cout << "$" << totalCharges  << " dollars.\n";
//            
//            break;
//        case 'c':
//            
//            // Set the property.
//            totalCharges = PACKAGE_C;
//            
//            // Message part two.
//            cout << "$" << totalCharges  << " dollars.\n";
//            
//            break;
//            
//        default:
//            
//            // The user didnt pick a valid option
//            cout << "Not a valid option... pick again\n";
//            
//            // Reset total charges
//            totalCharges = 0;
//            numberOfMinutes = 0;
//            
//            // Restart the program.
//            calculate();
//            
//            break;
//    }
//    
//    
//    
//    
//    // Used to exit the program
//    return 0;
//}
//
//// The main method
//int main() {
//    
//    // Program name
//    cout << "Mobile Service monthly charge Calculator.\n";
//    
//    // Display the packages
//    cout << "\nPackage A: For $39.99 per month 450\n"
//    << "minutes are provided.\n"
//    << "Additional minutes are $0.45 per minute.\n"
//    << endl
//    << "Package B: For $59.99 per month 900\n"
//    << "minutes are provided.\n"
//    << "Additional minutes are $0.40 per minute.\n"
//    << endl
//    << "Package C: For $69.99 per month unlimited\n"
//    << "minutes provided.\n"
//    << endl;
//    
//    // Call the calculate method.
//    calculate();
//    
//    // Used to exit the program
//    return 0;;
//    
//}
