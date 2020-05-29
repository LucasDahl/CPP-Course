//
//  LoShuMagicSquare.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/27/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: Task
/*
 he Lo Shu Magic Square is a grid with 3 rows and 3 columns shown in the figure below. the Lo Shu Magic Square has the following properties:

 The grid contains the numbers 1 through 9 exactly
 The sum of each row, each column, and each diagonal all add up to the same number.
 In a program, you can simulate a magic square using a two-dimensional array.

 Write a function that accepts a two-dimensional array as an argument, and determines whether the array is a Lo Shu Magic Square.

 Test your program with two 2D arrays with values {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}} and {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}


 */

#include <iostream>
using namespace std;

// Prototype functions
void loShuMagic(int [3][3]);

// Main function
int main() {

    // Properties
    int
    arraySet1[3][3] = {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
    arraySet2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    // Test both arrays
    loShuMagic(arraySet1);
    loShuMagic(arraySet2);

    // Used to exit the program.
    return 0;

}

// Functions
void loShuMagic(int array[3][3]) {
    
    // Properties
    int matrixSum, colSum, rowSum;
    
    for(int row = 0; row < 3; row++) {
        
        for(int col = 0; col < 3; col++) {
            
            
        }
        
    }
    
    
}

