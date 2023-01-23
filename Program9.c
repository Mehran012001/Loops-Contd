#include<stdio.h>
int main()
{
    //Take 10 integers from keyboard using loop and print their average value on the screen.
  int sum = 0,i;
  for(i = 0;i<10;i++){
    int x;
    printf("Enter a number.\n");
    scanf("%d",&x);
    sum = sum+x;
  }
  printf("Average is %f\n",sum/10.0);
  return 0;
}