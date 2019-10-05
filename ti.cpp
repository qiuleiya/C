#include<stdio.h>
main()
{ int k=1;
  switch(++k)
  { default:
     printf("%d", k);
   case 1:
     printf("%d", k);
     break;
   case 2:
     printf("%d", 2*k);
   case 3:
     printf("%d", 3*k);
     break;
  }
}
