//
//  QuestionTwoFinal.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 6/15/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: Task
/*
 When analyzing data sets, such as data for human heights or for human weights, a common step is to adjust the data. This can be done by normalizing to values between 0 and 1, or throwing away outliers. Write a program to adjust the values by subtracting the smallest value from all the values. Assume that the list will always contain different numbers.
 
 Ex. If the list of numbers is: 30 50 10 70 65
 
 The normalized list is 20 40 0 60 55
 
 The program first will ask the user to enter the number of integers to be normalized. Then The following functions should be used:
 
 (10 pt) The function dataCollection should be called to make a dynamic array to hold the user entered integers. It prompts the user to enter the list of numbers. A pointer to the array should be returned.
 (10 pt) The function minVal receives an array and its size as arguments. It finds and return the smallest number in the array.
 (10 pt) The function normalize receives an array, the array size, and an integer as arguments. It will create an array with the same size as the argument array, but subtract the last argument integer from each element.
 (5 pt) The function showVal receives an integer array and its size as arguments. It displays the array contents.
 (5 pt) Function main.
 
 */

//#include <iostream>
//using namespace std;
//
//// Prototype functions
//int *dataCollection(int);
//int minVal(int [], int);
//void normalize(int [], int);
//void normalizeSmallest(int [], int, int);
//void showVal(int [], int);
//
//
//int main() {
//    
//    // Properties
//    int sizeOfArray, minNum, *dynArray;
//    bool flag = false;
//    
//    // Ask the user for the size of the array they want.
//    do {
//        
//        cout << "Please enter the size of the array you want(must be a whole number).";
//        cin >> sizeOfArray;
//        
//        if (sizeOfArray > 0) {
//            
//            flag = true;
//            
//        } else {
//            
//            // The user didnt pick a valid number.
//            cout << "Number must be greater than zero.. please try again. " << endl;
//            
//            // Clear the input stream incase the enter a char or string
//            cin.clear();
//            cin.ignore();
//            
//        }
//        
//    } while(flag != true);
//    
//    // Create the new array
//    dynArray = new int[sizeOfArray];
//    
//    // Add the elements to the array
//    dynArray = dataCollection(sizeOfArray);
//    
//    // Find the min value in the array
//    minNum = minVal(dynArray, sizeOfArray);
//    
//    
//    //=========================
//    // MARK: - Display the data
//    //=========================
//    
//    cout << "\nIn your array you entered:" << endl;
//    showVal(dynArray, sizeOfArray);
//    
//    // Display the smallest element in the array.
//    cout << "The smallest element in the array is " << minNum << "." << endl << endl;
//    
//    //==========================================
//    /*
//     The instructions state to normalize two diffferent ways,
//     so I did both.
//     */
//    //==========================================
//    
//    // Get the normalized array and display it based off First part of instructions
//    normalizeSmallest(dynArray, sizeOfArray, minNum);
//    
//    // Get the normalized array and display it based off second part of instructions
//    normalize(dynArray, sizeOfArray);
//    
//  
//    // Delete the arrays
//    delete [] dynArray;
//    
//    // Used to exit the program
//    return 0;
//    
//}
//
//// Get teh elements of the array
//int *dataCollection(int size) {
//    
//    // Properties
//    int *array = nullptr;
//    
//    // Allocate the arry
//    array = new int[size];
//    
//    // Ask the user for each element in the array.
//    for (int i = 0; i < size; i++) {
//        
//        cout << "Please enter a number ";
//        cin >> array[i];
//        
//    }
//    
//    // Return the aray
//    return array;
//    
//}
//
//// Get the min value of the array
//int minVal(int array[], int size) {
//    
//    // Properties
//    int min = array[0];
//    
//    // Get the smallest number
//    for(int i = 0; i < size; i++) {
//        
//        if(min > array[i]) {
//            
//            min = array[i];
//            
//        }
//        
//    }
//    
//    // Return the min value from the array.
//    return min;
//    
//}
//
//// Normalize the array
//void normalizeSmallest(int array[], int size, int smallest) {
//    
//    // Properties
//    double normalizedArray[size];
//    
//    // Display the normalized array
//    cout << "The normalized array using the smallest element is:" << endl;
//    
//    for(int i = 0; i < size; i++) {
//        
//        // Set each element
//        normalizedArray[i] = array[i] - smallest;
//        
//        cout << normalizedArray[i] << " ";
//        
//    }
//
//    // Create sapce
//    cout << endl << endl;
//    
//}
//
//// Normalize the array
//void normalize(int array[], int size) {
//    
//    // Properties
//    int normalizedArray[size], lastEl = array[size - 1];
//    
//    // Display the normalized array
//    cout << "The normalized array using the last element is:" << endl;
//    
//    for(int i = 0; i < size; i++) {
//        
//        // Set each element
//        normalizedArray[i] = array[i] - lastEl;
//        
//        cout << normalizedArray[i] << " ";
//        
//    }
//    
//    // Create sapce
//    cout << endl << endl;
//    
//}
//
//void showVal(int array[], int size) {
//    
//    for(int i = 0; i < size; i++) {
//           
//           cout << array[i] << " ";
//           
//       }
//       
//       // Create sapce
//       cout << endl << endl;
//    
//}
