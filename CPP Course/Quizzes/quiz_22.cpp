//
//  quiz_22.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/19/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//int main() {
//
//    // Properties
//    const int ARRAY_SIZE = 50;
//    int numbers[ARRAY_SIZE];
//    int count = 0, sum = 0, max = 0, min = 0;
//    double avg = 0;
//    ifstream inputFile;
//
//    // Open the file
//    inputFile.open("numbers.txt");
//
//    // Read from the file
//    while(count < ARRAY_SIZE && inputFile >> numbers[count]){
//
//        // Increase count by one.
//        count++;
//
//    }
//
//    // Close the file.
//    inputFile.close();
//
//    // Make sure the array is not empty.
//    if(count > 0) {
//
//        // Set the min and max to the firs number in the array.
//        min = max = numbers[0];
//
//    }
//
//    // Display the numbers
//    cout << "The numbers are: " << endl;
//
//    for(int i = 0; i < count; i++) {
//
//        // Print each number in the array.
//        cout << numbers[i] << endl;
//
//        // Add to the sum
//        sum += numbers[i];
//
//        // Get the max
//        if(numbers[i] > max) {
//
//            max = numbers[i];
//
//        }
//
//        // Get the min
//        if(numbers[i] < min) {
//
//            min = numbers[i];
//
//        }
//
//    }
//
//    // Get the average
//    avg = (double)sum / count;
//
//    // Display the data
//    cout << "Sum: " << sum << endl;
//    cout << "Average: " << avg << endl;
//    cout << "Highest: " << max << endl;
//    cout << "Lowest: " << min << endl;
//
//    // Used to exit the program.
//    cout << endl;
//    return 0;
//
//}
