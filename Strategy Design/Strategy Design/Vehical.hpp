//
//  Vehical.hpp
//  Strategy Design
//
//  Created by Naveen Kumar on 10/03/24.
//

#ifndef Vehical_hpp
#define Vehical_hpp

#include <stdio.h>
#include "Drive Strategy/DriveStrategyInterface.h"

namespace Travel {
class Vehical{
public:
    DriveStratgy* strategyObj = nullptr;
    Vehical(){
        
    };
    Vehical(DriveStratgy* obj);
    
};
}
#endif /* Vehical_hpp */
