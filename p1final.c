#include<stdio.h>
void input(int*num1,int*den1,int*num2,int*den2)
{
  printf("enter the first fraction\n");
  scanf("%d%d",num1,den1);
  printf("enter the second fraction\n");
  scanf("%d%d",num2,den2);
}
void add(int num1,int den1,int num2,int den2,int*num3,int*den3)
{
 if(den1==den2)
 {
   *num3=num1+num2;
   *den3=den1;
 }
  else
 {
   float gcd,multiple1,multiple2,lcm;
   for(int i=1;i<=den1&&i<=den2;i++)
     if(den1%i==0&&den2%i==0)
     {
       gcd=i;
     }
   lcm=(den1*den2)/gcd;
   multiple1=lcm/den1;
   multiple2=lcm/den2;
   *num3=(num1*multiple1)+(num2*multiple2);
   *den3=lcm;
 }
}
void output(int num1,int den1,int num2,int den2,int num3,int den3)
{
  printf("(%d/%d)+(%d/%d)=(%d/%d)",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int a,b,c,d,e,f;
  input(&a,&b,&c,&d);
  add(a,b,c,d,&e,&f);
  output(a,b,c,d,e,f);
  return 0;
  }