#include "Singleton.hpp"

int main()
{
    ""
	Logger* logger{Logger::getLogger()};
    logger->Log("Naveen");
    return 0;
}

