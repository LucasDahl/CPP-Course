//
//  TestData.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/27/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: Task
/*
 
 Write a program that creates a two-dimensional array initialized with test data. Use any data type you wish. The program should have the following functions:

 (5 pt) getTotal. This function should accept a two-dimensional array as its argument and return the total of all the values in the array.
 (5 pt) getAverage. This function should accept a two-dimensional array as its argument and return the average of all the values in the array.
 (5 pt) getRowTotal. This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a row in the array. The function should return the total of the values in the specific row.
 (5 pt) getColumnTotal. This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a column in the array. The function should return the total of the values in the specific column.
 (5 pt) getHighestInRow. This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a row in the array. The function should return the highest value in the specific row of the array.
 (5 pt) getLowestInRow. This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a row in the array. The function should return the lowest value in the specific row of the array.
 Demonstrate each of the functions in this program.
 
 */

// Header
#include <iostream>
#include <iomanip>
using namespace std;

// Prototype functions
int getTotal(int [5][5]);
double getAverage(int [5][5]);
int getRowTotal(int, int [5][5]);
int getColumnTotal(int, int [5][5]);
int getHighestInRow(int, int [5][5]);
int getLowestInRow(int, int [5][5]);

// Main function
int main() {

    // Property
    
    // Constants
    const int ROW = 5, COL = 5;
    
    // Variables
    int numArray[ROW][COL] = {
        {12, 15, 16, 18, 22},
        {45, 60, 77, 88, 12},
        {5, 6, 12, 33, 44},
        {99, 101, 16, 25, 6},
        {9, 12, 18, 9, 12}
    },
    total, rowHigh, rowLow, rowTotal, columnTotal;
    double average;
    
    // Format the out put.
    cout << setprecision(2) << fixed;
    
    // Let the user know the results.
    
    // Get the total.
    total = getTotal(numArray);
    cout << "The total for the array is " << total << "." << endl;
    
    // Get teh average
    cout << endl;
    average = getAverage(numArray);
    cout << "The average for the array is " << average << "." << endl;
    
    // Row total
    cout << endl;
    
    rowTotal = getRowTotal(0, numArray);
    cout << "The total for row 1 is  " << rowTotal << "." << endl;
    
    rowTotal = getRowTotal(1, numArray);
    cout << "The total for row 2 is  " << rowTotal << "." << endl;
    
    rowTotal = getRowTotal(2, numArray);
    cout << "The total for row 3 is  " << rowTotal << "." << endl;
    
    rowTotal = getRowTotal(3, numArray);
    cout << "The total for row 4 is  " << rowTotal << "." << endl;
    
    rowTotal = getRowTotal(4, numArray);
    cout << "The total for row 5 is  " << rowTotal << "." << endl;
    
    // Column total
    cout << endl;
    columnTotal = getColumnTotal(0, numArray);
    cout << "The total for column 1 is " << columnTotal << "." << endl;
    
    columnTotal = getColumnTotal(1, numArray);
    cout << "The total for column 2 is " << columnTotal << "." << endl;
    
    columnTotal = getColumnTotal(2, numArray);
    cout << "The total for column 3 is " << columnTotal << "." << endl;
    
    columnTotal = getColumnTotal(3, numArray);
    cout << "The total for column 4 is " << columnTotal << "." << endl;
    
    columnTotal = getColumnTotal(4, numArray);
    cout << "The total for column 5 is " << columnTotal << "." << endl;
    
    // For the highest in each row
    cout << endl;
    
    rowHigh = getHighestInRow(0, numArray);
    cout << "The highest number in the row 1 is " << rowHigh << "." << endl;
    
    rowHigh = getHighestInRow(1, numArray);
    cout << "The highest number in the row 2 is " << rowHigh << "." << endl;
    
    rowHigh = getHighestInRow(2, numArray);
    cout << "The highest number in the row 3 is " << rowHigh << "." << endl;
    
    rowHigh = getHighestInRow(3, numArray);
    cout << "The highest number in the row 4 is " << rowHigh << "." << endl;
    
    rowHigh = getHighestInRow(4, numArray);
    cout << "The highest number in the row 5 is " << rowHigh << "." << endl;
    
    // For the lowest in each row.
    cout << endl;
    
    rowLow = getLowestInRow(0, numArray);
    cout << "The lowest number in the row 1 is " << rowLow << "." << endl;
    
    rowLow = getLowestInRow(1, numArray);
    cout << "The lowest number in the row 2 is " << rowLow << "." << endl;
    
    rowLow = getLowestInRow(2, numArray);
    cout << "The lowest number in the row 3 is " << rowLow << "." << endl;
    
    rowLow = getLowestInRow(3, numArray);
    cout << "The lowest number in the row 4 is " << rowLow << "." << endl;
    
    rowLow = getLowestInRow(4, numArray);
    cout << "The lowest number in the row 5 is " << rowLow << "." << endl;
    
    // Used to exit the program.
    cout << endl;
    return 0;

}


// MARK: - Functions

int getTotal(int array[5][5]) {
    
    // Properties
    int total = 0;
    
    // Loop through the rows and columns
    for(int row = 0; row < 5; row++) {
        
        for(int col = 0; col < 5; col++) {
            
            // Add to the num for the total
            total += array[row][col];
            
        }
        
    }
    
    // Return the total.
    return total;
    
}

// This function gets all the average.
double getAverage(int array[5][5]) {
    
    // Properties
    double average, total = 0.0;
    
    // Loop through the rows and columns
    for(int row = 0; row < 5; row++) {
        
        for(int col = 0; col < 5; col++) {
            
            // Add to the num for the total
            total += array[row][col];
            
        }
        
    }
    
    // Make the calculations.
    average = total / 25;
    
    //cout << endl << "The average is " << endl;
    return average;
}

int getRowTotal(int rowPick, int array[5][5]) {
    
    // Properties
    int total = 0;
    
    for(int i = 0; i < 5; i++) {
        
        // Add to the column total.
        total += array[i][rowPick];
        
    }
    
    // Return the row total.
    return total;
}

int getColumnTotal(int colPick, int array[5][5]) {
    
    // Properties
    int total = 0;
    
    for(int i = 0; i < 5; i++) {
        
        // Add to the column total.
        total += array[colPick][i];
        
    }
    
    // Return the column total.
    return total;
    
}

int getHighestInRow(int rowPick, int array[5][5]) {
    
    // Properties
    int highest = 0;
    
    // Loop thorugh all the numbers.
    for(int i = 1; i< 5; i++) {
        
        // Check if teh current index is higher than the max variable.
        if(array[rowPick][i] > highest) {
            
            // Change teh max
            highest = array[rowPick][i];
            
        }
        
    }
    
    // Return the max
    return highest;
}

int getLowestInRow(int rowPick, int array[5][5]) {
    
    // Properties
    int low = array[rowPick][0];
    
    // Loop through all the numbers
    for(int i = 1; i< 5; i++) {
        
        // Check if teh current index is less than the variable low.
        if(array[rowPick][i] < low) {
            
            // Change teh min
            low = array[rowPick][i];
            
        }
        
    }
    
    // Return the low in the row.
    return low;
}
