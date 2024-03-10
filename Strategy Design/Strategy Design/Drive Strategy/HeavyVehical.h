//
//  HeavyVehical.h
//  Strategy Design
//
//  Created by Naveen Kumar on 10/03/24.
//

#ifndef HeavyVehical_h
#define HeavyVehical_h


#include "DriveStrategyInterface.h"
using namespace std;

class HeavyVehical : public DriveStratgy{
    
public:
    void drive() {
        std::cout<<"Hey its HeavyVehical"<<endl;
    }
};

#endif /* HeavyWeight_h */
