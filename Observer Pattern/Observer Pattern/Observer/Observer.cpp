//
//  Observer.cpp
//  Observer Pattern
//
//  Created by Naveen Kumar on 13/11/23.
//

#include "Observer.hpp"
#include <iostream>
using namespace std;

Observer::Observer(StockObservable* ObsevablePtr) : mObservableInstance{ObsevablePtr}
{
    cout<<"Constructor!!!"<<endl;
}

Observer::~Observer()
{
    cout<<"Destructor!!!"<<endl;
}

void Observer::update()
{
    cout<<"Update your informed current Stock is : "<<mObservableInstance->getStockCount()<<endl;
}
