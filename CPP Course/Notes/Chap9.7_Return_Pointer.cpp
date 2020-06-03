//// This program demonstrates a function that returns
//// a pointer.
//#include <iostream>
//
//using namespace std;
//
//// Function prototype
//int *getRandomNumbers(int);
//
//int main()
//{
//   int *numbers; // To point to the numbers
//    int size;
//    
//    cout << "How many numbers do you have?\n";
//    cin >> size;
//   
//   // Get an array of five random numbers.
//   numbers = getRandomNumbers(size);
//    
//   // Display the numbers.
//   for (int count = 0; count < size; count++)
//      cout << numbers[count] << endl;
//
//   // Free the memory.
//   delete [] numbers;
//   numbers = 0;
//   return 0;
//}
//
////**************************************************
//// The getRandomNumbers function returns a pointer *
//// to an array of random integers. The parameter   *
//// indicates the number of numbers requested.      *
////**************************************************
//
//int *getRandomNumbers(int num)
//{
//   int *arr = nullptr;	// Array to hold the numbers
//   
//   // Return a null pointer if num is zero or negative.
//   if (num <= 0)
//      return nullptr;
//   
//   // Dynamically allocate the array.
//   arr = new int[num];
//
//   // Populate the array with user entered numbers.
//   for (int count = 0; count < num; count++)
//   {
//       cout<<"Enter your "<< (count+1) <<" number: ";
//       cin >> arr[count];
//   }
//      
//   // Return a pointer to the array.
//   return arr;
//}
