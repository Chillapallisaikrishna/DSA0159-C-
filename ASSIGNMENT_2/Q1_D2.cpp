#include <iostream>

int main() {
    int age1 = 4200;
    int age2 = 8500;
    int age3 = 1000;
    int age4 = 1300;

    if (age1 > age2 && age1 > age3 && age1 > age4) {
        std::cout << "The oldest cave painting is " << age1 << " years old." << std::endl;
    } else if (age2 > age1 && age2 > age3 && age2 > age4) {
        std::cout << "The oldest cave painting is " << age2 << " years old." << std::endl;
    } else if (age3 > age1 && age3 > age2 && age3 > age4) {
        std::cout << "The oldest cave painting is " << age3 << " years old." << std::endl;
    } else {
        std::cout << "The oldest cave painting is " << age4 << " years old." << std::endl;
    }

    return 0;
}

