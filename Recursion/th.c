#include <stdio.h>

double taylorHL(int x, int n)
{
  double s = 1;
  for (; n > 0; n--)
  {
    s = 1 + (x * s / n);
  }
  return s;
}
double taylorR(int x, int n)
{
  static double s = 1;
  if (n == 0)
  {
    return s;
  }
  s = 1 + (x * s / n);
  return taylorR(x, n - 1);
}

int main()
{
  double x = taylorHL(3, 90);
  double y = taylorR(3, 90);
  printf("%lf  %lf", x, y);
  return 0;
}
