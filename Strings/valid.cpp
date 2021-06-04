#include <iostream>

bool valid(char *A) {
  for (int i = 0; A[i] != '\0'; ++i) {
    if (!(A[i] >= 65 && A[i] <= 90) && !(A[i] >= 97 && A[i] <= 122) &&
        !(A[i] >= 48 && A[i] <= 57)) {
      return false;
    }
  }
  return true;
}

int main(int argc, char const *argv[]) {
  char name[] = "Karan321";
  bool validate = valid(name);
  if (validate) {
    std::cout << "valid";
    return 0;
  }
  std::cout << "invalid";

  return 0;
}