#include <iostream>
using namespace std;
class PlasticSeller {
private:
    double costPrice;
    double sellingPrice;

public:
    // Default constructor
    PlasticSeller() {
        costPrice = 10.0; 
        sellingPrice = 12.0; 
    }

    double calculateProfit() {
        return sellingPrice - costPrice;
    }
};

int main() {
    PlasticSeller kiran;

    double profit = kiran.calculateProfit();
cout<< "Kiran earns Rs. " << profit << " on selling 1kg plastic." <<endl;

    return 0;
}

