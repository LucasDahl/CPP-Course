//
//  Star Display.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/6/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// This program is used to make and display a star tree.

#include <iostream>
using namespace std;

int main() {
    
    // Properties
    int space, rows = 6;

     // Create the star display
    for(int i = 1, x = 0; i <= rows; ++i, x = 0) {
        
        // Create the spacing
        for(space = 1; space <= rows-i; ++space) {
            cout <<"  ";
        }

       // Place the star.
        while(x != 2 * i-1) {
            cout << "* ";
            ++x;
        }
        cout << endl;
    }
    
    
    // Used to end the program
    cout << endl;
    return 0;
    
}
