#include <iostream>
#include <vector>

class Database {
public:
    void insertData(const std::string& data) {
        std::cout << "Inserting " << data << " into database." << std::endl;
    }
};

class DataProcessor {
public:
    void processData(const std::vector<std::string>& data, Database database) {
        for (const auto& d : data) {
            database.insertData(d);
        }
    }
};

int main() {
    std::vector<std::string> data {"data1", "data2", "data3"};
    Database database;
    DataProcessor processor;
    processor.processData(data, database);
    return 0;
}