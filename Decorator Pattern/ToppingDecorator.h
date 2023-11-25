//
//  ToppingDecorator.h
//  Decorator Pattern
//
//  Created by Naveen Kumar on 25/11/23.
//

#ifndef ToppingDecorator_h
#define ToppingDecorator_h
#include "BasePizza.h"

class ToppingDecorator : public BasePizza{
    BasePizza* basePizza{nullptr};
    
public:
    virtual int cost() = 0;
};


#endif /* ToppingDecorator_h */
