#include<stdio.h>
int prime(int );
void main()
{
    int l,m,a,i,c=0;
    scanf("%d",&l);
    scanf("%d",&m);
    for(i=l;i<=m;i++)
    {
        a=prime(i);
        if(a==1){
            c=c+1;
        }
    } 
    printf("%d",c);
}
int prime(int n)
{
    int p,i;
    p=n/2;
    for(i=2;i<=p;i++)
    {
        if(n%i==0){
            return 0;
        }
    }
    return(1);
}