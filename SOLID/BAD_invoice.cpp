#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Invoice {
public:
    std::string customerName;
    std::vector<std::string> items;
    double totalPrice;

    Invoice(std::string name) : customerName(name), totalPrice(0.0) {}

    void addItem(const std::string& item, double price) {
        items.push_back(item);
        totalPrice += price;
    }

    // This method has no relation to invoice management
    void saveToFile(const std::string& filename) {
        std::ofstream file(filename);
        if (file.is_open()) {
            file << "Invoice for " << customerName << "\n";
            file << "Items:\n";
            for (const auto& item : items) {
                file << item << "\n";
            }
            file << "Total Price: " << totalPrice << "\n";
            file.close();
        }
    }

    void printInvoice() {
        std::cout << "Invoice for " << customerName << "\n";
        std::cout << "Items:\n";
        for (const auto& item : items) {
            std::cout << item << "\n";
        }
        std::cout << "Total Price: " << totalPrice << "\n";
    }
};

int main() {
    Invoice invoice("John Doe");
    invoice.addItem("Laptop", 1200.0);
    invoice.addItem("Mouse", 25.0);

    // Saving the invoice to a file
    invoice.saveToFile("invoice.txt");

    return 0;
}
