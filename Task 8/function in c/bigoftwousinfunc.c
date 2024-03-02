#include <stdio.h>
void doBigOfTwo(int n1,int n2)
{
  int result;
  result=n1>n2?n1:n2;
  printf("%d\n",result);
}
int main()
{
  doBigOfTwo(23,45);
  doBigOfTwo(64,23);
  return 0;
}