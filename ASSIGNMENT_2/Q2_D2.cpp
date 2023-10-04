#include <iostream>
using namespace std;
class Bus {
private:
    int capacity;

public:
    Bus(int capacity) {
        this->capacity = capacity;
    }

    int calculateTotalCapacity(int numberOfBuses) {
        return capacity * numberOfBuses;
    }
};

int main() {
    int busCapacity = 48;
    int numberOfBuses = 3;

    Bus bus(busCapacity);
    int totalCapacity = bus.calculateTotalCapacity(numberOfBuses);

    cout << "Three buses can carry a total of " << totalCapacity << " children." <<endl;

    return 0;
}

