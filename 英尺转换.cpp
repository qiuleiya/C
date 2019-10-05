#include<stdio.h>
int main()
{
  float foot,inch;
  int num;
  scanf("%d",&num);
  foot=(num/100.0)/0.3048;
  inch=foot*12-(int)foot*12;
  printf("%d,%d",(int)foot,(int)inch);
}
   
