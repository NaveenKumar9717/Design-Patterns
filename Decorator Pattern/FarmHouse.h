//
//  FarmHouse.h
//  Decorator Pattern
//
//  Created by Naveen Kumar on 25/11/23.
//

#ifndef FarmHouse_h
#define FarmHouse_h

#include "BasePizza.h"

class FarmHouse : public BasePizza{

public:
    int cost() { return 100; }
};


#endif /* FarmHouse_h */
