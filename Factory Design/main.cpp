//
//  main.cpp
//  Factory Design
//
//  Created by Naveen Kumar on 18/06/23.
//

#include <iostream>
#include <string>
#include "Factory.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    std::string vehicalName;
    
    
    while(1){
        std::cin>>vehicalName;
        if(vehicalName != "Car" && vehicalName != "Bike")
            std::cout<<"Enter the Valid Type Again !!"<<std::endl;
        else
            break;
    }
    Vehical* currVehical = Factory::getProduct(vehicalName);
    currVehical->createVehical();
    return 0;
}
