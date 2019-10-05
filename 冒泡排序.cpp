#include<stdio.h>
main()
{
	int a[100];
	int i,j,n,temp;
	scanf("%d\n",&n); 
	for(i=0;i<n;i++)
		scanf("%d\n",&a[i]);
		for(j=0;j<n;j++){
			for(i=0;i<n;i++)
			if(a[i]>a[i+1]){
			   temp=a[i];
			   a[i]=a[i+1];
			   a[i+1]=temp;
			   }
		}
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
} 
