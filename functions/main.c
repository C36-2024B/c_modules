#include <stdio.h>
#include <string.h>

#define MIN_AGE_TO_DRINK 18

int getAge()
{
  return MIN_AGE_TO_DRINK;
}

float getHeight()
{
  return 1.70;
}

void printHeader()
{
  printf("---- Summary ----\n");
}

char getGenre()
{
  return 'M';
}

char *getName()
{
  return "Erick";
}

int main()
{
  int age = getAge();
  float height = getHeight();
  char genre = getGenre();
  char *name = getName();

  printHeader();
  printf("Name: %s\n", name);
  printf("Age: %d\n", age);
  printf("Height: %.2f\n", height);
  printf("Genre: %c", genre);

  return 0;
}