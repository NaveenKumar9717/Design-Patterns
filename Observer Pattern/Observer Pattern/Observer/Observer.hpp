//
//  Observer.hpp
//  Observer Pattern
//
//  Created by Naveen Kumar on 13/11/23.
//

#ifndef Observer_hpp
#define Observer_hpp

#include <stdio.h>
#include "ObserverInterface.hpp"
#include "../Observable/StockObservable.hpp"

class Observer : public ObserverInterface{
public:
    StockObservable* mObservableInstance = nullptr;
    Observer(StockObservable* ObsevablePtr);
    ~Observer();
    void update();
};
#endif /* Observer_hpp */
