#include<stdio.h>
void main()
{
	double n;
	scanf("%ld",&n);
	if(n>0)
	{
		printf("positive");
	}
	else if(n==0){
		printf("number is zero");
	}
	else if(n<0){
		printf("number is negative");
}