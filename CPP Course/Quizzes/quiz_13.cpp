//
//  quiz_13.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 4/29/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// This program is used to show a user projected membership fees
// over the next 6 years.

//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//    
//    // Properties
//    float membershipFee = 2500.00, sumTotal = 0.00;
//    string line = "------------------------\n";
//    
//    // Message to the customer to let them know what program they are using.
//    cout << setw(6) << "Membership Annual Cost" << endl;
//    cout << "year\t\t\tcost($)" << endl;
//    cout << line;
//    
//    // Add 4% for the next 6 years to the cost
//    for (int i = 0; i < 7; i++) {
//        
//        // Format the output
//        cout << setprecision(2) << fixed;
//        
//        // Display the year and teh membership fee to the user.
//        cout << "202" << i << "\t\t\t" << membershipFee << endl;
//        
//        // Add to the total.
//        sumTotal += membershipFee;
//        
//        // Add 4% to the cost of the membership fee.
//        membershipFee *= 1.04;
//        
//    }
//    
//    // Let the user know the total.
//    cout << line;
//    cout << "\t\t   sum $" << sumTotal << endl;
//    
//    // Used to exit the program
//    return 0;
//    
//}
