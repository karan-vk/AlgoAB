#include <cstdio>
#include <iostream>
#include <ostream>

int main(int argc, char const* argv[]) {
  char temp;
  temp = 'A';
  char name[] = {'J', 'O', 'H', 'N', '\0'};
  std::printf("%d\n", temp);
  std::cout << name << std::endl;
  std::cout << temp << std::endl;
  return 0;
}