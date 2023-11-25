//
//  main.cpp
//  Decorator Pattern
//
//  Created by Naveen Kumar on 25/11/23.
//

#include <iostream>
#include "Mushroom.h"
#include "FarmHouse.h"
#include "MushroomCheese.h"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    FarmHouse* farmHouse = new FarmHouse();
    Mushroom* mushroomObj = new Mushroom(farmHouse);
    MushroomCheese* mushroomCheese = new MushroomCheese(mushroomObj);
    cout<<"Cost of Your Mushroom Pizza is  : "<< mushroomObj->cost()<<endl;
    cout<<"Cost of Your Mushroom Cheese Pizza is  : "<< mushroomCheese->cost()<<endl;
    
    return 0;
}
