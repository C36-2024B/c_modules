#include <stdio.h>

int GLOBAL_VARIABLE = 12;

void getGlobalVariable();

int main()
{
  printf("El valor de la variable global es %i\n", GLOBAL_VARIABLE);

  getGlobalVariable();

  return 0;
}

void getGlobalVariable()
{
  int localVariable = 10;
  printf("El valor sigue siendo: %i\n", GLOBAL_VARIABLE);
  printf("Variable local es %i", localVariable);
}