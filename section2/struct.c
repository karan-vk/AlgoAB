#include <stdio.h>
#include <stdlib.h>
struct Rectangle
{
  int length;
  int breadth;
};
void area(struct Rectangle r)
{
  int x = r.length * r.breadth;
  printf("%d\n", x);
}

int main()
{
  struct Rectangle r = {10, 5};
  struct Rectangle *p = &r;
  p->length = 20;

  struct Rectangle *g;
  g = (struct Rectangle *)malloc(sizeof(struct Rectangle));
  g->breadth = 10;
  g->length = 5;
  area(*g);
}