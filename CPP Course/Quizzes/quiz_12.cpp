//
//  quiz_12.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 4/28/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//
int employeeID(int id, int emp) {
    
    // Properties
    int tempNum, count = 0;
    
    
        // Store to temporary variable.
        tempNum = id;
        
        while(tempNum != 0) {
    
            // Increment counter
            count++;
    
            // Remove last digit of 'temp'
            tempNum /= 10;
        }
    
    
    // Make sure the ID is not zero.
    if (count == 0) {
        return 0;
    }
    
    
    if (count <= 2 || count >= 4) {
        cout << "Employee ID's only range from 100 - 999.\n";
        
        cout << "Enter the employee # " << emp;
        cout << "\tID = ";
        cin >> id;
        
        employeeID(id, emp);
    }
    
    
    return id;
}

// Main function
int main() {
    
    // Properties
    int id, emp = 1;
    float grossPay, stateTax, fedTax, totalStateTax = 0.0, totalFedTax = 0.0, totalgrossP = 0.0;
    
    // Instructions for the user
    cout << "Please enter the info for each employee,\n enter zero for the employee number to see the results.\n";
    
    // Ask for the first employee ID
    cout << "Enter the employee # " << emp;
    cout << "\tID = ";
    cin >> id;
    
    employeeID(id, emp);
    
    // Keep asking for employee info until the user is done(by them entering zero).
    while(id != 0) {
        
        // Get the gross pay
        cout << "\t Gross pay = ";
        cin >> grossPay;
        
        if (grossPay <= 0) {
            
            cout << "Need a positive number for gross pay\n.";
            continue;
            
        } else {
            
            // Add to the total gross pay
            totalgrossP += grossPay;
            
        }
        
        // Get fed tax
        cout << "\t Federal Tax = ";
        cin >> fedTax;
        
        // Make sure fed tax is not more than gross pay and not zero.
        if (fedTax >= grossPay) {
            
            cout << "Federal tax must be less than gross pay.\n";
            continue;
            
        } else if (fedTax <= 0) {
            
            cout << "Need a positive number for gross pay\n.";
            continue;
            
        } else {
            
            // Add to the total fed tax.
           totalFedTax += fedTax;
        }
        
  
        // Get the state tax.
        cout << "\t State Tax = ";
        cin >> stateTax;
        
        // Make sure state tax is not more than gross pay and not zero.
        if (stateTax >= grossPay) {
            
            cout << "State tax must be less than gross pay.\n";
            continue;
            
        } else if (stateTax <= 0) {
            
            cout << "Need a positive number for gross pay\n.";
            continue;
            
        } else {
            
            // Add to the total state tax.
           totalStateTax += stateTax;
        }
        
        if ((stateTax + fedTax) > grossPay) {
            
            // To much taxes
            cout << "allthough it may feel like you pay more in taxes,\nyour employee cannot pay more in taxes\than they make.\n";
            continue;
            
        } else {
            
            // Move to the next employee
            emp ++;
            
        }
        
        // Start with the next employee.
        
        cout << "Enter the employee # " << emp;
        cout << "\tID = ";
        cin >> id;
        employeeID(id, emp);
    
    }
    
    // Format
    cout << setprecision(2) << fixed;
    cout << endl;
    
    // Display the data
    cout << "The total gross pay is $" << totalgrossP << "." << endl;
    cout << "The total federal tax is $" << totalFedTax << "." << endl;
    cout << "The total state tax is $" << totalStateTax << "." << endl;
    
    // Used to exit the program
    return 0;
    
}
