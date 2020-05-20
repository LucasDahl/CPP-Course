////
////  LowestScoreDrop.cpp
////  CPP Course
////
////  Created by Lucas Dahl on 5/14/20.
////  Copyright © 2020 Lucas Dahl. All rights reserved.
////
//
//// MARK: - Task
///*
// Write a program that calculates the average of a group of test scores, where the lowest score in the group is dropped. It should use the following functions:
//
// void getScore() should ask for a test score, store it in a reference parameter variable, and validate it. This function should be called by main once for each of the five scores to be entered.  
// void calcAverage() should calculate and display the average of the four highest scores. This function should be called just once by the main and should be passed the five scores.  
// int findLowest() should find and return the lowest of the five scores passed to it. It should be called by calcAverage, which uses the function to determine which of the five scores to drop.  
// Input Validation: Do not accept test scores lower than 0 or higher than 100.  
// */
//
//// Header
//#include <iostream>
//using namespace std;
//
//// Prototype functions
//void getScore(int&);
//void calcAverage(int, int, int, int, int);
//int findLowest(int, int, int, int, int);
//
//// Main method
//int main() {
//    
//    // Properties
//    int num1, num2, num3, num4, num5;
//    
//    cout << "Enter a test scroe between 0 and 100.\n";
//    
//    // Get the scores
//    getScore(num1);
//    getScore(num2);
//    getScore(num3);
//    getScore(num4);
//    getScore(num5);
//    
//    // Get the average
//    calcAverage(num1, num2, num3, num4, num5);
//    
//    // USed to exit the program.
//    return 0;
//}
//
//// Ask the user for the scores
//void getScore(int& num) {
//    
//    do {
//        
//        cout << "enter a test score: ";
//        cin >> num;
//        
//        // Make sure the user enter a number in range.
//        if(num < 0 || num > 100) {
//            
//            cout << "number is out of range try again\n";
//            
//        }
//            
//    } while(num < 0 || num > 100);
//    
//}
//
//// Get the average
//void calcAverage(int num1, int num2, int num3, int num4, int num5) {
//    
//    // Properties
//    double average;
//    int low, total;
//    
//    // Get the lowest
//    low = findLowest(num1,num2,num3,num4,num5);
//    
//    // Calulate the average iof the top 4.
//    total = num1 + num2 + num3 + num4 + num5 - low;
//    average = total / 4.0;
//    
//    // Let the user know the average.
//    cout << "The average of the top 4 tests is " << average << endl;
//    
//}
//
//// Get the lowest score
//int findLowest(int num1,int num2,int num3,int num4,int num5) {
//    
//    // Properties
//    int low;
//    
//    // Set the low to the first property to compare.
//    low = num1;
//    
//    if(num2 < low)
//        
//        low = num2;
//    
//    if( num3 < low)
//        
//        low = num3;
//    
//    if(num4 < low)
//        
//        low = num4;
//    
//    if(num5 < low)
//        
//        low = num5;
//    
//    // Return the low.
//    return low;
//    
//}


