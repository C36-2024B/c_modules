#include <stdio.h>

float getHeight();

int main()
{
  float height = getHeight();
  printf("Height: %.2f", height);

  return 0;
}

float getHeight()
{
  return 1.70;
}