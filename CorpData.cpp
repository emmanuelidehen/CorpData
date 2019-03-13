//
//  CorpData.cpp
//  CorpData
//
//  Created by Emmanuel Idehen on 1/30/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//

#include <stdio.h>
#include "CorpData.h"
#include <iostream>
#include <string>
using namespace std;
//Default
CorpData::CorpData()
{
    //Default Constructor to Init!
    string east = "East";
    string west = "West";
    string north = "North";
    string south = "South";
}
//Specific
CorpData::CorpData(string name1, double first1, double second1, double third1, double fourth1)
{
    //Spec Constructor: Variable Init!
    name = name1;
    first = first1;
    second = second1;
    third = third1;
    fourth = fourth1;
    calculate(first, second, third, fourth);
    
    
}
//Calculate
double CorpData::calculate (double first, double second, double third, double fourth)
{
    
    //cal function calculates the total and average!
    total = first + second + third + fourth;
    average = (total/4);
    return 0;
    
    
    
}


// Destructor
CorpData::~CorpData()
{
    
}
