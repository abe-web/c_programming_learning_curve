/* float.c */
#include <stdio.h>

int main()
{
  float pi, r, answer;

  printf("what is the radius in centimeters?\n");
  scanf("%f", &r);

  pi = 3.14;

  answer = r * r * pi;

  printf("The area is %f\n", answer);

  return 0;
}
