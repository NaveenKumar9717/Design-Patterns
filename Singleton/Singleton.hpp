#include <iostream>
#include <string>
#include <mutex>

class Logger{

    Logger();
    static Logger* mInstance;
    static std::mutex mtx;
    Logger();
    Logger(const Logger &);
    Logger operator=(const Logger &);
    public :
    static Logger* getLogger();
    void Log(std::string str);

};

