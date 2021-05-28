#include <iostream>
#include <vector>

template <size_t n>
int max(int (&A)[n])
{
  int max = A[0];
  for (int i = 1; i < n; i++)
  {
    if (A[i] > max)
    {
      max = A[i];
    }
  }
  return max;
}
template <size_t n>
int min(int (&A)[n])
{
  int min = A[0];
  for (int i = 1; i < n; i++)
  {
    if (A[i] < min)
    {
      min = A[i];
    }
  }
  return min;
}
template <size_t n>
void multipleUnsorted(int (&A)[n])
{
  int sz = max(A);
  bool *Vec = new bool[sz];
  Vec[0] = true;
  std::cout << sizeof(Vec);
  for (int i = 0; i < n; i++)
  {
    Vec[A[i]] = true;
  }
  for (int i = min(A); i < sz; i++)
  {
    if (!Vec[i])
    {

      std::cout << i << std::endl;
    }
  }
}

int main(int argc, char const *argv[])
{
  // int A[10] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
  int A[11] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 25};

  multipleUnsorted(A);

  return 0;
}
