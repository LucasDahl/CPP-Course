//
//  AllocateArray.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 6/5/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: Task
/*
 Write a program that dynamically allocates an array to hold a user-defined number of test scores. Once all the scores are entered,
 A function should be called to dynamically allocates an array with the user-defined number of elements. The function should return the pointer to the new array.
 Another function should be called that calculates and returns the average score.
 The program should display the list of scores and averages with appropriate headings.
 Use pointer notation rather than array notation whenever possible.
 Input validation: Do not accept negative numbers for test scores.
 */

// Header
//#include <iostream>
//
//#include <iomanip>
//
//using namespace std;
//
//void bubbleSort(double *, int);
//
//double arrAvgScore(double *, int);
//
//int main()
//
//{
//
//double *arr,total = 0.0, avg;
//
//int n,count;
//
//cout << "Enter number of test : ";
//
//cin >> n;
//
//arr = new double[n];
//
//cout << "Enter the test scores below.\n";
//
//for (int i = 0; i < n; i++)
//
//{
//
//cout << "Test Score " << (i + 1) << ": ";
//
//cin >> arr[i];
//
//while (arr[i]<0 || arr[i]>99)
//
//{
//
//cout << "Enter positive score " << endl;
//
//cout << "Please enter again: ";
//
//cin >> arr[i];
//
//}
//
//}
//
//bubbleSort(arr, n);
//
//avg = arrAvgScore(arr, n);
//
//cout << fixed << showpoint << setprecision(2);
//
//cout << "The test scores, sorted in ascending order, are: \n";
//
//for (int i = 0; i < n; i++)
//
//cout << arr[i] << " ";
//
//cout << endl;
//
//cout << "The average of all the test score is " << avg << endl;
//
//delete [] arr;
//
//arr = 0;
//
//system ("pause");
//
//return 0;
//
//}
//
//
//
//void bubbleSort(double *arr, int n) {
//
//for (int i = n - 1; i > 0; i--) {
//
//for (int j = 0; j < i; j++) {
//
//if ((arr[j] > arr[j+1])) {
//
//double temp = arr[j];
//
//arr[j] = arr[j+1];
//
//arr[j+1] = temp;
//
//}
//
//}
//
//}
//
//}
//
//double arrAvgScore (double *arr, int size)
//
//{
//
//double total = 0,average;
//
//int numTest;
//
//for (int count = 0; count < size; count++)
//
//{
//
//total += arr[count];
//
//}
//
//average = total / size;
//
//return average;
//
//}
