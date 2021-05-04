#include <iostream>

int main(int argc, char const *argv[])
{
  int A[6] = {0};
  int *p;
  p = new int[5];
  p[0] = 15;
  p[1] = 2565;
  delete[] p;
  return 0;
}
