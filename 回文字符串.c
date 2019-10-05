#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}
bool palindrome(char *s){
	int i,j,n,a=0;
	n=strlen(s);
	for(i=0,j=n-1;i<n/2;i++,j--)
	{
	   if(s[i]==s[j])
	   a++;
	   }
	if(a==(n/2)) 
	return true;
	else
	return false;
} 

