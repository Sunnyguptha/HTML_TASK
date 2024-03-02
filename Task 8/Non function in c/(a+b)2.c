#include<stdio.h>
int main()
{
  int a,b,result;
  a =10;
  b =20;
  result=(a*a)+(b*b)+(2*(a*b));
  printf("result=%d\n",result);
  a =60;
  b =80;
  result=(a*a)+(b*b)+(2*(a*b));
  printf("result=%d\n",result);
  a =20;
  b =870;
  result=(a*a)+(b*b)+(2*(a*b));
  printf("result=%d\n",result);
  return 0;
}