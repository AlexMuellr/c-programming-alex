#include <stdio.h>
#include <string.h>

int main()
{
  int c;
  printf("I’m waiting for a character: ");
  c = getchar();
  printf("I waited for the '%c' character\n",c);
  return(0);
}
