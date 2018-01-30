#include<stdio.h>
void main()
{
	int n,a,i,f=0;
	scanf("%d",&n);
	a=n/2;
	for(i=2;i<a;i++)
	{
		if(n%i==0){
			f=1;
			break;
		}
	}
	if(f==1){
		printf("no");
	}
	else{
		printf("yes");
	}
}