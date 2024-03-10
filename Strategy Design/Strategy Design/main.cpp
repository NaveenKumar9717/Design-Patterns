//
//  main.cpp
//  Strategy Design
//
//  Created by Naveen Kumar on 10/03/24.
//

#include <iostream>
#include "Drive Strategy/SportsVehical.h"
#include "Drive Strategy/HeavyVehical.h"
#include "Vehical.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    SportsVehical* ds = new SportsVehical();
    HeavyVehical* ds1 = new HeavyVehical();
    Travel::Vehical* vehicalObj = new Travel::Vehical(ds1);
    vehicalObj->strategyObj->drive();
    std::cout << "Hello, World!\n";
    return 0;
}
