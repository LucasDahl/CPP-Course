//
//  quiz_14.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/1/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// This program is used make a digital clock with nested loops.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    
    // Fromat the output.
    cout << fixed << right;
    cout.fill('0');
    
    // Loop for hours
    for(int hours = 0; hours < 24; hours ++) {
        
        // Loop for minutes.
        for(int minutes = 0; minutes < 60; minutes ++) {
            
            // Loop for seconds.
            for(int seconds = 0; seconds < 60; seconds ++) {
                
                cout << setw(2) << hours << ":";
                cout << setw(2) << minutes << ":";
                cout << setw(2) << seconds << endl;
                
            }
        }
    }
    
    // Used to exit the program
    return 0;
    
}
