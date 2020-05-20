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
//// Function Prototypes.
//void getJudgeData(double&);
//void calcScore(double[], int);
//double findLowest(double[], int);
//double findHighest(double[], int);
//
//// Main Function
//int main() {
//    
//    // Properties
//    double scores[5];
//    int numJud = 5;
//    
//    cout << "Enter each Judge's score.\n";
//    
//    // Read scores of five judges
//    for(int i = 0; i < 5; i++) {
//        
//        cout << "Enter Judge #"<< i + 1 <<" score: ";
//        getJudgeData(scores[i]);
//        
//    }
//    
//    // Calculate average
//    calcScore(scores, numJud);
//    
//    // Used to exit the program.
//    cout << endl;
//    return 0;
//    
//}
//
//
//// Function that reads score from user and validates it
//void getJudgeData(double& score) {
//    
//    // Read score to reference parameter
//    cin >> score;
//    
//    // Validate score and loop till it a valid score is entered
//    while(score < 0 || score > 10) {
//        
//        cout << "Invalid Value! Score value should be in range of 0 - 10.. Enter again: ";
//        cin >> score;
//        
//    }
//}
//
//// Function that calculates average of three scores
//void calcScore(double scores[], int numJud) {
//
//    // Properties
//    int lowFlag =- 1, highFlag =- 1;
//    double scoreSum = 0, scoreAverage;
//    double lowScore = findLowest(scores, numJud);
//    double highScore = findHighest(scores, numJud);
//    
//    // Dropping scores
//    for(int i = 0; i < numJud; i++) {
//        
//        // Dropping low score
//        if(scores[i] == lowScore && lowFlag == -1) {
//            
//            scores[i] = 0;
//            lowFlag = 0;
//            
//        }
//        
//        // Dropping high score
//        if(scores[i] == highScore && highFlag == -1) {
//            
//            scores[i] = 0;
//            highFlag = 0;
//            
//        }
//    }
//    
//    // Taking sum of the scores
//    for(int i = 0; i < numJud; i++) {
//        
//        scoreSum = scoreSum + scores[i];
//    }
//    
//    // Calculating average of the score
//    scoreAverage = scoreSum / 3;
//    
//    // Print Average score
//    cout<<"\nThe average score is: " << scoreAverage << endl;
//    cout << "The Highest score is: " << highScore << endl;
//    cout << "The Lowest score is: " << lowScore << endl;
//    
//}
//
//// Function that calculates lowest score
//double findLowest(double scores[], int numJud) {
//    
//    // Properties
//    double lowScore;
//    
//    // Initially Assume that starting score is the low score
//    lowScore = scores[0];
//    
//    // Loop through five scores to get lowest score
//    for(int i = 0; i < numJud; i++) {
//        
//        if(scores[i]<lowScore) {
//            
//            lowScore = scores[i];
//            
//        }
//            
//    }
//    
//    // Return lowest score
//    return lowScore;
//}
//
//// Function that calculates highest score
//double findHighest(double scores[], int numJud) {
//    
//    // Properties
//    double highScore;
//    
//    // Initially Assume that starting score is the high score
//    highScore = scores[0];
//    
//    // Loop through five scores to get highest score
//    for(int i = 0; i < numJud; i++) {
//        
//        if(scores[i] > highScore) {
//            
//            highScore = scores[i];
//            
//        }
//            
//    }
//    
//    // Return highest score
//    return highScore;
//    
//}
