//
//  Vehical.cpp
//  Strategy Design
//
//  Created by Naveen Kumar on 10/03/24.
//

#include "Vehical.hpp"


namespace Travel {
Vehical::Vehical(DriveStratgy* strategy){
    strategyObj = strategy;
    std::cout<<"Constructor!!!"<<std::endl;
}
}
