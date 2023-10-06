#include <iostream>

using namespace std;

class Point {
public:
  int x, y;

  Point(int x = 0, int y = 0) : x(x), y(y) {}

  // Overload the unary minus operator.
  Point operator-() const {
    return Point(-x, -y);
  }

  void print() const {
    cout << "(" << x << ", " << y << ")" << endl;
  }
};

int main() {
  Point p(1, 2);
  cout << "Original point: ";
  p.print();

  Point n = -p;
  cout << "Negated point: ";
  n.print();

  return 0;
}
