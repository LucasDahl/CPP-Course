//
//  Question3.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/23/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Task
/*
 A prime number is a number that is only evenly divisible by itself and 1. For example, the number 5 is prime because it can only be evenly divided by 1 and 5. The number 6, however, is not prime because it can be divided evenly by 1, 2, 3, and 6.

 Write a function name isPrime, which takes an integer as an argument and returns true if the argument is a prime number, or false otherwise.

 Use this function in a program to store a list of all the prime numbers from 1 through 300 in a file.

 TIP: Recall that the % operator divides one number by another, and returns the remainder of the division. In an expression such as (num1 % num2), the % operator will return 0 if num1 is evenly divisible by num2.
 */

// Header
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//// Prototype functions
//bool isPrime(int);
//
//// Main method.
//int main() {
//    
//    // Properties
//    ofstream outputFile;
//    
//
//    // Open/creat the file
//    outputFile.open("PrimeNumbers.txt");
//
//    
//    // Make sure the file can be created or opend.
//    if(outputFile) {
//        
//        // Add all the prime numbers from 1 to 300 to a file named PrimeNumbers.
//        for(int i = 0; i < 300; i++) {
//        
//            // Number is prime
//            if (isPrime(i) == true) {
//                
//                cout << i << " is prime." << endl;
//                
//                // Write the prime number to the file.
//                outputFile << i << endl;
//                
//            } else {
//                
//                // Number is not prime
//                cout << i << " is NOT prime." << endl;
//                
//            }
// 
//        }
//        
//    } else {
//        
//        // COuldnt open the file.
//        cout << "could not creat or open the file.." << endl;
//        
//    }
//    
//    
//    // Close the file.
//    outputFile.close();
//    
//    // Used to exit the program.
//    cout << endl;
//    return 0;
//    
//}
//
//// Function to figure out if a number is prime or not.
//bool isPrime(int num) {
//    
//    // Check of the number is prime or not and return true or false.
//    if (num % 2 == 0) {
//        
//        return false;
//        
//    } else {
//        
//        return true;
//        
//    }
//  
//}
