#include<stdio.h>
void main()
{
    int i,a[100000],j,n,c=0,swapped,temp;
    printf("enter number of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (i = 0; i < n-1; i++)
    {
        swapped = 0;
        for (j = 0; j < n-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapped = 1;
            }
        }
     if (swapped == 0)
        break;
   }
    for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    printf("%d ",a[i]);
                    c=c+1;
                }
            }
        }
    if(c==0){
        printf("unique");
    }
}