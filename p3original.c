#include<stdio.h>
int input_number()
{
  int n;
  printf("enter the composite number\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int i;
  if(n==0||n==1)
  {
    return 2;
  }
  for(int i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
      return 1;
    }
  }
  return 0;
}
void output(int n,int composite)
{
  if(composite==1)
  {
  printf("%d is a composite number",n);
  }
  else if(composite ==0)
  {
   printf("%d is not a composite number",n);
  }
  else
  {
    printf("%d is neither prime nor composite number",n);
  }
}
int main()
{
  int n,composite,a;
  n=input_number();
  a=is_composite(n);
  output(n,a);
  return 0;
}