//
//  SportsVehical.h
//  Strategy Design
//
//  Created by Naveen Kumar on 10/03/24.
//
#ifndef SportsVehical_h
#define SportsVehical_h

#include "DriveStrategyInterface.h"
using namespace std;

class SportsVehical : public DriveStratgy{
    
public:
    void drive() {
        std::cout<<"Hey its SportsVehical"<<endl;
    }
};

#endif /* SportsVehical_h */
