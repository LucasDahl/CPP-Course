//
//  geometryCalculator.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 4/23/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Task

/*
 Write a program that displays the following menu:

 Geometry Calculator

 Calculate the Area of a Circle
 Calculate the Area of a Rectangle
 Calculate the Area of a Triangle
 Quit
 Enter your choice (1-4):

 If the user enters 1, the program should ask for the radius of the circle and then display its area. Use the following formula:

 area = πr2

 Use 3.14159 for π and the radius of the circle for r.

 If the user enters 2, the program should ask for the length and width of the rectangle and then display the rectangle’s area. Use the following formula:

 area = length * width

 If the user enters 3 the program should ask for the length of the triangle’s base and its height, and then display its area.  Use the following formula:

 area = base * height * 0.5

 If the user enters 4, the program should end.

 Input Validation:

 Display an error message if the user enters a number outside the range of 1 through 4 when selecting an item from the menu.
 Do not accept negative values for the dimensions.
 */

// Header
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//// ask the user what they need to calculate and calculate it.
//int calculate() {
//
//    // Properties
//    
//    // Constants
//    const float PI = 3.14159;
//    
//    // VAriables
//    char answer;
//    float length, width, area, radius, height, base;
//    int userChoice;
//    string units,
//    message = "Please enter a length and width\n" "(seperate with a space) and units: ";
//
//    // Aak the user what they need calculated
//    // Ask the user what they want to calculate
//    cout << "Rectangle Geometry Calculator\n"
//    << "Please pick a number from the selction below and hit enter/return.\n"
//    << "1. Calculate the area of a Circle.\n"
//    << "2. Calculate the area of a Rectangle.\n"
//    << "3. Calculate the area of a Triangle.\n"
//    << "4. Quit.\n";
//    cin >> userChoice;
//
//    // create a space for the results to be easier to read
//    cout << endl;
//
//    // Switch on the user choice to run the correct program.
//    switch (userChoice) {
//        case 1:
//
//            cout << "what is the radius of the circle? ";
//            cin >> radius;
//            cout << "And the units? ";
//            cin >> units;
//            
//            // Make sure the radius is not negative.
//            if (radius < 0) {
//                cout << "sorry you must have positive numbers to calculate area.\n";
//                
//                // break out of the program
//                break;
//            }
//            
//            // Calculate the area
//            area = PI * pow(radius, 2);
//            
//            // Let the user know the area
//            cout << "If the radius is " << radius << " the area of the circle is \n"
//            << area << " " << units << " squared." << endl;
//
//            break;
//
//        case 2:
//
//            // Ask for the length and width
//            cout << message;
//            cin >> length >> width >> units;
//            
//            // Check if at least one dim is negative.
//            if (length < 0 || width < 0) {
//                cout << "sorry you must have positive numbers to calculate area.\n";
//                
//                // break out of the program
//                break;
//            }
//
//            // Calulate the area
//            area = length * width;
//
//            // Let the user know the area
//            cout << "If the length is " << length << " " << units << " and the with is "
//            <<  width << " " << units << " the area is " << area << " " << units
//            << " squared." << endl;
//
//            break;
//
//        case 3:
//
//            // Ask for the base and the height.
//            cout << "Please enter a base and height\n" "(seperate with a space) and units: ";
//            cin >> base >> height >> units;
//            
//            // Check if at least one dim is negative.
//            if (base < 0 || height < 0) {
//                cout << "sorry you must have positive numbers to calculate area.\n";
//                
//                // break out of the program
//                break;
//            }
//            
//            // Calculate the area
//            area = (base * height) * 0.5;
//            
//            // Let the user know the area
//            cout << "If the base is " << base << " " << units << " and the height is "
//            <<  height << " " << units << " the area is " << area << " " << units
//            << " squared." << endl;
//
//            break;
//
//        case 4:
//
//            // The user did not want to calculate anything.
//            cout << "Goodbye\n";
//
//            break;
//
//        default:
//
//            // The user picked an invalid option.
//            cout << "Not a valid option...";
//
//            // run the switch again
//            calculate();
//
//            break;
//    }
//
//
//    // Ask the user if they need to calculate anything else.
//    cout << "\nDo you need to calculate anything else? (y for yes or n for n) ";
//    cin >> answer;
//
//    if (tolower(answer) == 'y') {
//        calculate();
//    } else if (tolower(answer) == 'n') {
//
//        cout << "Thank you for choosing our program, goodbye!\n";
//
//    } else {
//
//        cout << "I will take that as a no...\n";// normally would not end like this
//
//    }
//
//    // Used to exit the method
//    return 0;
//}
//
//
//// Main function
//int main() {
//    
//        // Run the method
//        calculate();
//
//    // Used to exit the program
//    return 0;
//
//}
