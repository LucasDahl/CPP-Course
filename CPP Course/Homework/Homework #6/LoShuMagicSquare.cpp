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

// Header
#include<iostream>

using namespace std;

// Prototype functions.
void displayMatrix(int[3][3]);
bool isMagicSquare(int[3][3]);

// Main function
int main() {
    
    int firstMatrix[3][3] = {
        { 4, 9, 2 },
        { 3, 5, 7 },
        { 8, 1, 6 }
        
    },
    secondMatrix[3][3] = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
        
    };
    
  
    // Display both matrixs
    displayMatrix(firstMatrix);
    
    if (isMagicSquare(firstMatrix)) {
        cout << "\nAbove 2D Array is a Magic Square" << endl;
    } else {
       cout << "\nAbove 2D Array is not a magic Square" << endl;
    }
        
    
    displayMatrix(secondMatrix);
    
    if (isMagicSquare(secondMatrix)) {
        cout << "\nAbove 2D Array is a Magic Square" << endl;
    } else {
        cout << "\nAbove 2D Array is not a magic Square" << endl;
    }

    
    // Used to exit the program.
    return 0;
    
}


bool isMagicSquare(int matrix[3][3]) {
    
    int diagonalSum = 0, secondDiagonalSum = 0, sumOfColumns = 0;
 
    // Calculate the sum of first diagonal
    for (int row = 0; row < 3; row++) {
        
        // From top right to bottom left
        diagonalSum = diagonalSum + matrix[row][row];
        
    }
       
    // Calculate the sum of second diagonal
    for (int row = 0; row < 3; row++) {
    
        // From top left to bottom right.
        secondDiagonalSum = secondDiagonalSum + matrix[row][3 - 1 - row];
        
    }
    
    
    //check if sum is not equal then return false
    if(diagonalSum!=secondDiagonalSum) {
        
        return false;
        
    }
       
    // Calculate the sum of columns, for each sum of columns check with diagonalSum, if not equal then return false
    for (int row = 0; row < 3; row++) {
        
        sumOfColumns = 0;
        
        for (int col = 0; col < 3; col++) {
            sumOfColumns += matrix[col][row];
        }
         
        if (diagonalSum != sumOfColumns) {
            return false;
        }
          
    }
    
    // Calculate the sum of row, for each sum of row check with diagonalSum, if not equal then return false
    for (int row = 0; row < 3; row++) {
        
        int sumOfRows = 0;
        
        for (int col = 0; col < 3; col++) {
            sumOfRows += matrix[row][col];
        }
            
        if (sumOfRows != diagonalSum) {
            return false;
            
        }
           
    }
    
    // If all sum are equal then return true
    return true;
    
}

// function to display matrix
void displayMatrix(int matrix[3][3]) {
    for (int row = 0; row < 3; row++) {
        
        for (int col = 0; col < 3; col++)
            
            cout << matrix[row][col] << " ";
        
        cout << endl;
        
    }
    
}
