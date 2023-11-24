//
//  Header.h
//  Observer Pattern
//
//  Created by Naveen Kumar on 13/11/23.
//

#ifndef StockObservable_h
#define StockObservable_h

#include "../Observer/ObserverInterface.hpp"

class StockObservable{
protected:
    int mStockCount = 0;
public:
    
    virtual void add(ObserverInterface* ObserverInstance) = 0;
    virtual void remove(ObserverInterface* ObserverInstance) = 0;
    virtual void notifyObserver() = 0;
    virtual void setStock(int count) = 0;
    virtual int getStockCount() = 0;
    
};

#endif /* Header_h */
