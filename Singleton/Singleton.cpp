#include "Singleton.hpp"

Logger* 
Logger::getLogger(){
 //to reduce the use of redundent mutex;   
 if(mInstance == nullptr)
 {   
    mtx.lock();
    if(mInstance == nullptr){
      //to make multithream safe...
        mInstance = new Logger();
    }
    mtx.unlock();
 }   
    return mInstance;
}

void
Logger::Log(std::string str)
{
    std::cout<<"From SingleTon Example : "<< str<<std::endl;
}