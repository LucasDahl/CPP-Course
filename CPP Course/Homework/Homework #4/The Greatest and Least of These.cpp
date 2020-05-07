//
//  The Greatest and Least of These.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/6/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: Task -
/*
 Write a program with a loop that lets the user enter a series of integers. The user should enter -99 to signal the end of the series. After all the numbers have been entered, the program should display the largest and smallest numbers entered.
 */

#include <iostream>

using namespace std;

int main() {
    
    // Properties
    float min, max, num;
    
    cout << "Please pick a number, or press 99 to finish. ";
    cin >> num;
    
    // Set the min and max to the first number picked.
    max = min = num;
    
    while (num != 99) {
        
        // check for min and max nums
        if (num < min) {
            
            min = num;
            
        } else if (num > max) {
            
            max = num;
            
        }
        
        cout << "Please pick a number, or press 99 to finish. ";
        cin >> num;
        
    }
    
    // Print out the max and min num
    cout << "Greatest number entered is " << max << endl;
    cout << "Smallest number entered is " << min << endl;
    
    // Used to exit the program.
    cout << endl;
    return 0;
    
}
