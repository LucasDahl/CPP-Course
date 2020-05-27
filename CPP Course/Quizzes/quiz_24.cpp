//
//  quiz_24.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/26/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//
//
//#include <iostream>
//#include <iomanip>
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
//
//    for( int col = 0; col < NUM_SCORES; col++) {
//
//        // Reset the total for the next set
//        total = 0;
//
//        for(int row = 0; row < NUM_STUDENTS; row++) {
//            total +=scores[row][col];
//        }
//
//        // Make the calculation
//        average = total / 3;
//
//        // Format.
//        cout << setprecision(2) << fixed;
//
//        // Display the average for the test.
//        cout << "The average test score for test " << col + 1 << " is " << average << endl;
//
//    }
//
//    // Used to exit the program
//    return 0;
//
//}
