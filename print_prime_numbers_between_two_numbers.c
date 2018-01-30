#include<stdio.h>
int check_prime(int );
void main()
{
	int start,end,a,i,f=0;
	scanf("%d%d",&start,&end);
	for(i=start+1;i<end;i++)
	{
	    f=check_prime(i);
	    if(f==0){
	        printf("%d ",i);
	    }
	}
}
int check_prime(int n)
{
    int j,flag=0;

    for(j=2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag =1;
            break;
        }
    }
    return flag;
}