#include <iostream>

int main(int argc, char const *argv[])
{
  int A[4][4] = {{0}, {0}, {0}, {0}};

  int *p[3];

  for (int i = 0; i < 3; i++)
  {
    p[i] = new int[3];
  }

  int **f;
  *f = new int[3];
  for (int i = 0; i < 3; i++)
  {
    f[i] = new int[3];
  }
  f[2][2] = 5;
  std::cout << f[2][2] << std::endl;

  return 0;
}
