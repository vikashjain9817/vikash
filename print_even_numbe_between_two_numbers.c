#include<stdio.h>
#include<string.h>
void main()
{
	int i,start,end;
	scanf("%d%d",&start,&end);
	if(start%2==0){
	    for(i=start+2;i<end;i=i+2){
	    printf("%d ",i);
	    }
	}
	else{
	    for(i=start+1;i<end;i=i+2)
	    printf("%d ",i);
	}
}