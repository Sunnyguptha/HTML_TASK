#include <stdio.h>
//called funtion
void dosum(int n1,int n2,int n3)
{
  int result;
  result=n1+n2+n3;
  printf("%d\n",result);
}
int main()
{
  dosum(23,43,24);
  dosum(36,45,29);
  dosum(34,54,23);
  return 0;
}