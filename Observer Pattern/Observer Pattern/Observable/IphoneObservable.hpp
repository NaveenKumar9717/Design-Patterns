//
//  IphoneObservable.hpp
//  Observer Pattern
//
//  Created by Naveen Kumar on 13/11/23.
//

#ifndef IphoneObservable_hpp
#define IphoneObservable_hpp

#include<vector>
#include<iostream>
#include<unordered_map>
using namespace std;

#include "IphoneObservable.hpp"
#include "StockObservable.hpp"

class IphoneObservable : public StockObservable{
private:
    vector<ObserverInterface*>mObserverList;
    

public:
    void setStock(int count);
    int getStockCount();
    IphoneObservable();
    void add(ObserverInterface* ObserverInstance);
    void remove(ObserverInterface* ObserverInstance) ;
    void notifyObserver() ;
    ~IphoneObservable();
};
#endif /* IphoneObservable_hpp */
