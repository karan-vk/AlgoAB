#include <iostream>

int main(int argc, char const *argv[])
{
  int x[5] = {15, 16, 17, 18, 20};
  for (int i = 0; i < 5; i++)
  {
    int seed = x[i] - i;
    if (x[0] != seed)
    {
      std::cout << x[i] - (seed - x[0]) << std::endl;
      break;
    }
  }

  return 0;
}
