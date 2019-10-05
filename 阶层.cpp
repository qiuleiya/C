#include <stdio.h>

 Print_Factorial ( const int N );

int main()
{
    int N;
				
    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}
void Print_Factorial(const int N){
	if(N<0)
	printf("Invalid input");
	else if(N==1)
	return 1;
	else
	return (N*Print_Factorial(N-1));
	
}
