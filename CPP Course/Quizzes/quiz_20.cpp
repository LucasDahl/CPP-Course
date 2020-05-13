//
//  quiz_20.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/13/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

#include <iostream>
using namespace std;


// Prototype methods
void getSales(double&, string);
void findHighest(double, double, double, double);

// Maid method
int main() {

    // Properties
    double salesNE, salesSE, salesNW, salesSW;

    // Get the sales for each divsion
    getSales(salesNE, "Northeast");
    getSales(salesSE, "Southeast");
    getSales(salesNW, "Northwest");
    getSales(salesSW, "Southwest");

    // Pass the data into the method to find the highest.
    findHighest(salesNE, salesSE, salesNW, salesSW);

    // Used to exit the program
    cout << endl;
    return 0;

}

// Functions

// Get the sales per division.
void getSales(double& salesFig, string diviName) {


    // Ask the user for the division sales
    cout << "Please enter the total sales for " << diviName << " division: ";
    cin >> salesFig;

    // Check for valid input.
    while (salesFig <= 0) {

        cout << "sales must be greater than zero... and a number" << endl;

        // Clear the input
        cin.clear();

        // Ask the user again
        cout << "Please enter the total sales for " << diviName << " division: ";
        cin >> salesFig;

    }

//    // Return the sales
//    return salesFig;

}

// Find the highest grossing division.
void findHighest(double divNE, double divSE, double divNW , double divSW) {

    // Properties
    double divSales[4] = {divNE, divSE, divNW, divSW}, highestDiv;
    string topDiv;

    
    highestDiv = divSales[0];

    // Find the highest grossing division.
    for (int i = 0; i < 4; i++) {

        if(highestDiv < divSales[i]) {

            // Set the value for the highest div
            highestDiv = divSales[i];

        }

    }

    // Get the name of the highest grossing div after the sales amount is determined.
    if (highestDiv == divNE) {

        topDiv = "Northeast";

    } else if (highestDiv == divSE) {

        topDiv = "Southeast";

    } else if (highestDiv == divNW) {

        topDiv = "Northwest";

    } else if (highestDiv == divSW) {

        topDiv = "Southwest";

    } else {

        // There was an error...
        topDiv = "Secret";

    }

    // Let the user know what division is the top grossing and their sales.
    cout << "\nThe " << topDiv << " division is the top grossing, with $" << highestDiv << " in sales!" << endl;


}

