//
//  Factory.cpp
//  Factory Design
//
//  Created by Naveen Kumar on 18/06/23.
//

#include "Factory.hpp"

Vehical*
Factory::getProduct(std::string VehicalType)
{
    Vehical* retVehicalPtr = nullptr;

    if(VehicalType == "Car"){
        retVehicalPtr = new Car();
    }
    else if(VehicalType == "Bike"){
        retVehicalPtr = new Bike();
    }
    else{
        std::cout<<"Please Enter the  Valid Type"<<std::endl;
    }
    return retVehicalPtr;
    
}
