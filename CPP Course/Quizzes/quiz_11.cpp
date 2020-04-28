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
// It will also let the user know if they need more players when there
// is a partial or odd number of teams.

//#include <iostream>
//
//using namespace std;
//
//int main() {
//    
//    // Properties
//    int teamSize = 0, totalPlayers = 0,// set to zero initially to silence warnings
//    numberOfTeams, leftoverPlayers;
//    string teamMessage = "How many players per team do you want? ",
//    playerMessage = "How many avaliable players are there? ",
//    teams;
//    bool flag = false, questionAsked = false;
//    
//    while (flag != true) {
//        
//        // Ask the user for the number of players and team size.
//        if (questionAsked == false) {
//            
//            cout << teamMessage;
//            cin >> teamSize;
//            cout << playerMessage;
//            cin >> totalPlayers;
//            
//            // Chang the flag var so the messages are asked differently
//            questionAsked = true;
//        }
//        
//        // The user had to many or to few players per team
//        while (teamSize <= 8 || teamSize >= 16) {
//            
//            if (teamSize <= 8) {
//                
//                cout << "You need at least 9 palyers per team...\n";
//                cout << teamMessage;
//                cin >> teamSize;
//                
//            } else if (teamSize >= 16) {
//                
//                cout << "You cannot have more than 15 players per team...\n";
//                cout << teamMessage;
//                cin >> teamSize;
//                
//            }
//            
//        }
//        
//        // User did not have enough players to even make one team.
//        while (totalPlayers <= 8) {
//            
//            // Not enough pleyers for even one team
//            cout << "Need more players...\n";
//            cout << playerMessage;
//            cin >> totalPlayers;
//            
//        }
//        
//        // Check if all of the criteria is met.
//        if ((teamSize >= 9 && teamSize <= 15) && totalPlayers >= 9) {
//            flag = true;
//        }
//        
//        
//    }// End while loop
//    
//    // Make the calculations.
//    // Not every combination will be an even.
//    numberOfTeams = (totalPlayers / teamSize);
//    leftoverPlayers = (totalPlayers % teamSize);
//    
//    // Check to see if teams is greater than one for correct grammer.
//    if (numberOfTeams > 1) {
//        teams = "teams";
//    } else {
//        teams = "team";
//    }
//    
//    cout << endl;
//    
//    // let the user know the results.
//    
//    if (leftoverPlayers == 0) {
//        
//        // Even number of players
//        cout << "With " << teamSize << " players per team, and "<< totalPlayers << " total players.\n";
//        cout << "You will have " << numberOfTeams << " " << teams << ".\n" << endl;
//        
//        
//    } else {
//        
//        
//        
//
//        // User has a partial team.
//        cout << "With " << teamSize << " players per team, and "<< totalPlayers << " total players.\n";
//        cout << "You will have " << numberOfTeams << " " << teams << ", with " << leftoverPlayers << " leftover.\n";
//        cout << "You may need more players for a fair game and tournaments...\n" << endl;
//        
//    }
//    
//    
//    
//    // Used to exit the program
//    return 0;
//    
//}
