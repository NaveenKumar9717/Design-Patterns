//
//  Mushroom.h
//  Decorator Pattern
//
//  Created by Naveen Kumar on 25/11/23.
//

#ifndef Mushroom_h
#define Mushroom_h

#include "ToppingDecorator.h"
#include "BasePizza.h"

class Mushroom : public ToppingDecorator{
    BasePizza* basePizza{nullptr};
    
public:
    Mushroom(BasePizza* pizza) : basePizza{pizza}
    {
        cout<<"Mushroom Constructor"<<endl;
    }
    
    int cost() {   return  basePizza->cost() + 20; };
    
    
};

#endif /* Mushroom_h */
