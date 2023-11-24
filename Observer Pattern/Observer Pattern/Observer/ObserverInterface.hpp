//
//  ObserverInterface.hpp
//  Observer Pattern
//
//  Created by Naveen Kumar on 13/11/23.
//

#ifndef ObserverInterface_hpp
#define ObserverInterface_hpp

#include <stdio.h>

class ObserverInterface{
public :
    virtual void update() = 0;
};
#endif /* ObserverInterface_hpp */
