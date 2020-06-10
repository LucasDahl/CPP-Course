//
//  ReverseArray.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 6/5/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: Task
/*
 (10 pt) Write a function that accepts an int array and the array’s size as arguments. The function should create a copy of the array, except that the element values should be reversed in the copy.
 The function should return a pointer to the new array. Demonstrate the function in a complete program.
 */

//Header
//#include <iostream>
//using namespace std;
//
//// Prototype functions
//int *reverse(int[], int);
//void print(int[], int);
//
//// Main function
//int main() {
//
//    // Properties
//    int size = 10, array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
//    *reversedArray = reverse(array, size);
//
//    // Print the original array
//    cout << "\nThe original array is" << endl;
//    print(array, size);
//
//    // Print the reverse array
//    cout << "\nReversed array" << endl;
//    print(reversedArray, size);
//
//    // Used to exit the program
//    return 0;
//
//}
//
//// Reverse the arry
//int *reverse(int array[],int size) {
//
//    // Proerties
//    int *copyReverse = new int[size];
//
//    // Check the size
//    if(size <= 0) {
//        return NULL;
//    }
//
//    // Loop through and add to the array
//    for(int i = 0; i < size; i++) {
//
//        // Get the correct index by subtracting one from the current loop
//        // To reverse the array
//        copyReverse[i] = array[size - i - 1];
//
//    }
//
//    // Return the array
//    return copyReverse;
//
//}
//
//
//// Print the array
//void print(int array[],int n) {
//
//    // Loop through each element and print it
//    for(int i = 0; i < n; i++) {
//
//        cout << array[i] << " ";
//    }
//
//    // Add a space
//    cout << endl;
//
//}
