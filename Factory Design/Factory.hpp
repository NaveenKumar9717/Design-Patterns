//
//  Factory.hpp
//  Factory Design
//
//  Created by Naveen Kumar on 18/06/23.
//

#ifndef Factory_hpp
#define Factory_hpp

#include <stdio.h>
#include"Vehical.hpp"
#include"Car.hpp"
#include"Bike.hpp"

class Factory{
    public:
    static Vehical* getProduct(std::string VehicalType);
};

#endif /* Factory_hpp */
