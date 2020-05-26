//
//  TicketMaster.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/26/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Task
/*
 
 Write a program that can be used by a small theater to sell tickets for performances. The program should display a screen that shows which seats are available and which are taken.
 Here is a list of tasks this program must perform:
 • The theater’s auditorium has 15 rows, with 30 seats in each row. A two dimensional array can be used to represent the seats. The seats array can be initialized with ‘#’ which means all seats are available.
 • The prices for each row can be stored in a separate array. All seats in given row are the same price, but different rows have different prices.
 • The program should display a menu includes options to o Display the seating chart;
 o View the ticket price for each row
 o Purchase ticket
 o View ticket sales report (total price for ticket purchased) o Exit the program
 • When the user selects the display seats menu option, the seats chart similar to the one shown below should be displayed.
 It should indicate which seats are already sold (*) and which are still available for purchase (#).
    

 
 • When the user selects the request tickets menu option, the program should prompt for the number of seats the patron wants. A function should then be called and passed this information so that it can handle the ticket request. If any of the requested seats do not exist, or are not available, an appropriate message should be displayed. If the seats exist and are available, a bill should be printed that lists the number of requested seats, the price per seat in the requested row, and the total price for the seats. Then the user program should ask if the patron wishes to purchase these seats.
 • When the user selects the sales report menu option, a report that tells how many seats have been sold, how many are still available, and how much money has been collected so far for the sold seats should be displayed. Think about how your team will either calculate or collect and store this information so that it will be available when it is needed for the report.
 • The seat availability information can be read in from the SeatAvailability.txt file (you need to create your own file). This file contains 450 characters (15 rows with 30 characters each), indicating which seats have been sold (‘*’) and which are available (‘#’). Initially all seats are available. However, once the program runs and the file is updated, some of the seats will have been sold.
 • When the day of ticket sales is over and the quit menu choice is selected, the program needs to be able to write the updated seat availability data back out to the file.
 
 */

//=============
// MARK: Header
//=============
#include <iostream>
using namespace std;

// Prototype function
int showMenu();
void showSeats(char[15][30]);

// Main function
int main() {
    
    // Properties
    
    // Constants
    const int ROWS = 15, SEATS_PER_ROW = 30;
    const char TAKEN = '*', EMPTY = '#';
    
    // Variables
    char totalSeats[ROWS][SEATS_PER_ROW] = {{'#'}};
    double totalSales, ticketPrice;
    
    for(int row = 0; row < ROWS; row++) {

        for(int col = 0; col < SEATS_PER_ROW; col++) {
            
            totalSeats[row][col] = EMPTY;

        }
    }
    
    
    
    showSeats(totalSeats);
    
    // Used to exit the program
    return 0;
    
}

//================
// MARK: Functions
//================

// A function the shows the menu to the user.
int showMenu() {
    
    // Properties
    int choice;
    
    
    // Return the choice
    return choice;
    
}

// A function that shows the user the seating chart in a grid.
void showSeats(char seats[15][30]) {
    
    cout << "Seats ------------------- 10 ---------------- 20 ----------------- 30" << endl;
    
    cout << "\t\t 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0";
    
    for (int row = 0; row < 15; row++) {
        
        cout << endl << "Row " << (row + 1) << "\t";
        
        for (int col = 0; col < 30; col++)  {
            
            cout << " " << seats[row][col];
            
        }
        
    }
    
    cout << endl;
    
}
