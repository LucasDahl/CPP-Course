//
//  Question1.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/23/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: Task
/*
 The Middletown Wholesale Copper Wire Company sells spools of copper wiring for $100 each and ships them for $10 a piece. Write a program that displays the status of an order.
 
 It should use two functions in addition to function main().
 
 1) The first function asks for the following data and stores the input values in reference parameters.
 
 The number of spools ordered.
 The number of spools in stock.
 Any special shipping and handling charges.
 The shipping and handling is normally $10 per spool. If there are special charges, the program should ask the special charge per spool.
 
 
 
 2) The second function receives the gathered data from the first function as arguments and the shipping parameter has the default argument 10.00.
 
 The function displays the following information:
 
 The number of ordered spools ready to ship from current stock.
 The number of ordered spools on the backorder (if the number ordered is greater than what is in stock).
 The total selling price of the portion ready to ship (the number of spools ready to ship times $100).
 Total shipping and handling charges on the portion ready to ship.
 Total of the order (selling price + shipping and handling) ready to ship.
 Input Validation:
 
 Do not accept numbers less than 1 for spools ordered.
 Do not accept a number less than 0 for spools in stock or for shipping and handling charges.
 */

//// Header
//#include <iostream>
//#include <string>
//using namespace std;
//
//// Prototype functions
//void getInfo(int&, int&, double&);
//void displayData(int, int, double);
//
//// Main method
//int main() {
//    
//    // Properties
//    int order, stock;
//    double charge;
//    
//    // Ask for the data.
//    getInfo(order, stock, charge);
//    displayData(order, stock, charge);
//    
//    // Display the data.
//    
//    
//    // Used to exit theprogram.
//    cout << endl;
//    return 0;
//    
//}
//
//// Function to get all the info from the user.
//void getInfo(int& order, int& stock, double& specialCharge = 10) {
//    
//    // Properties
//    char answer;
//    double charge;
//    bool flag = false;
//    
//    
//    // ASk for the number of spools ordered
//    do {
//        
//        cout << "How many spools is the custoemr ordering? ";
//        cin >> order;
//        
//        
//        // User did not listen
//        if (order <= 0) {
//            
//            cout << "You must enter a number great than 0..." << endl;
//            
//            // Clear the input stream.
//            cin.clear();
//            cin.ignore();
//        }
//        
//        
//    } while (order < 1);
//    
//    // Ask for the current stock of spools.
//    do {
//        
//        cout << "How many sppols in stock? ";
//        cin >> stock;
//        
//        // User did not listen
//        if (stock < 0) {
//            
//            cout << "You must enter a number great than -1..." << endl;
//            
//            // Clear the input stream.
//            cin.clear();
//            cin.ignore();
//            
//        }
//        
//    } while ( stock < 0);
//    
//    // Ask for special charges.
//    do {
//        
//        cout << "Are there special charges(y or n)? ";
//        cin >> answer;
//        
//        // User did not listen
//        if (tolower(answer) == 'n' || tolower(answer) == 'y') {
//            
//            flag = true;
//            
//        } else {
//            
//            cout << "You must enter y or n..." << endl;
//            cin.clear();
//            
//        }
//        
//    } while (flag != true);
//    
//    if (tolower(answer) == 'y') {
//        
//        
//        cout << "How much are any special shipping and handling charges per roll(Dollar value)? ";
//        cin >> charge;
//        
//        specialCharge = charge * order;
//        
//        
//    } else if (tolower(answer) == 'n') {
//        
//        specialCharge = 10.0 * order;
//        
//    }
//    
//    
//    cout << endl;
//    
//}
//
//// Display status for the order.
//void displayData(int spools, int stock, double charges) {
//    
//    // Properties
//    double subTotal;
//    
//    cout << "Number of spools ready to ship: " << stock << endl;
//    
//    if(spools > stock) {
//        
//        cout << "Number of spools backorder: " << spools - stock << endl;
//    }
//        //calculating subtotal
//        subTotal = spools * 100;
//        cout << "Subtotal of portion ready to ship: $" << subTotal << endl;
//        cout << "Total shipping charges: $" << charges * stock << endl;
//        cout << "Total: " << subTotal + charges << endl;
//    
//}
