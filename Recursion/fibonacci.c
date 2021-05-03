#include <stdio.h>

int fibo(int n)
{
  if (n <= 1)
  {
    return n;
  }
  return fibo(n - 2) + fibo(n - 1);
}

int fibL(int n)
{
  int t0 = 0, t1 = 1, res = 0;
  for (int i = 2; i <= n; i++)
  {
    res = t0 + t1;
    t0 = t1;
    t1 = res;
  }
  return res;
}
int F[200];

int init()
{
  for (int i = 0; i < sizeof(F) / sizeof(int); i++)
  {
    F[i] = -1;
  }
}

int fibM(int n)
{
  if (n <= 1)
  {
    F[n] = n;
    return n;
  }
  else
  {
    if (F[n - 2] == -1)
    {
      F[n - 2] = fibM(n - 2);
    }
    if (F[n - 1] == -1)
    {
      F[n - 1] = fibM(n - 1);
    }
    return F[n - 2] + F[n - 1];
  }
}

int main(int argc, char const *argv[])
{
  init();
  int x = fibM(80);
  printf("%d", x);
  return 0;
}
