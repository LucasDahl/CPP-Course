//
//  QuestionOneFinal.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 6/15/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Task
/*
 Write a program that contains the following functions:

  (i) (10 pt) makingArray : This function will

 return a char pointer which points to a char array
 Take one parameter - an integer variable that has a default argument 5. The argument is the size of the argument array.
 When the function is called, the user's input or default argument will be used for the size of the array.
 This function will initialize all elements of the array with ‘X’.
 (ii) (10 pt) copyCharArray : This function will

 return a char pointer which points to a char array
 Take two parameters - a char array, which can NOT be modified by this function, and an integer variable for a size of the array.
 This function will make a new array and copy the contents of all elements from the argument array.
 (iii)(5 pt)  main: Demonstrate functions(makingArray and copyCharArray) by calling them in a program.
 */

//#include <iostream>
//using namespace std;
//
//
//// Prototype functions
//char* makingArray(int);
//char* copyCharArray(char*, int);
//
//int main() {
//    
//    // Properties
//    int userInput;
//    char* array = makingArray(userInput);
//    char* character = copyCharArray(array, userInput);
//    
//    cout << "Please enter the size of an array: ";
//    cin >> userInput;
//    
//    // Print out each element in the array
//    for(int i = 0; i < userInput; i++) {
//        
//        cout << array[i] << " ";
//        
//    }
//    
//    
//    // Make space
//    cout << endl;
//    
//    // Print out each element in the array
//    for(int i = 0; i < userInput; i++) {
//        
//        cout << character[i] << " ";
//        
//    }
//    
//    // Make space
//    cout << endl;
//    
//    // USed to exit the program
//    return 0;
//    
//}
//
//// MARK: Malloc method
///* The malloc function allocates a block if memory and returns a void pointer,
// it may or may not be a null pointer.
// */
//
//// A function that creates the array
//char* makingArray(int num = 5) {
//    
//    // Properties
//    char *array = (char*)malloc(num * sizeof(char*));
//    
//    
//    for(int i = 0; i < num; i++) {
//        
//        array[i] = 'X';
//        
//    }
//    
//    // Return the array ptr
//    return array;
//    
//}
//
//// A function copies the array
//char* copyCharArray(char* character, int num) {
//    
//    // Properties
//    char *array = (char*)malloc(num * sizeof(char*));
//    
//    for(int i = 0; i < num; i++) {
//        
//        array[i] = character[i];
//        
//    }
//    
//    // Return the array ptr
//    return array;
//}
