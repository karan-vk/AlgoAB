#include <iostream>

void singleMissing(int a[], int size)
{
  for (int i = 0; i < size; i++)
  {
    if (a[i] != a[i + 1] + 1)
    {
      std::cout << ++a[i];
      break;
    }
  }
}

int totsum(int start, int stop)
{
  return ((stop * (stop + 1)) / 2) - (((start - 1) * (start)) / 2);
}

int main(int argc, char const *argv[])
{
  int A[20] = {6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17};
  int sum = 0;
  for (int i = 0; i < 11; i++)
  {
    sum += A[i];
  }
  int totasum = totsum(6, 17);
  if (totasum == sum)
  {
    std::cout << "the code is sequential";
  }
  else
  {
    std::cout << totasum - sum;
  }
}
