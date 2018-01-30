#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b='.',l;
	gets(a);
	l=strlen(a);
	a[l]=b;
	puts(a);
}