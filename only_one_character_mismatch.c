#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    int i,j,c=0;
    gets(a);
    gets(b);
    int l=strlen(a);
    int m=strlen(b);
    if(l==m)
    {
    for(i=0;i<l;i++)
     {
         if(a[i]!=b[i]){
             c=c+1;
         }
     }   
    }
    if(c==1){
        printf("Yes");
    }
}