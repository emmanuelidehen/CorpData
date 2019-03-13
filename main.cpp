//
//  main.cpp
//  CorpData
//
//  Created by Emmanuel Idehen on 1/30/19.  (Due: 1/31/2019)
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//  CS204 Instructor: Marcus Golden. 
//  This program calculates a Corporate Sales Data divisions
//  and returns the total and average of each divisions
//  my Logic: i gave the user an option to choose their devision
/*
 UML diagram
 ......................................................
 .                                                    .
 . + CorpData()                                       .
 . + CorpData(double,double,double,double)            .
 . + calculator((double,double,double,double) : void  .
 . + ~CorpData()                                      .
 .                                                    .
 .                                                    .
 .                                                    .
 .                                                    .
 .                                                    .
 .                                                    .
 .                                                    .
 .                                                    .
 .                                                    .
 .                                                    .
 ......................................................
 Functions
 Contructor that take division name and four quaterly sale amount
 destructor
 Calculate Function
 specific Destrutor
 
 pusedo code:
 Decclare Variables
 Show User a Menu
 output "select your choice"
 input choice
 verify users input
 output"select Division"
 Input the four divisions
 calculate the average and total
 call function to return value!
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include "CorpData.h"

int main()
{
    //       Varaible declaration
    //============================================//
    double first,second,third,fourth,average,total;
    
    
    //       MENU
    //===========================================//
    string location=" ";
    int g = 0; //ask for input to know which divison name they choose!
    cout << "This is your MENU\n";
    cout << "================="<<endl;
    cout << "1 for East"<<endl;
    cout << "2 for North"<<endl;
    cout << "3 for West" <<endl;
    cout << "4 for South"<<endl;
    cout << "================="<<endl;
    cout << "       "<<endl;
    //     Take Input
    //===========================================//
    cout << "select your division" << endl;
    cin >> g;
    //    Check their input
    //==========================================//
    while (g <1 || g >4)
    {   cout<<"Enter a valid division number between 1-4 : ";
        cin >> g;
        switch (g) {
            case '1':
                //   East
                location = "east";
                break;
            case '2':
                //  North
                location = "north";
                break;
            case '3':
                //  West
                location = "West";
                break;
            case'4':
                //  South
                location = "South";
                break;
            default:
                break;
                
        }
        
        
    }
    
    
    //  Take Users Quater sales
    //=============================================//
    cout << "Enter the first amount: ";
    cin >> first;
    cout << "Enter the second amount: ";
    cin >> second;
    cout << "Enter the third amount: ";
    cin >> third;
    cout << "Enter th e fourth amount: ";
    cin >> fourth;
    //============================================//
    
    /* Function from the CorpData.cpp file are called.
     The Average and the total is calculated */
    
    
    //function call
    //=============================================//
    CorpData a(location,first,second,third,fourth);
    cout << "    "<<endl;
    cout <<"This is the Calculation for the " << g <<  " devision"<<endl;
    cout<<"average is: "<< a.average<<endl;
    cout <<"total is: "<< a.total<<endl;
    
    
    
    //   Trash
    //==================================================//
    // main ();
    
    
    
    
    return 0;
}
/*
 Test case (1)
 This is your MENU
 =================
 1 for East
 2 for North
 3 for West
 4 for South
 =================
 
 select your division
 1
 Enter the first amount: 3
 Enter the second amount: 6
 Enter the third amount: 7
 Enter th e fourth amount: 8
 
 This is the Calculation for the 1 devision
 average is: 6
 total is: 24
 Program ended with exit code: 0
 
 
 
 
 test case (2)
 
 This is your MENU
 =================
 1 for East
 2 for North
 3 for West
 4 for South
 =================
 
 select your division
 2
 Enter the first amount: 4
 Enter the second amount: 6
 Enter the third amount: 7
 Enter th e fourth amount: 5
 
 This is the Calculation for the 2 devision
 average is: 5.5
 total is: 22
 Program ended with exit code: 0
 
 test case (3)
 
 This is your MENU
 =================
 1 for East
 2 for North
 3 for West
 4 for South
 =================
 
 select your division
 2
 Enter the first amount: 4
 Enter the second amount: 6
 Enter the third amount: 7
 Enter th e fourth amount: 8
 
 This is the Calculation for the 2 devision
 average is: 6.25
 total is: 25
 Program ended with exit code: 0
 */
