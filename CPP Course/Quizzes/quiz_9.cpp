//
//  quiz_9.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 4/21/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// This program is to allow a user to mix primary colors and see the result.

// Header
#include <iostream>

using namespace std;

int main() {
    
    // Properties
    char answer1, answer2, color1, color2;
    
    // Gather the data
    cout << "Please enter teo primary colors. "
    << " r for red; b for blue; y for yellow. No need for spaces.\n";
    cin >> answer1 >> answer2;
    
    
    // Convert the answers to lowercase so that if statment doesnt need to cover as many cases.
    color1 = tolower(answer1);
    color2 = tolower(answer2);
    
    // Present the correct color based on the users answers.
    if ((color1 == 'r' && color2 == 'b') || (color1 == 'b' && color2 == 'r')) {
        cout << "Red and blue makes purple!\n";
    } else if ((color1 == 'r' && color2 == 'y') || (color1 == 'y' && color2 == 'r')) {
        cout << "Red and yellow makes yellow!\n";
    } else if ((color1 == 'b' && color2 == 'y') || (color1 == 'y' && color2 == 'b')) {
        cout << "Blue and yellow make green!\n";
    } else if (color1 == color2) {
        cout << "Mixing the same two colors will create the same color...\n";
    } else {
        cout << "You entered " << color1 << " and " << color2 << " not r, b, or y..." << endl;
    }
    
    // Used to exit the program
    return 0;
    
}
