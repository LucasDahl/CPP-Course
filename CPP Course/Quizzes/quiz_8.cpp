//
//  quiz_8.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 4/20/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Taks
/*
 Write a program that calculates and displays a person’s body mass index (BMI). A person’s BMI is calculated with the following formula: BMI = weight x 703/height^2
 */

// This program is to calulate and display a persons BMI.

// Header
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Method to convert weight and heigh into BMI.
// This method is only needed if the program is more complex,
// you could simply use the formula in the main method. I wrote this
// method for extra practice.
float bmiConvert(float weight, float height) {
    
    // Properties
    float bmi;
    
    // Convert the given paramters
    bmi = weight * (703/pow(height, 2));
    
    // Return the bmi property
    return bmi;
    
}

// Main method used to collect and display data.
int main() {
    
    // Properties
    float weight, height, bmi;
    
    // Great the user.
    cout << setw(6) << " " << "Welcome to the BMI Calaculator\n\n";
    
    // Gather data from the user
    cout << "Enter weight(in pounds): ";
    cin >> weight;
    cout << "Enter height(in inches, for example  5' 7\" = 67): ";
    cin >> height;
    
    // Convert the given data and store it into bmi property.
    bmi = bmiConvert(weight, height);
    
    // Display an accurate message based on the BMI calculated.
    cout << "BMI = " << bmi << endl;
    
    if (bmi >= 18.5 && bmi <= 25) {
        cout << "Your weight is optimal." << endl;
    } else if (bmi >= 0 && bmi <= 18.5) {
        cout << "You are considered underweight." << endl;
    } else if (bmi >= 25) {
        cout << "Your are considered overweight." << endl;
    }
    
    // Used to exit the program
    return 0;
    
}

