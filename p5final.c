#include<stdio.h>
#include <math.h>
int input_array_size()
{
  int n;
  printf("enter the size of the array\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      a[i]=i;
    }
  a[1]=0;
}
void erotosthenes_sieve(int n,int a[n])
{
  int i=0;
  while (i<sqrt(n))
  {
      while(a[i]!=0)
      {
        int f;
        for(f=i+i;f<n;f+=i)
        {
         a[f]=0;
        }
        break;
      }
    i++;  
  }
  
}
void out_put(int n,int a[n])
{
  int i;
  for(i=2;i<n;i++)
    {
      while(a[i]!=0)
        {
          printf("%d,",a[i]);
          break;
        }
    }
}
int main()
{
  int x;
  x=input_array_size();
  int y[x];
  input_array(x,y);
  erotosthenes_sieve(x,y);
  out_put(x,y);
  return 0;
}