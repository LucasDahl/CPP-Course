//
//  quiz_26.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 6/2/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// Header
#include <iostream>
using namespace std;

// Prototype functions
int doSomething(int*, int*);


// Main function
int main() {
    
    // Properties
    int num1 = 5, num2 = 12, num3 = 0;
    
    // Show the numbers before the function.
    cout << "The first number is " << num1 << endl;
    cout << "The second number is " << num2 << endl;
    cout << "The third number is " << num3 << endl;
    
    // Call the function by passing the address.
    num3 = doSomething(&num1, &num2);
    
    cout << endl;
    
    // Show the numbers after the function
    cout << "The first number after swaping it and multiplying by 10 is " << num1 << endl;
    cout << "The second number after swaping it and multiplying by 10 is  " << num2 << endl;
    cout << "The third number after adding the first two numbers after swaping and multiplying is " << num3 << endl;
    
    // Used to exit the program
    cout << endl;
    return 0;
    
}


// A function that swapes two pointer variables and multiplies them by ten.
int doSomething(int *x, int *y) {
    
    // Properties
    int temp = *x;
    
    // Swap the variables.
    *x = *y * 10;
    
    *y = temp * 10;
    
    return *x + *y;
    
}
