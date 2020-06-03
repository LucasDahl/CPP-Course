////This program has pointer parameters
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//string* getFullName();
//
//
//int main()
//{
//    string* name;
//
//    name = getFullName();
//
//    cout << "Here is a copy of your name:";
//    for (int i = 0; i < 3; i++)
//    {
//        cout << *(name + i) << " ";
//    }
//
//    cout << "\n";
//    system("pause");
//    return 0;
//}
//
//
//string* getFullName()
//{
//    string* fullName = new string[3];
//
//    cout << "Enter your first name : ";
//    getline(cin, fullName[0]);
//    cout << "Enter your middle name : ";
//    getline(cin, fullName[1]);
//    cout << "Enter your last name : ";
//    getline(cin, fullName[2]);
//
//    return fullName;
//
//}
