//
//  QuestionThreeFinal.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 6/15/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// Header
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//
//// Main method
//int main() {
//    
//    // Properties
//    
//    // Constants
//    const int MONTH = 3, DAY = 30;
//    
//    // Variables
//    char weather[MONTH][DAY];
//    int sun, rain, cloudy, totalSun = 0, totalRain = 0, totalCloudy = 0, mostRain = 0;
//    ifstream inputFile;
//    
//    
//    // Open file
//    inputFile.open("weather.txt");
//    
//    // Check if the file opened
//    if (!inputFile) {
//        
//        cout << "Error opening data file.";
//        
//    } else {
//        
//        // Read weather data in from file if the file opened.
//        for (int row = 0; row < MONTH; row++) {
//            
//            for (int col = 0; col < DAY; col++) {
//                
//                inputFile >> weather[row][col];
//                
//            }
//        }
//    }
//    
//    // Close file
//    inputFile.close();
//    
//    // Display the data
//    cout << "------------------------------------------------\n";
//    cout << "\n            \tweather report\n";
//    cout << "\n------------------------------------------------\n";
//    
//    
//    for (int row = 0; row < MONTH; row++) {
//        
//        // Set each weather type to zero before coutning
//        sun = rain = cloudy = 0;
//        
//        // Calculate monthly numbers
//        for (int col = 0; col < DAY; col++) {
//            
//            // Add to each day accordingly
//            switch (weather[row][col]) {
//                    
//                case 'S' : sun++;
//                    break;
//                case 'R' : rain++;
//                    break;
//                case 'C' : cloudy++;
//                    break;
//                    
//            }
//        }
//        
//        // Dislplay monthly numbers
//        cout << "\nFor the month of ";
//        
//        if (row == 0) {
//            
//            cout << "June." << endl;
//            
//        } else if (row == 1) {
//            
//            cout << "July." << endl;
//            
//        } else if (row == 2) {
//            
//            cout << "August." << endl;
//            
//        }
//         
//        cout << "Rainy: " << rain << endl << "Sunny: " << sun  << endl << "Cloudy: " << cloudy << endl;
//        
//        // Calculate the total for each month
//        totalSun += sun;
//        totalRain += rain;
//        totalCloudy += cloudy;
//        
//        // Calculate month with most rainy days
//        if(mostRain > rain) {
//            
//            mostRain = row;
//            
//        }
//            
//    }
//    
//    // Dislplay monthly totals for each month
//    cout << "\nIn the entire three-month period" << endl;
//    cout << "Rainy: " << totalRain << endl;
//    cout << "Sunny: " << totalSun  << endl;
//    cout << "Cloudy: " << totalCloudy << endl;
//    
//    // Display month with the most rain
//    cout << "\nThe month with the largest number of rainy days was ";
//    
//    if (mostRain == 0) {
//        
//        cout << "June.\n\n";
//        
//    } else if (mostRain == 1) {
//        
//       cout << "July.\n\n";
//        
//    } else if (mostRain == 2) {
//        
//        cout << "August.\n\n";
//        
//    }
//        
//    
//    return 0;
//}
