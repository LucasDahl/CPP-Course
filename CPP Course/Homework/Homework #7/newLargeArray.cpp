//
//  newLargeArray.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 6/5/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: Task
/*
 )Write a function that accepts an int array and the array’s size as arguments. The function should create a new array that is two elements larger than the argument array.
 The first two elements of the new array should be set to 0. Element 0 of the argument array should be copied to element 2 of the array, element 1 of the argument array should be copied to element 3 of the new array, and so forth.

 The function should return a pointer to the new array.

 Demonstrate the function in a complete program.
 */

// Header
#include <iostream>
using namespace std;

// Prototype functions
int *addToArray(int[], int);

int main() {

    // Properties
    
    // Constants
    const int SIZE = 5;
    
    // Variables
    int *dynArray, array[SIZE] = {1, 2, 3, 4, 5};
    
    // Print the first array
    cout << "The first array is ";
    for(int i = 0; i < SIZE; i++) {
        
        cout << array[i] << " ";
        
    }
    
    // Make space
    cout << endl;
    
    // Make the new array and print it.
    dynArray = addToArray(array, SIZE);
    
    cout << "The new array is ";
    
    for(int i = 0; i < (SIZE + 2); i++) {
        
        cout << dynArray[i] << " ";
        
    }
    

    // Return
    cout << endl;
    return 0;

}

int *addToArray(int array[], int size) {
    
    // Properties
    int newSize = size + 2, *newArray = new int[newSize];
    
    // Add the first two elements of the new array
    for(int i = 0; i < 2; i++) {
        
        newArray[i] = 0;
        
    }
    
    // Add the old array to the new array
    for(int i = 0; i < newSize; i++) {
          
          newArray[i + 2] = array[i];
          
      }
    
    // Return the new array.
    return newArray;
    
}
