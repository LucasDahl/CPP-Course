//
//  quiz_11.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 4/27/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

//M MARK: - Task
/*
 Write a program that calculates the number of soccer teams that a youth league may create from the number of available players. The minimum number of players a team can have is 9, and the maximum is 15.

 •Your program should ask the user to enter
 –number of players he/she wants to have per team and
 –the total number of available players.
 •Then calculate and display
 –the number of teams can be formed and
 –number of players that are left over.
 */

// This program is to let the user know how many players will be on each
// soccer team when given the team size and total number of players.

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    
    // Properties
    int teamSize = 0, totalPlayers = 0;// set to zero initially to silence warnings
    float numberOfTeams;
    string teamMessage = "How many players per team do you want? ",
    playerMessage = "How many avaliable players are there? ";
    bool flag = false, questionAsked = false;
    
    while (flag != true) {
        
        // Ask the user for the number of players and team size.
        if (questionAsked == false) {
            
            cout << teamMessage;
            cin >> teamSize;
            cout << playerMessage;
            cin >> totalPlayers;
            
            // Chang the flag var so the messages are asked differently
            questionAsked = true;
        }
        
        // The user had to many or to few players per team
        while (teamSize <= 8 || teamSize >= 16) {
            
            if (teamSize <= 8) {
                
                cout << "You need at least 9 palyers per team...\n";
                cout << teamMessage;
                cin >> teamSize;
                
            } else if (teamSize >= 16) {
                
                cout << "You cannot have more than 15 players per team...\n";
                cout << teamMessage;
                cin >> teamSize;
                
            }
            
        }
        
        // User did not have enough players to even make one team.
        while (totalPlayers <= 8) {
            
            // Not enough pleyers for even one team
            cout << "Need more players...\n";
            cout << playerMessage;
            cin >> totalPlayers;
            
        }
        
        // Check if all of the criteria is met.
        if ((teamSize >= 9 && teamSize <= 15) && totalPlayers >= 9) {
            flag = true;
        }
        
    }// End while loop
    
    // Make the calculations.
    // Not every combination will be a whole number, must
    // cast the int properties as floats.
    numberOfTeams = (float(totalPlayers) / float(teamSize));
    cout << setprecision(1) << fixed;
    cout << endl;
    
    // let the user know the results.
    
    if (fmodf(numberOfTeams, 2.0) != 0) {
        
        cout << "With " << teamSize << " players per team, and "
        << totalPlayers << " total players, you will have " <<
        numberOfTeams << " teams. You may need more players for fair teams."
        << endl;

        
    } else {
        
        // Cast numberOfTeams as an int to be more user friendly,
        // as it will make even number of teams.
        
        cout << "With " << teamSize << " players per team, and "
        << totalPlayers << " total players, you will have " <<
        int(numberOfTeams) << " teams." << endl;
        
    }
    
    
    
    // Used to exit the program
    return 0;
    
}
