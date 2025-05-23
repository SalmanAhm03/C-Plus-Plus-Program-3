//
//  main.cpp
//  CSCI 240 Program 3
//
//  Created by Salman Ahmed on 9/14/21.
//

/***************************************************************
CSCI 240         Program 0     Fall 2021

Programmer: Salman Ahmed

Section: Section 2

Date Due: 9/17/2021

Purpose: For this assignment, write a program that will
       calculate the quiz and test portion of a student's
       CSCI 240 grade.
***************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int tpEarned, tpAvailable, qTaken, qpEarned, sumOfLow = 0;          //Define variables
    double tqAverage = 0;
    
    
    cout << "How many test point were earned? ";            //Print initial statement as well as user input
    cin >> tpEarned;
    
    if (tpEarned < 0 )                           //If statement for particular error
    {
        cout << "*** Error: Test points earned cannot be negative ***" << endl;
        cout << "Re-enter the number of test points earned: ";
        cin >> tpEarned;
    }
    
    
    cout << "\nHow many test points were available? ";          //Print initial statement as well as user input
    cin >> tpAvailable;
    
    if (tpAvailable < 0)                        //If statement for particular error
    {
        cout << "*** Error: Available test points cannot be negative ***" << endl;
        cout << "Re-enter the number of test points available: ";
        cin >> tpAvailable;
    }
    
    if (tpAvailable < tpEarned)                 //If statement for particular error
    {
        cout << "*** Error: Available test points cannot be less than points earned ***" << endl;
        cout << "Re-enter the number of test points available: ";
        cin >> tpAvailable;
    }
    
    
    cout << "\nHow many quizzes were taken? ";          //Print initial statement as well as user input
    cin >> qTaken;
    
    if (qTaken < 0)                         //If statement for particular error
    {
        cout << "*** Error: The number of quizzes taken cannot be negative ***" << endl;
        cout << "Re-enter the number of quizzes taken: ";
        cin >> qTaken;
    }
        
    if (qTaken > 12)                        //If statement for particular error
    {
        cout << "*** Error: The number of quizzes taken cannot be greater than 12 ***" << endl;
        cout << "Re-enter the number of quizzes taken: ";
        cin >> qTaken;
    }
       
    
    cout << "\nHow many quiz points were earned? ";         //Print initial statement as well as user input
    cin >> qpEarned;
    
    if (qpEarned > qTaken * 10)             //If statement for particular error
    {
        cout << "*** Error: Quiz points earned cannot be greater than " << qTaken * 10 << " ***" << endl;
        cout << "Re-enter the number of quiz points earned: ";
        cin >> qpEarned;
    }
    
   
    if (qTaken > 2)                 //If statement for particular condition
    {
        cout << "\nWhat is the sum of your two lowest quiz scores? ";
        cin >> sumOfLow;
    }
    
    if (sumOfLow > 20)                      //If statement for particular error
    {
        cout << "*** Error: The sum of your two lowest quiz scores cannot be greater than 20 ***"<< endl;
        cout << "Re-enter the sum of your two lowest quiz scores: " << endl;
        cin >> sumOfLow;
    }
    
    

    if (qTaken > 2)                 //If statement to determine which equation to use and print out statement with result
    {
        tqAverage =(double) (tpEarned + qpEarned - sumOfLow) / (tpAvailable + (10 * (qTaken - 2))) * 100;
        cout << "\n\nTest/Quiz Average: " << setiosflags( ios:: fixed ) << setprecision(2) << tqAverage << endl;
    }
    
    if (qTaken <= 2)
    {
        tqAverage =(double) (tpEarned + qpEarned) / (tpAvailable + (10 * qTaken)) * 100;
        cout << "\n\nTest/Quiz Average: " << setiosflags( ios:: fixed ) << setprecision(2) << tqAverage << endl;
    }
    
    
    if (tqAverage < 55)                 //Extra credit statement using an if statement and printing output/result
    {
        cout << "\nThe current average is not high enough to pass the quiz and test requirement." << endl << endl << endl << endl;
    }

    if (tqAverage >= 55)
    {
        cout << "\nThe current average satisfies the quiz and test requirement." << endl << endl << endl << endl;
    }
    
    
    
    return 0;
}
