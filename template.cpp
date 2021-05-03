#include <iostream>

template <class T>
class Arithametic
{
private:
  T a;
  T b;

public:
  Arithametic(T a, T b);
  T sub();
  T add();
  ~Arithametic();
};

template <class T>
Arithametic<T>::Arithametic(T a, T b)
{
  std::cout << "in" << std::endl;

  this->a = a;
  this->b = b;
}
template <class T>
T Arithametic<T>::sub()
{
  T c = a - b;
  return c;
}
template <class T>
T Arithametic<T>::add()
{
  T c = a + b;
  return c;
}
template <class T>
Arithametic<T>::~Arithametic()
{
  std::cout << "out" << std::endl;
}

int main()
{
  Arithametic<float> a(2.9563451, 5.2545457);
  std::cout << a.add() << std::endl;
  std::cout << a.sub() << std::endl;
  return 0;
}