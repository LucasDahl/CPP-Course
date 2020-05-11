////
////  bankCharges.cpp
////  CPP Course
////
////  Created by Lucas Dahl on 4/23/20.
////  Copyright © 2020 Lucas Dahl. All rights reserved.
////
//
//// MARK: - Task
//
///*
// A bank charges $10 per month plus the following check fees for a commercial checking account:
// 
// $.10 each for fewer than 20 checks
// 
// $.08 each for 20 – 39 checks
// 
// $.06 each for 40 -59 checks
// 
// $.04 each for 60 or more checks
// 
// The bank also charges an extra $15 if the balance of the account falls below $400 (before any check fees are applied). Write a program that asks for the beginning balance and the number of checks written. Compute and display the bank’s service fees for the month.
// 
// Input Validation:
// 
// Do not accept a negative value for the number of checks written.
// If a negative value is given for the beginning balance, display an urgent message indicating the account is overdrawn.
// */
//
//// This program is let the user what the banks service charges are for the month.
//
//// Header
//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//    
//    // Properties
//    float beginningBalance, monthlyCharge = 0.0; // Set to 0.0 to silence warnings
//    int numberOfChecks;
//    
//    // Ask the user for the number of checks and the staring balance of the account.
//    cout << "What is the starting balance of your account? ";
//    cin >> beginningBalance;
//    cout << "How many checks have you written? ";
//    cin >> numberOfChecks;
//    
//    // Check if the balance is below $400, if so add $15 charge.
//    if (beginningBalance < 400) {
//        
//        monthlyCharge += 15;
//        
//    }
//    
//    // format the data
//    if (numberOfChecks < 0) {
//        cout<< "Number of checks written must be\n" << "0 or more.\n";
//        cout << "Please rerun the program and try again.\n";
//    } else if (beginningBalance < 0) {
//        
//        cout << "Your account is over drawn..." << endl;
//        cout << "Please deposit money and try again." << endl;
//        
//    } else {
//        cout << setprecision(2) << fixed;
//        
//        if (numberOfChecks >= 0 && numberOfChecks < 20) {
//            
//            monthlyCharge += (numberOfChecks * .1);
//            
//        } else if (numberOfChecks >= 20 && numberOfChecks <= 39) {
//            
//            monthlyCharge += (numberOfChecks * .08);
//            
//        } else if (numberOfChecks >= 40 && numberOfChecks <= 59) {
//            
//            monthlyCharge += (numberOfChecks * .06);
//            
//        } else if (numberOfChecks >= 60) {
//            
//            monthlyCharge += (numberOfChecks * .04);
//            
//        }
//        
//        
//        cout << "Bank's service fees for the month are: $";
//        cout << monthlyCharge << endl;
//        
//    }
//    
//    
//    // Used to exit the program
//    return 0;
//    
//}
