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
};

class InvoiceFileSaver{
    private: 
    std::vector<Invoice>mInvoiceList;

    public:
    InvoiceFileSaver(Invoice singleInvoice){
        mInvoiceList.push_back(singleInvoice);
    }  


    InvoiceFileSaver(Invoice singleInvoice){
        mInvoiceList.push_back(singleInvoice);
    }

    // This method has no relation to invoice management
    void saveToFile(const std::string& filename) {
        for(auto currentInvoice : mInvoiceList)
        {
            std::ofstream file(filename); //we can improve the name by indexing the
            if (file.is_open()) {
                file << "Invoice for " << currentInvoice.customerName << "\n";
                file << "Items:\n";
                for (const auto& item : currentInvoice.items) {
                    file << item << "\n";
                }
                file << "Total Price: " << currentInvoice.totalPrice << "\n";
                file.close();
            }
        }
       
    }

    void printInvoice() {

       for(auto currentInvoice : mInvoiceList)
        {
            std::cout << "Invoice for " << currentInvoice.customerName << "\n";
            std::cout << "Items:\n";
            for (const auto& item : currentInvoice.items) {
                std::cout << item << "\n";
            }
            std::cout << "Total Price: " << currentInvoice.totalPrice << "\n";
        } 
       
    }
}

int main() {
    Invoice invoice("John Doe");
    invoice.addItem("Laptop", 1200.0);
    invoice.addItem("Mouse", 25.0);

    // Saving the invoice to a file
    InvoiceFileSaver saver(invoice);
    saver.saveToFile("Naveen");
    saver.printInvoice();
    return 0;
}
