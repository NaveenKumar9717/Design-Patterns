//
//  BasePizza.h
//  Decorator Pattern
//
//  Created by Naveen Kumar on 25/11/23.
//

#ifndef BasePizza_h
#define BasePizza_h
#include <iostream>
#include <string>
using namespace std;

class BasePizza{
public:
    virtual int cost() = 0;
};

#endif /* BasePizza_h */
