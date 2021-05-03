#include <stdio.h>

double taylor(double x, double n)
{
  static double f = 1, p = 1;
  double r;
  if (n == 0)
  {
    return 1;
  }
  else
  {
    r = taylor(x, n - 1);
    p = p * x;
    f = f * n;
  }

  return r + (p / f);
}
double t(int x, int n)
{
  double s = 1, num = 1, den = 1;
  int i;
  for (i = 1; i < n; i++)
  {
    num *= x;
    den *= i;
    s += num / den;
  }
  return s;
}

int main(int argc, char const *argv[])
{
  double n = 5.0;

  double x = taylor(1, 10);
  double y = t(1, 10);
  printf("%lf   %lf\n", x, y);

  return 0;
}
