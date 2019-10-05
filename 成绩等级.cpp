#include<stdio.h>
int main()
{
	int N;
	scanf("%d\n",&N);
	int i,s[1001];
	int a=0,b=0,c=0,d=0,e=0;
	while(N!=EOF){
		
		for(i=0;i<N;i++){
			scanf("%d",&s[i]);
		
		if(s[i]>=90)
			a++;
		else if(s[i]>=80)
			b++;
		else if(s[i]>=70)
			c++;
		else if(s[i]>=60)
			d++;
		else
			e++;
		
	}
	printf("%d %d %d %d %d",a,b,c,d,e);
}
}
