//
//  main.cpp
//  Observer Pattern
//
//  Created by Naveen Kumar on 13/11/23.
//

#include <iostream>
#include "Observable/IphoneObservable.hpp"
#include "Observer/Observer.hpp"
int main(int argc, const char * argv[]) {
    // insert code here...
    IphoneObservable* iphoneObservable = new IphoneObservable();
    int observerCount  = 5;
    
    vector<Observer*>ObserversList;
    
    for(int i =0; i <observerCount; i++)
    {
        Observer* newObserver = new Observer(iphoneObservable);
        ObserversList.push_back(newObserver);
        iphoneObservable->add(newObserver);
    }
    
    iphoneObservable->setStock(5);
    
    std::cout << "Hello, World!\n";
    return 0;
}
