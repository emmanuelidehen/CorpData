//
//  CorpData.h
//  CorpData
//
//  Created by Emmanuel Idehen on 1/27/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//
#include <string>

#ifndef CorpData_h
#define CorpData_h

//By default,a struct is public:
struct CorpData{
    //string didn't work without an std:://
    //==================================//
    std::string name;
    
    // the four devision
    //=============================
    double
    first,
    second,
    third,
    fourth,
    total,
    average;
    
    //================================
    std ::string east = "East";
    std:: string west = "West";
    std:: string north = "North";
    std::string south = "South";
    
    //====================================
    CorpData();
    ~CorpData();
    CorpData(std::string, double, double, double, double);
    int getCorpData();
    void setCorpData(int, double);
    void divisionsales();
    double calculate(double,double,double,double);
    //============================================
};




#endif /* CorpData_h */
