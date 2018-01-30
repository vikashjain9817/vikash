#include<stdio.h>
void main()
{
	int n,r,n_reverse=0,orginal;
	scanf("%d",&n);
	orginal=n;
	while(n!=0){
		r=n%10;
		n_reverse=n_reverse*10+r;
		n=n/10;
	}
	printf("%d",n_reverse);
}