////
////  Question2.cpp
////  CPP Course
////
////  Created by Lucas Dahl on 5/23/20.
////  Copyright © 2020 Lucas Dahl. All rights reserved.
////
//
//// MARK: Task
///*
// Write a program that determines which of 5 geographic regions within a major city (north, south, east, west, and central) had the fewest reported traffic accidents last year. It should have the following functions, which are called by main.
//
// (5 pt) int getNumAccidents() is passed the name of a region. It asks the user for the number of traffic accidents reported in that region during the last year, validates the input, then returns it. It should be called once for each city region.
// (5 pt) void findLowest() is passed the five accident totals. It determines which is the smallest and prints the name of the region, along with its accident figure.
// (5 pt) int calcAverage() should calculate and return the average number of traffic accidents of 5 regions.
// (3 pt) int main() demonstrate you functions by calling them from the main function.
// Your program should display
//
//  Number of traffic accidents in each region;
//  The average number of accidents last year, and
//  The name of the region that has the smallest number of traffic accident.
// (2 pt) Input Validation: Do not accept an accident number that is less than 0.
// */
//
//// Header
//#include <iostream>
//using namespace std;
//
//// Prototype functions
//int getNumAccidents(string);
//void findLowest(int, int, int, int, int);
//int calcAverage(int, int, int, int, int);
//
//
//// Main method
//int main() {
//
//    // Properties
//    string north = "North", east = "East", south = "South", west = "West", central = "Central";
//    int northAc, eastAc, southAc, westAc, centralAc;
//    double average;
//    
//    // Gather the number of crashes
//    northAc = getNumAccidents(north);
//    eastAc = getNumAccidents(east);
//    southAc = getNumAccidents(south);
//    westAc = getNumAccidents(west);
//    centralAc = getNumAccidents(central);
//    
//    
//    // Find the lowest.
//    findLowest(northAc, eastAc, southAc, westAc, centralAc);
//    
//    // Get the average number of accidents
//    average = calcAverage(northAc, eastAc, southAc, westAc, centralAc);
//    
//    // Display the average
//    cout << "The average number of accidents is roughly (rounded) " << average << ".";
//    
//    // Used to exit theprogram.
//    cout << endl;
//    return 0;
//
//}
//
//// Get the total number of aaccidents in the region
//int getNumAccidents(string region) {
//    
//    // Properties
//    int accidents;
//    bool flag = false;
//    
//    // Ask the user for the number of accidents in the region.
//    do {
//        
//        
//        cout << "How many accidents in the " << region << " region? ";
//        cin >> accidents;
//        
//        // MAke sure th user input a number great than or equal to zero
//        if (accidents <= -1) {
//            
//            cout << "Number must be greater than or equal to zero.." << endl;
//            
//        } else {
//            
//            flag = true;
//            
//        }
//        
//    } while (flag != true);
//    
//    return accidents;
//    
//}
//
//// Get the lowest region of accidents.
//void findLowest(int north, int east, int south, int west, int central) {
//    
//    // Proeprties
//    int min;
//    int accidents[5] = {north, east, south, west, central} ;
//    
//    // Set the min
//    min = accidents[0];
//    
//    for(int i = 0; i < 5; i++) {
//        
//        if (min >= accidents[i]) {
//            
//            min = accidents[i];
//            
//        }
//        
//        
//        
//    }
//    cout << "The lowest amount of accidents is " << min << endl;
//    
//}
//
//int calcAverage(int north, int east, int south, int west, int central) {
//    
//    // Properties
//    double average;
//    
//    // Calculate the average.
//    average = ((north + east + south + west +central) / 5);
//    
//    return average;
//    
//}
