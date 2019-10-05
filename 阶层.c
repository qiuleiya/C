#include <stdio.h>

void Print_Factorial ( const int N );

int main()
{
    int N;
				
    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}
void Print_Factorial ( const int N ){
 	double product=1;
 	int i;
	 if(N<0)
  		printf("Invalid input\n"); 
		else{
 			 for(i=1;i<=N;i++)
   				product=product*i;
  				printf("%.0f\n", product);
 }
}
/*int Print_Factorial(const int N){
	if(N<0)
	printf("Invalid input");
	else if(N==1)
	return 1;
	else
	return (N*Print_Factorial(N-1));
	
}*/
