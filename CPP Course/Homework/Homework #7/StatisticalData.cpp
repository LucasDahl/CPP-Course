//
//  StatisticalData.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 6/5/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: Task
/*
 
 Write a program that can be used to gather statistical data about the number of movies college students see in a month. The program should perform the following steps:
 Ask the user how many students were surveyed. An array of integers with this many elements should then be dynamically allocated..
 Allow the user to enter the number of movies each student saw into the array.
 Calculate and display the total and average of the values entered.
 Input validation: Do not accept negative numbers for input.
 */

// Header
#include <iostream>
using namespace std;

// Prototype functions
int *createArray(int);
void getinfo(int *, int);
void sort(int [], int);
double averageAndTotal(int *, int);


int main() {
    
    // Properties
    int *dynArray, students;
    
    // Ask the user how many students they are gathering data from.
    do {
        
        cout << "How many students will you enter? ";
        cin >> students;
        
    } while(students <= 0 );
    
    // Create an array of all the students
    dynArray = createArray(students);
    
    // Get the info for each student
    getinfo(dynArray, students);
    
    // Display what each student saw.
    cout << endl;
    for(int i = 0; i < students; i++) {
        
        cout << "student " << i + 1 <<" saw " << *(dynArray + i) << " movies.\n";
    }
    
    // Display the average
    cout << "The total amount of movies is "<< averageAndTotal(dynArray, students) << endl;
    
  
    // Delete the array
    delete [] dynArray;
    
    // Used to exit the program
    cout << endl;
    return 0;
    
}


// This function gathers all the data
void getinfo(int a[], int n) {
    
    // Ask for each student
    for (int i = 0; i < n;i++) {
        
        do {
            
            cout << "How many movies did student " << (i + 1) << " see? ";
            cin >> a[i];
            
            if(a[i] < 0|| a[i] > 100) {
                
                cout << "Invalid entry, Please enteer a value between 0 and 100\n";
                
            }
            
        } while(a[i] < 0|| a[i] > 100);
    }
}

// THis function gets the average
double averageAndTotal(int array[], int students) {
    
    // Properties
    int total = 0;
    double avg;
    
    
    for (int i = 0; i < students; i++) {
        
        total += array[i];
        
    }
    
    cout << total << " and the average is ";
    
    // Calculate the average
    avg = (double)total/students;
    
    // Return the average
    return avg;
    
}

// This array creats a pointer array
int *createArray(int n) {
    
    // Proeprties
    int *ptr;
    
    ptr = new int[n];
    
    // Return the pointer
    return ptr;
    
}





