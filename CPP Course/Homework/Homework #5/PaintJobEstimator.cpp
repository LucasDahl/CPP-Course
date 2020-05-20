//
//  PaintJobEstimator.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/14/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Task
/*
 A painting company has determined that for every 110 square feet of wall space, 1 gallon of paint and 8 hours of labor will be required. The company charges $25.00 per hour for labor.
 
 Write a modular program (a program that is divided into functions that perform each major task) that allows the user to enter
 
 the number of rooms that are to be painted and
 the price of the paint per gallon.
 It should also ask for the square feet of wall space in each room. (The wall space for a standard room is about 340 square feet.)
 It should then display the following data:
 
 The number of gallons of paint required
 The hours of labor required
 The cost of the paint
 The labor charges
 The total cost of the paint job.
 Input validation: Do not accept:
 
 A value less than 1 for the number of rooms
 A value less than $10.00 for the price of paint
 A negative value for square footage of wall space
 */

// 340 min per room

// Header
#include <iostream>
using namespace std;

// Prototype functions.
double inputValidate(double, double);
void getInfo(double&, double&, double&);
void calcDisplay(double, double, double);

// Main method.
int main() {
    
    // Properties
    double numOfRooms, pricePerGal, sqftToPaint = 0;
    
    // Get all the info
    getInfo(numOfRooms, pricePerGal, sqftToPaint);
    
    // Display rhe data after calculation
    calcDisplay(numOfRooms, pricePerGal, sqftToPaint);
    
    // Used to exit the program.
    cout << endl;
    return 0;
    
}

// Gather all the info
void getInfo(double& numOfRooms, double& pricePerGal, double& sqftToPaint) {
    
    // Get number of rooms to be painted
    cout << "Number of rooms to be painted: ";
    
    // Validate the input
    numOfRooms = inputValidate(numOfRooms, 1);
    
    // Ask for the square ft for each room.
    for (int i = 0; i < numOfRooms; i++) {
        
        // Get sqft of wall space per room
        cout << "Sq. Ft. of wall space to be painted " << "in room " << (i + 1) << ": ";
        
        
        // Check for valid input
        sqftToPaint += inputValidate(sqftToPaint, 0);
        
        
        
        // Room did not mean the min
        while (sqftToPaint < 340) {
            
            cout << "Room must be atleast 340 sq ft.\n";
            
            // Get sqft of wall space per room
            cout << "Sq. Ft. of wall space to be painted " << "in room " << (i + 1) << ": ";
            
            
            // Check for valid input
            sqftToPaint += inputValidate(sqftToPaint, 0);
            
        }
        
        
    }
    
    // Get price of paint per gallon
    cout << "Price of paint per gallon: $";
    
    // Check for valid input
    pricePerGal = inputValidate(pricePerGal, 10.00);
    
}

// Check for valid input.
double inputValidate(double number, double limitNumber) {
    
    // Make sure the input is valid
    while(!(cin >> number) || number < limitNumber) {
        
        cout << "Error. Number must not be" << " " << limitNumber << " or greater: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
    }
    
    // Return the number
    return number;
    
}

// Calculate and display the data
void calcDisplay(double numOfRooms, double pricePerGal, double sqftToPaint) {
    
    // Properties
    double galsOfPaintReq, laborRequired, costOfPaint, laborCharges, totalCost;
    
    // Calculate
    galsOfPaintReq = sqftToPaint / 110.0;
    laborRequired = galsOfPaintReq * 8.0;
    costOfPaint = pricePerGal * galsOfPaintReq;
    laborCharges = laborRequired * 25.00;
    totalCost = laborCharges + costOfPaint;
    
    // Display:
    cout << "Total SqFt to paint  : " << sqftToPaint << endl;
    
    cout << "Price per gallon     : " << pricePerGal << endl;
    
    // The number of gallons of paint required
    cout << "Gallons required     : " << galsOfPaintReq << endl;
    
    // The hours of labor required
    cout << "Hours required       : " << laborRequired << endl;
    
    // The cost of the paint
    cout << "Cost of paint        :$" << costOfPaint << endl;
    
    // The labor charges
    cout << "Labor charges        :$" << laborCharges << endl;
    
    // The total cost of the paint job
    cout << "Total cost of job    :$" << totalCost << endl;
    
}
