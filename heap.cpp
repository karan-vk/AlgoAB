#include <iostream>
int main(int argc, char const* argv[]) {
  int* p;
  p = new int[5];
  for (int i = 0; i < 5; i++) {
    p[i] = i * 7;
    std::cout << p[i] << std::endl;
  }
  p = NULL;

  return 0;
}
