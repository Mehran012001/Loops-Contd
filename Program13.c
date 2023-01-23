//Write a C program to find greatest common divisor (GCD) or highest common factor (HCF) of given two numbers.

#include <stdio.h>
int main()
{

  int x,y,gcd,lcm,t,b,a;
  printf("Enter two integers\n");
  scanf("%d %d", &x, &y);
  a=x;
  b=y;
  while (b != 0)
  {
    t = b;
    b = a % b;
    a = t;
  }
  gcd = a;
  lcm = (x*y)/gcd;
  printf("GCD is %d and LCM is %d\n",gcd,lcm);
}