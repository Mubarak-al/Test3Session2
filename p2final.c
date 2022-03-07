#include<stdio.h>
typedef struct fraction
{
int num,den;
}Fraction;
Fraction input_fraction()
{
  Fraction f;
  printf("enter the fraction\n");
  scanf("%d%d",&f.num,&f.den);
  return f;
}
Fraction Largest_fraction(Fraction f1,Fraction f2,Fraction f3 )
{
  int a,b,c;
  int sden=f1.den*f2.den*f3.den;
  a=f1.num*sden/f1.den;
  b=f2.num*sden/f2.den;
  c=f3.num*sden/f3.den;
  if(a>b && a>c)
  {
    return f1;
  }
  else if(b>c && b>a)
  {
    return f2; 
  }
  else
  {
    return f3;
  }
}
void output(Fraction f1,Fraction f2,Fraction f3,Fraction largest)
{
  printf("the largest of %d/%d , %d/%d and %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,largest.num,largest.den);
}
int main()
{
  Fraction f1,f2,f3,largest;
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  largest=Largest_fraction(f1,f2,f3);
  output(f1,f2,f3,largest);
  return 0;
  }
