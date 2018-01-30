#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],i,l,temp;
	gets(a);
	l=strlen(a);
	for(i=0;i<l/2;i++){
		temp=a[l-i-1];
		a[l-i-1]=a[i];
		a[i]=temp;
	}
	puts(a);
}
		