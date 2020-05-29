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
void showSeats(char [15][30]);
void openingMessage();
int returnMain();
double ticket(char [15][30], double&);
void setprice();
void getSalesTotal(double);

// Main function
int main() {
    
    // Properties
    
    // Constants
    const int ROWS = 15, SEATS_PER_ROW = 30;
    
    // Variables
    double totalSales = 0.0, ticketPrice[ROWS];
    int userChoice;
    char totalSeats[ROWS][SEATS_PER_ROW] = {{'#'}};
    
    
    // FOR TESTING
    for(int row = 0; row < ROWS; row++) {
        
        for(int col = 0; col < SEATS_PER_ROW; col++) {
            
            totalSeats[row][col] = '#';
            
        }
    }
    
    //=====================
    // MARK: Program flow
    //=====================
    
    // Opening message call
    openingMessage();
    
    
    // Keep asking the user which option they want until they pick a valid number.
    do {
        
        // Get the users choice from the main menu.
        userChoice = showMenu();
        
        // Switch on the users choice.
        switch (userChoice) {
                
                
            case 1:
                
                // Shows the seating chart
                showSeats(totalSeats);
                
                // Ask the user if they want to go back to the menu.
                userChoice = returnMain();
                
                break;
                
            case 2:
                
                
                setprice();
                
                // Ask the user if they want to go back to the menu.
                userChoice = returnMain();
                break;
                
            case 3:
                
                // Call the function to buy tickets.
                totalSales += ticket(totalSeats, totalSales);
                
                // Ask the user if they want to go back to the menu.
                userChoice = returnMain();
                break;
                
            case 4:
                
                // Get the sales total
                getSalesTotal(totalSales);
                
                // Ask the user if they want to go back to the menu.
                userChoice = returnMain();
                break;
                
            case 5:
                
                // Exit the program
                break;
                
            default:
                
                // USer didnt pick a valid choice
                cout << "You must pick a option 1 - 5...\n" << endl;
                
                // Clear the input stream, without this if the user picks something other than an integer
                // the program will be an endless loop.
                cin.clear();
                cin.ignore();
                
        }
        
        
    } while(userChoice != 5);
    
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
void showSeats(char seatChart[15][30]) {
    
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
            cout << " " << seatChart[row][col];
            
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
int returnMain() {
    
    // Properties
    char choice;
    bool flag = false;
    int userChoice = 0;
    
    do {
        
        // Evaluate what the user picked.
        
        cout << "\nReturn to the main menu(use y or n)? ";
        cin >> choice;
        if(choice == 'y' || choice == 'Y') {
            
            userChoice = 1;
            flag = true;
            
        } else if(choice == 'n' || choice == 'n')  {
            
            userChoice = 5;
            flag = true;
            
        } else {
            
            cout << "You must pick y or n..." << endl;
            cin.clear();
            cin.ignore();
            
        }
        
        
    } while(flag != true);
    
    
    
    return userChoice;
    
}


// This function handles the user input and decision making.
double ticket(char seatChart[15][30], double& salesTotal) {
    
    // Properties
    int rows, ticketsWanted;
    double total = 0, bill = 0;
    int column;
    bool flag = false;
    
    do {
        
        cout << "How many tickets do you want to buy? ";
        cin >> ticketsWanted;
        
        if(ticketsWanted >= 1 && ticketsWanted <= 450) {
            
            for(int i = 0; i < ticketsWanted; i++) {
                
                cout << "Please select Row: ";
                cin >> rows;
                cout << "Please select Column(1-30): ";
                cin >> column;
                
                // get the correct index
                rows -= 1;
                column -= 1;
                
                // Add to the bill and the the sales total.
                if (rows >= 1 && rows <= 8) {
                    
                    bill += 15;
                    salesTotal += 15;
                    
                } else {
                    
                    bill += 12;
                    salesTotal += 15;
                    
                }
                
                
                if(seatChart[rows][column] != '*') {
                    
                    // Make the seat taken.
                    seatChart[rows][column] = '*';
                    
                } else {
                    
                    cout << "That seat is taken, please pick again." << endl;
                    
                    // Decrease i by one to make sure the user gets enough tickets.
                    i --;
                    
                }
                
            }
            
            flag = true;
            
        } else {
            
            cout << "You must pick a valid number.." << endl;
            
            cin.clear();
            cin.ignore();
            
        }
        
        
    } while (flag != true);
    
    
    cout << endl << "Your total bill is $" << bill << endl;
    
    return total;
    
}

// Set the price to for the tickets.
void setprice() {
    
    cout << "Row 1 to Row 8 ticket price is $15ea." << endl;
    cout << "Row 9 to Row 15 ticket price is $12ea." << endl;
    
}


// Presents the total dollar value from the event
void getSalesTotal(double total) {
    
    
    cout << "So far the total revune earned is $" << total << endl;
    
}
