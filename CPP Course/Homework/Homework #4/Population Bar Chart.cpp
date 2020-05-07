//
//  Population Bar Chart.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/7/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Task

/*
 Write a program that produces a bar chart showing the population growth of Prairieville, a small town in the Midwest, at 20-year intervals during the past 100 years. The program should read in the population figures (rounded to the nearest 1,000 people) for 1900, 1920, 1940, 1960, 1980, 2000, and 2020 from the file People.txt. For each year it should display the date and a bar consisting of one asterisk for each 1,000 people.

 Here is an example of how the chart might begin:

 PRAIRIEVILLE POPULATION GROWTH

 (each * represents 1,000 people)

 1900 **

 1920 ****

 1940 *****
 */

// This program is used to show the population growth for every 20 years
// for the town of Prairieville.

// Header
//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//int main() {
//    
//    // Properties
//    ifstream inputFile;
//    int num, year = 1900;
//    float numOfStars;
//    string population;
//
//    // Message to the user
//    cout << "\nPRAIRIEVILLE POPULATION GROWTH\n";
//    cout << "(each * represents 1,000 people)\n\n";
//
//    // OPen the file
//    inputFile.open("People.txt");
//    
//    if (inputFile) {
//        
//        while (inputFile >> num) {
//            
//            // Get the number of stars needed
//            numOfStars = num / 1000;
//            
//            // Reset the population string for the new line.
//            population = "";
//            
//            for(int i = 0; i < numOfStars; i ++) {
//                
//                population += "*";
//                
//            }
//            
//            // Display the message to the user.
//            cout << year << " " << population << endl;
//            
//            // Add 20 years
//            year += 20;
//            
//        }
//        
//    } else {
//        
//        // COuldnt open or read the file.
//        cout << "Error opening the file, please try again." << endl;
//        
//    }
//    
//    // Close the file
//    inputFile.close();
//
//    // Used to exit the program
//    cout << endl;
//    return 0;
//    
//}
