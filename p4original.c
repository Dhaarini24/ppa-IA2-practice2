#include<stdio.h>

int input_array_size()
{
  int n;
  printf("Enter the array size\n");
  scanf("%d",&n);
  return n;
}

void input_array(int n,int a[n])
{
  int i;
  for(int i=0;i<n;i++)
  {
    printf("enter the inputs\n");
    scanf("%d",&a[i]);
  }
}

int is_composite(int n)
{
  for(int i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
     return 1;
    }
  }
return 0;
}
int sum_composite_numbers(int n,int a[])
{
  int sum=0;
   for(int i=0;i<n;i++)
   {
     if(is_composite(a[i]))
     {
       sum=sum+a[i];
     }
    }
  return sum;
}

void out_put(int sum)
{
  printf("the sum of composite numbers in the array of different numbers is %d",sum);
}

int main()
{ 
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_numbers(n,a);
  out_put(sum);
  return 0;
}