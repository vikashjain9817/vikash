#include<stdio.h>
void main()
{
	int a[100000],i,j=0,n;
	printf("enter number of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		if(a[i]==i){
			printf("%d",a[i]);
			j=1;
		}
	}
	if(j==0){
		printf("%d",-1);
	}
}