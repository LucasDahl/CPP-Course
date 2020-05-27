//
//  DriversLicense.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/27/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//
// MARK: Task
/*
 
 (10 pt) The local Driver’s License Office has asked you to write a program that grades the written portion of the driver’s license exam. The exam has 20 multiple-choice questions. Here are the correct answers:
 1. A     2. B       3. A      4. C

 5. D     6. A       7. C       8. C

 9. B    10. B    11. D   12. A

 13. B  14. C  15. B  16. D

 17. C  18. D  19. D  20. B

 Your program should store the correct answers shown above in an array. It should ask the user to enter the student’s answers for each of the 20 questions, and the answers should be stored in another array.

 After the student’s answers have been entered, the program should

 display a message indicating whether the student passed or failed the exam. (A student must correctly answer 15 of the 20 questions to pass the exam.)
 It should then display the total number of correctly answered questions, the total number of incorrectly answered questions, and a list showing the question numbers of the incorrectly answered questions.
 */

//#include <iostream>
//using namespace std;
//
//
//int main() {
//
//    // Properties
//    char correct[]={"abacdaccbbdabcbdcddb"};
//    char student[20];
//    int right = 0,wrong = 0;
//
//    // Ask the user what the answer was for each question.
//    for(int i = 0; i < 20; i++) {
//
//        cout << "Enter answer for question " << i + 1 << ": ";
//        cin >> student[i];
//
//        // Check for a vliad input.
//        if(tolower(student[i]) < 'a'|| tolower(student[i]) > 'd') {
//
//            cout<<"invalid entry, must be A, B, C, or D." << endl;
//
//            // Make sure that the variable doesnt count an invalid input
//            i--;
//
//        }
//    }
//
//    // Let the user know what questions they got wrong.
//    cout << "\nThe questions you got wrong are numbers:" << endl;
//
//    // Check which answers are correct or wrong.
//    for(int i = 0; i < 20; i++) {
//
//        if(student[i] == correct[i]) {
//
//            right++;
//
//        } else {
//
//            wrong++;
//            cout << i + 1 << ", ";
//
//        }
//    }
//
//    // Display the total answers correct and wrong.
//    cout << endl << endl << "Total correct answers: " << right << endl;
//    cout << "Total wrong answers: " << wrong << endl;
//
//    // Display the pass or fail.
//    if(wrong <= 15) {
//
//        cout << "Congrats! You passed the test!" << endl;
//
//    } else {
//
//        cout << "I'm sorry, you did not pass the test this time..\n" << endl;
//
//    }
//
//    // Used to exit the program.
//    return 0;
//
//}
