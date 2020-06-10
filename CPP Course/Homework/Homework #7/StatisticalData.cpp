//
//  StatisticalData.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 6/5/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: Task
/*
 
 Write a program that can be used to gather statistical data about the number of movies college students see in a month. The program should perform the following steps:
 Ask the user how many students were surveyed. An array of integers with this many elements should then be dynamically allocated..
 Allow the user to enter the number of movies each student saw into the array.
 Calculate and display the total and average of the values entered.
 Input validation: Do not accept negative numbers for input.
 */

// Header
//#include <iostream>
//using namespace std;
//
//double median(int *, int);
//int   get_mode(int *, int);
//int *create_array(int);
//void getinfo(int *, int);
//void sort(int [], int);
//double average(int *, int);
//int getrange(int *,int);
//
//int main()
//{ int *dyn_array;
//   int students;
//   int mode,i,range;
//    float avrg;
//   do
//    {cout << "How many students will you enter? ";
//    cin >> students;
//    }while ( students <= 0 );
//   dyn_array = create_array( students );
//      getinfo(dyn_array, students);
//   cout<<"\nThe array is:\n";
//   for(i=0;i<students;i++)
//       cout<<"student "<<i+1<<" saw "<<*(dyn_array+i)<<" movies.\n";
//      sort(dyn_array, students);
//   cout << "\nthe median is "<<median(dyn_array, students) << endl;
//   cout << "the average is "<<average(dyn_array, students) << endl;
//   mode = get_mode(dyn_array, students);
//   if (mode == -1)
//         cout << "no mode.\n";
//   else
//         cout << "The mode is " << mode << endl;
//         cout<<"The range of movies seen is "<<getrange(dyn_array,students)<<endl;
//   delete [] dyn_array;
//system("pause");
//   return 0;
//}
//void getinfo(int a[], int n)
//{int i;
//   for (i= 0;i<n;i++)
//      {do
//         {cout<<"How many movies did student "<<(i+1)<< " see? ";
//          cin >> a[i];
//             if(a[i]<0||a[i]>100)
//                 cout<<"Invalid entry, Please enteer a value between 0 and 100\n";
//          }while(a[i]<0||a[i]>100);
//      }
//}
//double average(int a[], int students)
//{ int tot = 0,i;
//   double avg;
//   for (i= 0;i<students; i++)
//       tot += a[i];
//   avg=(double)tot/students;
//   return avg;
//}
//int *create_array(int n)
//{ int *ptr;
//   ptr = new int[n];
//   return ptr;
//}
//void sort(int a[], int n)
//{ int i,j,t;
//for(i=0;i<n-1;i++)
//     for(j=i;j<n;j++)
//        if(a[i]>a[j])
//           {t=a[i];
//           a[i]=a[j];
//           a[j]=t;
//           }
//}
//double median(int *a, int n)
//{ int m1,m2;
//   if (n%2==0)
//        {m1=n/2;
//         m2=(n/2)-1;
//         return((*(a+m1)+*(a+m2))/2.);
//        }
//   else
//       
//   return *(a+(n/2));
//}
//int get_mode(int *a, int n)
//{
//   int *count,most,index,i,j;
//   count= create_array(n);
//   for (i= 0;i< n;i++)
//         count[i] = 0;
//   for(i=0;i<n;i++)
//      {for(j=0;j<n;j++)
//           {if (*(a+j)==*(a +i))
//               (*(count+i))++;
//            }
//      }
//   most=*count;
//   index=0;
//   for (i=1;i<n;i++)
//      {if (*(count+i) >most)
//      {most=*(count+i);
//       index=i;
//      }
//   }
//   if (most == 1)
//         return -1;
//   else
//         return *(a+index);
//}
//int getrange(int* a,int n)
//   {return a[n-1]-a[0];
//   }
