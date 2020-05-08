//
//  quiz_18.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/8/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// This program is used to get both roots usuing the quadratic formula.

// Header
#include <iostream>
#include <cmath>
using namespace std;

// Prototype functions.
void roots(float, float, float);

// Main method
int main() {
    
    // Properties
    float a, b, c;
    
    // Ask the user for a, b, and c.
    cout << "Please enter numbers for a, b, and c(separated by spaces): ";
    cin >> a >> b >> c;
    
    // Get the roots
    roots(a, b, c);
    
    // Used to exit the program
    return 0;
    
}

// Functions

void roots(float a, float b, float c) {
    
    // Properties
    float x1, x2, x;
    
    // Make calculations to call later
    x = (b * b) - (4.0 * a * c);
    
    
    if (x > 0) {
        
        // Run the calculations
        x1 = (-b + sqrt(x)) / (2.0 * a);
        x2 = (-b - sqrt(x)) / (2.0 * a);
        
        // Let the user know the roots
        cout << "Roots are: " << x1 << " and: "<< x2 << endl;
        
    } else if (x == 0) {
        
        // Run the calculations
        x1 = -b / (2.0 * a);
        x2 = x1;
        
        // Let the user know the roots
        cout << "Roots are: " << x1 << " and: " << x2 << endl;
        
    } else {
        
        // No real root.
        cout << "Roots are imaginery." << endl;
        
    }
}

