//
//  Population Bar Chart.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/7/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Task

/*
 Write a program that produces a bar chart showing the population growth of Prairieville, a small town in the Midwest, at 20-year intervals during the past 100 years. The program should read in the population figures (rounded to the nearest 1,000 people) for 1900, 1920, 1940, 1960, 1980, and 2000 from the file People.txt. For each year it should display the date and a bar consisting of one asterisk for each 1,000 people.

 Here is an example of how the chart might begin:

 PRAIRIEVILLE POPULATION GROWTH

 (each * represents 1,000 people)

 1900 **

 1920 ****

 1940 *****
 */


#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile;
    string years;

    cout << "\nPRAIRIEVILLE POPULATION GROWTH\n";
    cout << "(each * represents 1,000 people)\n\n";

    inputFile.open("People.txt");
    
    if (inputFile) {
        
        while (getline(inputFile, years)) {
            cout << years << endl;
        }
        
    } else {
        
        cout << "Error" << endl;
        
    }

    
        

    inputFile.close();

    return 0;
}
