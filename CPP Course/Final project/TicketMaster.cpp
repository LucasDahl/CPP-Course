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
void showSeats();
void openingMessage();
bool returnMain();
void desTree();

// Global Constants
// These need to be global so they can be used in multiple functions
const int ROWS = 15, SEATS_PER_ROW = 30;

// Global Variables
char totalSeats[ROWS][SEATS_PER_ROW] = {{'#'}};

// Main function
int main() {
    
    // Properties
    
    // Constants
    const char TAKEN = '*', EMPTY = '#';
    
    // Variables
    double totalSales, ticketPrice[ROWS];
    int userChoice;
    bool again, flag;
    
    for(int row = 0; row < ROWS; row++) {

        for(int col = 0; col < SEATS_PER_ROW; col++) {
            
            totalSeats[row][col] = EMPTY;

        }
    }
    
    //=====================
    // MARK: Program flow
    //=====================
    
    // Opening message call
    openingMessage();
    
 
    desTree();
    
    
    //showSeats(totalSeats);
    
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
    
    // Display the menu for the user to pick an option.
    cout << "\t\tMain Menu\n" << endl;
    cout << "Please pick from the following options..\n" << endl;
    cout << "1). View the seating chart" << endl;
    cout << "2). View the ticket price" << endl;
    cout << "3). Purchase ticket" << endl;
    cout << "4). View ticket sales report(total price for ticket purchased)" << endl;
    cout << "5). Exit the program" << endl;
    
    // Get the user choice.
    cin >> choice;
    
    
    // Return the choice
    return choice;
    
}

// A function that shows the user the seating chart in a grid.
void showSeats() {
    
    // Set the title and let the user know which numbers are 10, 20, and 30.
    cout << "Seats ------------------- 10 ---------------- 20 ---------------- 30" << endl;
    
    // Set the column labels.
    cout << "\t\t 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0";
    
    // Loop through each row and column.
    for (int row = 0; row < 15; row++) {
        
        // Display the row and row number
        cout << endl << "Row " << (row + 1) << "\t";
        
        // Display each column
        for (int col = 0; col < 30; col++)  {
            
            // Set the spaces inbetween each seat
            cout << " " << totalSeats[row][col];
            
        }
        
    }
    
    // Get to the new line.
    cout << endl;
    
}

// A simple function that shows the opening message.
void openingMessage() {
    
    // Properties
    string starLine = "\n*******************************************************\n";
    
    // Display the total opening message.
    cout << starLine << endl;
    cout << "\t\t\t\t\t\tTMS" << endl;
    cout << "\n\t\tWelcome to the Ticket Management System" << endl;
    cout << starLine << endl;
    
}

// A function to ask the user if they need to return to the main menu.
bool returnMain() {
    
    // Properties
    char choice;
    
    cout << "Return to the main menu(use y or n)? ";
    cin >> choice;
    
    // Evaluate what the user picked.
    if(islower(choice) == 'y') {
        
        return true;
        
    } else {
        
        return false;
        
    }
    
    
}


// This function handles the user input and decision making.
void desTree() {
    
    // properties
    int choice;
    
    // Keep asking the user which option they want until they pick a valid number.
     do {
         
        // Get the users choice from the main menu.
        choice = showMenu();
         
         if(choice <= 1 || choice <= 5) {
             
             // Switch on the users choice.
             switch (choice) {
                     
                     // Shows the seating chart
                 case 1:
                     
                     showSeats();
                     
                     // User is done
                     if (returnMain()) {
                         desTree();
                     } else {
                         choice = 5;
                     }
                     
                 case 2:
                     
                     break;
                     
                 case 3:
                     
                     break;
                     
                 case 4:
                     
                     break;
                     
                 case 5:
                     
                     // Exit the program
                     break;
                     
                 default:
                     
                     cout << "Error... please restart the program..";
                     
             }
             
         } else if(choice <= 0 || choice >= 6) {
             
             // USer didnt pick a valid choice
             cout << "You must pick a option 1 - 5...\n" << endl;
             
             // Clear the input stream, without this if the user picks something other than an integer
             // the program will be an endless loop.
             cin.clear();
             cin.ignore();
             
         }else {
             
             // This is a saftey, as it logically shouldnt ever fall into this else statment.
             cout << "Error... please restart the program..";
             
         }
         
     } while(choice != 5);
    
    
}


