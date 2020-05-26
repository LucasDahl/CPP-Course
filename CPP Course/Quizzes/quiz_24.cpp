////
////  quiz_24.cpp
////  CPP Course
////
////  Created by Lucas Dahl on 5/26/20.
////  Copyright © 2020 Lucas Dahl. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    
//    // Properties
//    
//    // Constants
//    const int NUM_STUDENTS = 3, NUM_SCORES = 5;
//    
//    // Variables
//    double total, average,
//    scores[NUM_STUDENTS][NUM_SCORES] = {
//        {88, 97, 79, 86, 94},
//        {86, 91, 78, 79, 84},
//        {82, 73, 77, 82, 89}
//    };
//    
//    // Get the average score for each student based off the five test scores.
//    for(int row = 0; row < NUM_STUDENTS; row++) {
//        
//        // Set total back to zero so that it only takes the average of each student.
//        total = 0;
//        
//        // Display the average for each student.
//        for(int col = 0; col < NUM_SCORES; col++) {
//            
//            // Add to the total
//            total += scores[row][col];
//            
//        }
//        
//        // Make the calculation
//        average = total / NUM_SCORES;
//        
//        // Display the average for the student.
//        cout << "The average test score for student " << row + 1 << " is " << average << endl;
//        
//    }
//    
//    
//    // Used to exit the program
//    return 0;
//    
//}
