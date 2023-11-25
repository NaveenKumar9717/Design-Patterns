//
//  MushroomCheese.h
//  Decorator Pattern
//
//  Created by Naveen Kumar on 25/11/23.
//

#ifndef MushroomCheese_h
#define MushroomCheese_h


#include "ToppingDecorator.h"
#include "BasePizza.h"

class MushroomCheese : public ToppingDecorator{
    BasePizza* basePizza{nullptr};
    
public:
    MushroomCheese(BasePizza* pizza) : basePizza{pizza}
    {
        cout<<"Mushroom MushroomCheese Constructor"<<endl;
    }
    
    int cost() {   return  basePizza->cost() + 20; };
    
    
};

#endif /* MushroomCheese_h */
