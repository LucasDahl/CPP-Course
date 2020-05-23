//
//  quiz_23.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/20/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// This program is used to get the total of 5 scores from an array.

//// Header
//#include <iostream>
//using namespace std;
//
//// Protoype functions.
//void getTestScores(double[], int);
//double getTotal(double[], int);
//
//int main() {
//    
//    // Properties
//    const int SIZE = 5;
//    double scores[SIZE];
//    double sum;
//    
//    // Append all the test scores to the array.
//    getTestScores(scores, 5);
//    
//    // Get the sum.
//    sum = getTotal(scores, 5);
//    
//    // Display the data
//    cout << "\nThe sum of all the scores is " << sum << endl;
//    
//    // Used to exit the program.
//    cout << endl;
//    return 0;
//    
//}
//
//// Get all the test scores.
//void getTestScores(double scores[], int size) {
//    
//    // Ask the user for 5 scores.
//    for(int i = 0; i < size; i++) {
//        
//        cout << "Please enter a test score ";
//        cin >> scores[i];
//        
//    }
//    
//    //============================================================================
//    // Would it make more sense to call getTotal here, and not in the main method?
//    //============================================================================
//    
//    // Get the total of the test scores
//    //sum = getTotal(scores, size);
//    
//    //cout << "\nThe sum of all the scores is " << sum << endl;
//    
//}
//
//// Get the total.
//double getTotal(double scores[], int size) {
//    
//    // Properties
//    double sum = 0.0;
//    
//    // Add all the elements of the array together.
//    for(int i = 0; i < size; i++) {
//        
//        sum += scores[i];
//        
//    }
//    
//    // Return the sum.
//    return sum;
//    
//}
