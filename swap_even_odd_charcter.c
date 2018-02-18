#include<stdio.h>
#include<string.h>
void main(){
    int i;
    char a[10000000],b,temp;
    gets(a);
    int l=strlen(a);
    for(i=0;i<l;i=i+2)
	{
        temp=a[i+1];
        a[i+1]=a[i];
        a[i]=temp;

    }
    puts(a);
}
