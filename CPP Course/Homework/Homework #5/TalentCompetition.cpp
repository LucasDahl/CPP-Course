//
//  TalentCompetition.cpp
//  CPP Course
//
//  Created by Lucas Dahl on 5/14/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Task
/*
 A particular talent competition has 5 judges, each of whom awards a score between 0 and 10 to each performer. Fractional scores, such as 8.3, are allowed. A performer’s final score is determined by dropping the highest and lowest score received, then averaging the 3 remaining scores.

 Write a program that uses these rules to calculate and display a contestant’s score. It should include the following functions:

 void getJudgeData( )- should ask the user for a judge’s score, store it in a reference parameter variable, and validate it. This function should be called by the main once for each of the 5 judges.
 double calcScore( )-should calculate and return the average of the 3 scores that remain after dropping the highest and lowest scores the performer received. This function should be called just once by main and should be passed the 5 scores.
 The last two functions, described below, should be called by calcScore( ), which uses the returned information to determine which of the scores to drop.

 double findLowest( )- should find and return the lowest of the 5 scores passed to it.
 double findHighest( )- should find and return the highest of the 5 scores passed to it.
 Input Validation: Do not accept judge scores lower than 0 or higher than 10.
 */

//#include <iostream>
//
//using namespace std;
//
//int main() {
//    
//    
//    // Used to exit the program.
//    return 0;
//    
//}
