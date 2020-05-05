////
////  quiz_16.cpp
////  CPP Course
////
////  Created by Lucas Dahl on 5/5/20.
////  Copyright © 2020 Lucas Dahl. All rights reserved.
////
//
//// This program is used to read from a file and display the total amount of numbers, the average of the numbers, and the sum total.
//
//// Header
//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    
//    // Properties
//    ifstream inputFile;
//    int num, totalNums = 0, sum = 0, average;
//    
//    // Open the file
//    inputFile.open("Random.txt");
//    
//    if (inputFile) {
//        
//        // Let the user know wht file the program is reading from.
//        cout << "From the text file Random.txt:" << endl;
//        
//        // Read from the file and display the data
//        while (inputFile >> num ) {
//  
//            
//            // Incrment per loop for total amount of numbers.
//            totalNums ++;
//            
//            // Add every number together for a sum.
//            sum += num;
//    
//    
//        } // End while
//        
//    } else {
//        
//        // Let the user know there was an error.
//        cout << "There was an error reading the file.. Please restart."
//        << endl;
//        
//    } // End if statment
//    
//    // Calculate the average
//    average = (sum / totalNums);
//    
//    // Display the data to the user.
//    cout << endl;
//    cout << "The total amount of numbers in the file is " <<totalNums << "." << endl;
//    cout << "The sum of all the numbers is " << sum << "." << endl;
//    cout << "The average value of all the numbers is " << average << "." << endl;
//    cout << endl;
//    
//    // Used to exit the program
//    return 0;
//    
//} // End main
