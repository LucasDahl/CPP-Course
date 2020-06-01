// This program uses a pointer to display the contents
// of an integer array.
#include <iostream>
using namespace std;

int main() {
    int set[8] = {5, 10, 15, 20, 25, 30, 35, 40},counter = 0;
    int *nums = set;     /* define a pointer named 'nums',and make it points to 'set' */
    
    
    // Display the numbers in the array.
    cout << "The numbers in set are:\n";
    cout << nums[counter] << " ";   // Display first element using pointer
    
    while (counter < 7) /* Make sure the address is not greater than the address of the last element */ {
        // Advance nums to point to the next element.
        counter ++;
        // Display the value pointed to by nums.
        cout << nums[counter] << " ";
    }
    
    // Add spacing.
    cout << endl << endl;
    
    // Display the numbers in reverse order.
    cout << "\nThe numbers in set backward are:\n";
    cout << nums[counter] << " ";   // Display the last element
    
    while (counter > 0) /* Make sure the address is not less than the address of the first element */ {
        // Move backward to the previous element.
        counter--;
        // Display the value pointed to by nums.
        cout << nums[counter] << " ";
    }
    
    // Add spacing
    cout << endl << endl;
    
    // Used to exit the program
    return 0;
    
}
