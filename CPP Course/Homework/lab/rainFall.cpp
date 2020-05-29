//
//  rainFall.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/29/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    double rainFall[12], averageRain, sum = 0, max1, min1;;
    string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" }, max2, min2;
    int maxIndex = 0;
    max1 = rainFall[0];

    for (int i = 0; i < 12; i++)//asks the user for input for each month
              {
                  cout << "Enter rainfall for " << months[i] << ": ";
                  cin >> rainFall[i];
                  while (rainFall[i] < 0) //input validation
                  {
                      cout << "invalid data (negative rainfall) -- retry";
                      cin >> rainFall[i];
                  }
              }


              for (int j = 0; j < 12; j++) //the sum of all of the numbers
              {
                  sum += rainFall[j];
              }

           max1 = rainFall[0];

    for (int k = 0; k < 12; k++)
    {
        if (rainFall[k] > max1)
            maxIndex = k;
    }

    int minIndex = 0;
    min1 = rainFall[0];

    for (int l = 0; l < 12; l++)
    {
        if (rainFall[l] < min1)
            minIndex = l;
    }

    max2 = months[maxIndex];
    min2 = months[minIndex];
    
    averageRain = sum / 12;
    
    cout << "Total rainfall: " << sum << endl;
    cout << "Average rainfall: " << averageRain << endl;
    cout << "Least rainfall in: " << min2 << endl;
    cout << "Most rainfall in: " << max2 << endl;
    
    return 0;
    
}
