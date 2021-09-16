#include <stdio.h>



int main()
{
  int num1;
  int num2;
  int num3;

  int result = num1 + num2 + num3;


  printf("Enter a number\n");
  scanf("%f",  &num1);

  printf("Enter another number\n");
  scanf("%f",  &num2);

  printf("Enter a number\n");
  scanf("%f",  &num3);
  printf("%s\n", result);
  return 0;
}
