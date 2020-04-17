//
//  quiz_7.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 4/17/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

//
//  quiz_7.cpp
//  C++Course
//
//  Created by Lucas Dahl on 4/17/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Task
/*
Write a program called “Security System”, where you preset a string -type password.
Your program should:
1. Display a welcome message, and ask the user to enter the password. Example:
“Welcome to the security system!  Please enter your password: ”
2. If the user entered the right code, display:
“Congratulations! Access granted! “
“You will be directed to the homepage shortly…”
If the user entered the wrong code, display:
“Sorry, wrong code.”
“Access denied.”
“Please try again.”
Upload your source code only.
*/

// Header
#include <iostream>
//#include <string>
#include <iomanip>

using namespace std;

// Used to check the users password attempt
int attemptHandle(string userInput, string password) {
    
    // Properties
    bool attempt;
    
    // Convert the user attempt to all lower to allow for less if statments
    for (int i=0; i< userInput.length(); i++) {
        userInput[i] = tolower(userInput[i]);
    }
    
    // Check if the user password is correct or not
       if (userInput == password) {
           attempt = true;
       } else {
           attempt = false;
       }
    
    // Return the bool
    return attempt;
    
}



// Main function
int main() {
    
    // Properties
    string password = "password", userInput;
    int tries = 0;
    bool correctInput;
    
    // Program title
    cout << setw(6) << " " << "Security System\n" << endl;
    
    // Ask the user to input their password
    cout << "Welcome to the security system!" << endl;
    cout << "Please enter your password: ";
    cin >> userInput;
    
    // Run the password attempted by the user through the function
    correctInput = attemptHandle(userInput, password);
    
    // user has five appttemps to enter the correct password before the program ends.
    // While loop keeps track of the number of tries.
    while (tries <= 5) {
     
        if (correctInput == true) {
            cout << "Congratulations! Access granted!" << endl <<
            "You will be directed to the homepage shortly…" << endl;
            break;
        } else {
            
            // Let the user know their attempt was worng
            cout << "Sorry, wrong code." << endl <<
            "Access denied" << endl <<
            "Please try again" << endl;
            
            // Increase tries by one
            tries += 1;
            
            // Ask the user to try again
            cout << "Please try your password again: ";
            cin >> userInput;
            
            // Run the new attempt through the method.
            correctInput = attemptHandle(userInput, password);
        }
        
        
    }
    
    // Let the user know there was to many attemps
    if (tries >= 6) {
        cout << "To many attempts, the program will exit, please try again later..." << endl;
    }
    
    // Used to exit program
    return 0;
}

