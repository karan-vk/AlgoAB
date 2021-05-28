#include <iostream>

template <size_t n>
void missingMultiple(int (&A)[n])
{
  int diff = A[0];
  int size = sizeof(*A);
  std::cout << size << std::endl
            << std::endl;
  for (int i = 0; i < 11; i++)
  {
    int seed = A[i] - i;
    if (diff != seed)
    {
      while (diff < A[i] - i)
      {
        std::cout << i + diff << std::endl;
        diff++;
      }
    }
  }
}

int main(int argc, char const *argv[])
{

  int A[11] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 25};
  missingMultiple(A);

  return 0;
}
