//
//  NewArray.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 6/5/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: Task
/*
 
 (10 pt)Write a function that accepts an int array and the array’s size as arguments. The function should create a new array that is twice the size of the argument array. The function should copy the contents of the argument array to the new array and initialize the unused elements of the second array with 0. The function should return a pointer to the new array.
 Demonstrate the function in a complete program.
 */

// Header
//#include <iostream>
//using namespace std;
//
//// Protype functions
//int *expandArray (int*, const int);
//
//// Main function
//int main() {
//    
//    // Properties
//    
//    // Constants
//    const int SIZE = 6;
//    
//    // Variables
//    int array[SIZE] = {1,2,3,4,5,6}, *arrayPtr;
//    
//    // Display the first array
//    cout << "The original is " << endl;
//    for(int i = 0; i < SIZE; i++) {
//        
//        cout << array[i] << " ";
//        
//    }
//    
//    // Call the function to extand the array
//    arrayPtr = expandArray(array, SIZE);
//    
//    // Display the new array.
//    cout << "\nThe new array is " << endl;
//    for(int i = 0; i < (SIZE * 2); i++) {
//        
//        cout << arrayPtr[i] << " ";
//        
//    }
//    
//    
//    // Used to end the program.
//    cout << endl;
//    return 0;
//    
//}
//
//// A function that will extand an array.
//int *expandArray (int array[],const int size) {
//    
//    // Properties
//    int newSize = size * 2;
//    int *newArray = new int[newSize];
//    
//    // Make each element in the new array match the original array.
//    for(int i = 0; i < size; i++) {
//        
//        newArray[i] = array[i];
//        
//    }
//    
//    // Make each new element a zero
//    for(int i = size; i < newSize; i++) {
//        
//        newArray[i] = 0;
//        
//    }
//    
//    // Return the new array
//    return newArray;
//    
//}
