#include <stdio.h>

struct Rectangle
{
  int length;
  int breadth;
};

void initialze(struct Rectangle *r, int l, int b)
{
  printf("%p\n", &*r);

  r->length = l;
  r->breadth = b;
}

int area(struct Rectangle *r)
{
  return (r->breadth * r->length);
}
void changeLength(struct Rectangle *r, int l)
{
  r->length = l;
}

int main()
{
  struct Rectangle r;
  initialze(&r, 10, 5);
  int ar = area(&r);
  changeLength(&r, 6);
  printf("%p\n", &r);

  return 0;
}
