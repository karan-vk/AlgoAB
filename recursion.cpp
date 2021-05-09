#include <iostream>
void fun(int n)
{
  if (n > 0)
  {
    fun(n - 1);
    printf("%d\n", n);
  }
}

int main()
{
  int x = 4;
  fun(x);
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
