////This program has pointer parameters
//
//#include <iostream>
//using namespace std;
//
//void swap(int*, int*);
//
//int main()
//{
//
//    int num1 = 2, num2 = -3;
//
//    cout << "Before swapping:";
//    cout << "\nnum1 = " << num1 << endl;
//    cout << "\nnum2 = " << num2 << endl;
//
//    cout << "\n";
//    // Pass the addresses of num1 and num2 to swap function
//    swap(&num1, &num2);
//
//    cout << "After swapping:";
//    cout << "\nnum1 = " << num1 << endl;
//    cout << "\nnum2 = " << num2 << endl;
//
//    system("pause");
//    return 0;
//
//}
//
///* ____________________________________________________________
//
//  This function has two pointers to integer parameters.
//  It swaps the contents of the twoarguments passed to it
//  ____________________________________________________________*/
//
//void swap(int* x, int* y)
//{
//    //Temporary varaible 
//    int temp;
//
//    temp = *x;
//    *x = *y;
//    *y = temp;
//}
