//
//  IphoneObservable.cpp
//  Observer Pattern
//
//  Created by Naveen Kumar on 13/11/23.
//
#include<vector>
#include<iostream>
using namespace std;

#include "IphoneObservable.hpp"


IphoneObservable:: IphoneObservable()
{
    cout<<"IphoneConstructor"<<endl;
}

IphoneObservable:: ~IphoneObservable()
{
    cout<<"IphoneObservable Destrutir"<<endl;
}

int
IphoneObservable:: getStockCount()
{
   // cout<<"<<endl;
    return mStockCount;
}

void
IphoneObservable::setStock(int count)
{
   
    if(mStockCount ==0)
    {
        mStockCount += count;
        notifyObserver();
    }
    mStockCount += count;
}

void
IphoneObservable::add(ObserverInterface* ObserverInstance)
{
    mObserverList.push_back(ObserverInstance);
}


void
IphoneObservable::remove(ObserverInterface* ObserverInstance)
{
    
    for(int i = 0; i < mObserverList.size(); i++)
    {
        if(mObserverList[i] == ObserverInstance)
        {
            mObserverList[i] = nullptr;
        }
    }
    
}


void
IphoneObservable::notifyObserver()
{
    cout<<"Total Obsevers :"<<mObserverList.size()<<endl;
    for(auto i = 0; i < mObserverList.size(); i++)
    {
        if(mObserverList[i] != nullptr) mObserverList[i]->update();
    }
    
}
