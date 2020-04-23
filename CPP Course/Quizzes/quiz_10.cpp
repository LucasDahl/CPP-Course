//
//  quiz_10.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 4/22/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//


// This program is used to calculate the geometry fof a rectangle based off a length and width given by the user.

// Header
#include <iostream>

using namespace std;

// ask the user what they need to calculate and calculate it.
int calculate() {
    
    // Properties
    char answer;
    float length, width, area, perimeter;
    int userChoice;
    string units,
    message = "Please enter a length and width\n" "(seperate with a space) and units: ";
    
    // Aak the user what they need calculated
     // Ask the user what they want to calculate
       cout << "Rectangle Geometry Calculator\n"
       << "Please pick a number from the selction below and hit enter/return.\n"
       << "1. Calculate the are area.\n"
       << "2. Calculate the perimeter.\n"
       << "3. Calculate both area and perimeter.\n"
       << "4. Quit.\n";
       
       cin >> userChoice;
    
    // create a space for the results to be easier to read
    cout << endl;
    
    // Switch on the user choice to run the correct program.
    switch (userChoice) {
        case 1:
            
            // Ask for the length and width
            cout << message;
            cin >> length >> width >> units;
            
            // Calulate the area
            area = length * width;
            
            // Let the user know the area
            cout << "If the length is " << length << " " << units << " and the with is "
            <<  width << " " << units << " the area is " << area << " " << units
            << " squared." << endl;
            
            break;
            
        case 2:
            
            // Ask for the length and width
            cout << message;
            cin >> length >> width >> units;
            
            // Calulate the perimeter
            perimeter = (length * 2) + (width * 2);
            
            // Let the user know the area
            cout << "If the length is " << length << " " << units << " and the with is "
            <<  width << " " << units << " the perimeter is " << perimeter << " " << units << "." << endl;
            
            break;
            
        case 3:
            
            // Ask for the length and width
            cout << message;
            cin >> length >> width >> units;
            
            // Calulate the area and perimeter
            area = length * width;
            perimeter = (length * 2) + (width * 2);
            
            // Let the user know the area and perimeter
            cout << "If the length is " << length << " " << units << " and the with is "
            <<  width << " " << units << " the perimeter is " << perimeter << " " << units << " and the area is "
            << area << " " << units << " squared."<< endl;
            
            break;
            
        case 4:
            
            // The user did not want to calculate anything.
            cout << "Goodbye\n";
            
            break;
            
        default:
            
            // The user picked an invalid option.
            cout << "Not a valid option...";
            
            // run the switch again
            calculate();
            
            break;
    }
    
    
    // Ask the user if they need to calculate anything else.
    cout << "\nDo you need to calculate anything else? (y for yes or n for n) ";
    cin >> answer;
    
    if (tolower(answer) == 'y') {
        calculate();
    } else if (tolower(answer) == 'n') {
        
        cout << "Thanks, goodbye!\n";
        
    } else {
        
        cout << "I guess you dont want to listen...\n";
        
    }
    
    // Used to exit the method
    return 0;
}

// The main function
int main() {
    

    // Run the method
    calculate();
    
    // Used to exit the program
    return 0;
    
}
