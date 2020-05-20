//
//  OverloadedHospital.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/14/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Task
/*
 Write a program that computes and displays the charges for a patient’s hospital stay. First, the program should ask if the patient was admitted as an in-patient or an out-patient.

 If the patient was an in-patient, the following data should be entered:

 The number of days spent in the hospital
 The daily rate
 Hospital medication charges
 Charges for hospital tests, etc.)
 The program should ask for the following data if the patient was an out-patient:
 charges for hospital services (lab tests, etc.)
 Hospital medication charges
 
 The program should use two overloaded functions called HospitalCharge to calculate the total charges. One of the functions should accept arguments for the in-patient data, while the other function accepts arguments for out-patient information. Both functions should return the total charges.

 Input Validation: Do not accept negative numbers for any data.
 */

//// Header
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
////function prototype
//void getData();
//double HospitalCharge(int days, double dailyRate, double medication, double services);
//double HospitalCharge(double medication, double services);
//
//// Main method
//int main() {
//    
//    // Format the data
//    cout << fixed << setprecision(2);
//    
//    // Call function getData
//    getData();
//    
//    // Used to exit the program.
//    return 0;
//}
//
//// Gather the data
//void getData() {
//    
//    // Properties
//    char choice;
//    int days;
//    double dailyRate, medication, services, totalCharge;
//    bool flag = false;
//    
//    // Make sure the user enters I or O.
//    do {
//        
//        // Prompt user to enter whether patient was in or out
//        cout << "Was the patient an in-patient or out-patient?\n";
//        cout << "In-patient (I), Out-patient(O): ";
//        cin >> choice;
//        
//        if(choice == 'I' || choice == 'i') {
//            
//            // Ask the user for the data
//            cout << "How many days did the patient stay in? ";
//            cin >> days;
//            cout << "What is the daily rate? ";
//            cin >> dailyRate;
//            cout << "What are the medication charges? ";
//            cin >> medication;
//            cout << "What are the services charges? ";
//            cin >> services;
//            
//            // Get the total charge amoount.
//            totalCharge = HospitalCharge(days, dailyRate, medication, services);
//            
//            // Display the total charges.
//            cout << "The total chrages are $" << totalCharge << endl;
//            
//            // Set the flag variable
//            flag = true;
//            
//        } else if (choice == 'O' || choice == 'o') {
//            
//            // Ask the user for the data
//            cout << "What are the medication charges? ";
//            cin >> medication;
//            cout << "What are the services charges? ";
//            cin >> services;
//            
//            // Get the total charge amoount.
//            totalCharge = HospitalCharge(medication, services);
//            
//            // Display the total charges.
//            cout << "The total chrages are $" << totalCharge << endl;
//            
//            // Set the flag variable
//            flag = true;
//            
//        } else {
//            
//            // User didn't enter an I or O.
//            cout << "Error! you need to pick I or O...\n";
//            
//        }
//        
//    } while(flag != true);
//    
//}
//
//// Print the total charge for in-patient
//double HospitalCharge(int days, double dailyRate, double medication, double services) {
//    
//    // Properties
//    double totalCharge = (days * dailyRate) + medication + services;
//    
//    // Return the total
//    return totalCharge;
//    
//}
//
//// Print the total charge for in-patient
//double HospitalCharge(double medication, double services) {
//    
//    // Properties
//    double totalCharge = medication + services;
//    
//    // Return the total
//    return totalCharge;
//    
//}
