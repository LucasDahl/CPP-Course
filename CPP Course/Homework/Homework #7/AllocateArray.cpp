//
//  AllocateArray.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 6/5/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: Task
/*
 Write a program that dynamically allocates an array to hold a user-defined number of test scores. Once all the scores are entered,
 A function should be called to dynamically allocates an array with the user-defined number of elements. The function should return the pointer to the new array.
 Another function should be called that calculates and returns the average score.
 The program should display the list of scores and averages with appropriate headings.
 Use pointer notation rather than array notation whenever possible.
 Input validation: Do not accept negative numbers for test scores.
 */

//Header
#include <iostream>
#include <iomanip>
using namespace std;

// Protoype functions
void displayScores(double *, int);
double arrAvgScore(double *, int);

int main() {
    
    // Properties
    double *array, avg;
    int numOfScores;
    
    // ASk the user for the number of scores to enter
    cout << "Enter number of test : ";
    cin >> numOfScores;
    
    // Make the array ptr
    array = new double[numOfScores];
    
    // Ask the user to enter every test score
    cout << "Enter the test scores below.\n";
    
    for (int i = 0; i < numOfScores; i++) {
        
        cout << "Test Score " << (i + 1) << ": ";
        
        cin >> array[i];
        
        while (array[i]<0 || array[i]>99) {
            
            cout << "Enter positive score " << endl;
            
            cout << "Please enter again: ";
            
            cin >> array[i];
            
        }
        
    }
    
    cout << "The scores are: " << endl;
    displayScores(array, numOfScores);
    
    // Get the average
    avg = arrAvgScore(array, numOfScores);
    
    // Format the ddata
    cout << fixed << showpoint << setprecision(2);
    
    
    // Create the space
    cout << endl;
    
    // Display the average
    cout << "The average of all the test score is " << avg << endl;
    
    // Delete the array
    delete [] array;
    
    // Set it to zero
    array = 0;
    
    // Used to exit the program
    cout << endl;
    return 0;
    
}

// This function displays each score and what test it was.
void displayScores(double *array, int num) {
    
    for(int i = 0; i < num; i++ ) {
        
        cout << "Test " << i + 1 << " score was " << array[i] << endl;
        
    }
    
}

// This function gets the average score
double arrAvgScore(double *arr, int size) {
    
    // Properties
    double total = 0,average;
    //int numTest;
    
    // Loop through each test.
    for (int count = 0; count < size; count++) {
        
        total += arr[count];
        
    }
    
    // Calculate the average
    average = total / size;
    
    // Return the average
    return average;
    
}
