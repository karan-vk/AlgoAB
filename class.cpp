#include <iostream>

class Rectangle
{
private:
  int length;
  int breadth;

public:
  Rectangle() { length = breadth = 1; }
  Rectangle(int l, int b);
  int area();
  int perimeter();
  int getLength() { return length; }
  void setLength(int l) { length = l; }
};

Rectangle::Rectangle(int l, int b)
{
  length = l;
  breadth = b;
};

int Rectangle::area()
{
  return length * breadth;
}

int Rectangle::perimeter()
{
  return 2 * (length + breadth);
}

int main()
{
  Rectangle r(10, 5);
  std::cout << r.area() << std::endl;
  std::cout << r.perimeter() << std::endl;
  std::cout << r.getLength() << std::endl;
  r.setLength(20);
  std::cout << r.getLength() << std::endl;

  std::cin;
  return 0;
}
