//
//  Star Display.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/6/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: Task
/*
 Create a satr tree.
 1. How many stars on each row? Each star is a character '*'.

 2. How many spaces are there before the stars on each row? Each space can be cout as a character ' '

 3. A 2D figure (has rows and columns) can be displayed using a nested for-loop. The outer loop iterates through the ROWs and the inner loop iterates through the COLUMNS. 
 */

// This program is used to make and display a star tree.

//#include <iostream>
//using namespace std;
//
//int main() {
//    
//    // Properties
//    int space, rows = 6;
//
//     // Create the star display
//    for(int i = 1, x = 0; i <= rows; ++i, x = 0) {
//        
//        // Create the spacing
//        for(space = 1; space <= rows-i; ++space) {
//            cout <<"  ";
//        }
//
//       // Place the star.
//        while(x != 2 * i-1) {
//            cout << "* ";
//            ++x;
//        }
//        cout << endl;
//    }
//    
//    
//    // Used to end the program
//    cout << endl;
//    return 0;
//    
//}
