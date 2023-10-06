#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int a = 5, b = 10, c = 15;

    cout << "The sum of " << a << " and " << b << " is " << add(a, b) << endl;
    cout << "The sum of " << a << ", " << b << ", and " << c << " is " << add(a, b, c) << endl;

    return 0;
}

