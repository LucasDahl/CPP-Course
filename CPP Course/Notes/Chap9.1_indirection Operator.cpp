//// This program demonstrates the use of the indirection operator.
//#include <iostream>
//using namespace std;
//
//int main()
//{
//   int x = 25, *ptr;				// int variable
//   //_______________________      // Define a pointer variable called ptr
//    //which can point to an int. Initial it with 0 address.
//
//    ptr = &x;   // Store the address of x in ptr
//   
//   // Use both x and ptr to display the value in x.
//   cout << "Here is the value in x, printed twice:\n";
//   cout << x << endl;     // Displays the contents of x
//    
//    *ptr = 100;  // Displays the contents of x through ptr
//   
//   // Assign 100 to the location pointed to by ptr. This
//   // will actually assign 100 to x.
//    
//   *ptr = 100;
//   
//   // Use both x and ptr to display the value in x.
//   cout << "Once again, here is the value in x:\n";
//   cout << x << endl;     // Displays the contents of x
//    
//   cout << *ptr << endl;// Displays the contents of x using ptr
//    
//   return 0;
//    
//}
