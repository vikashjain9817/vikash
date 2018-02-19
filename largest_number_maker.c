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
        if(a[i]==0){
            printf("0");
            exit(0);
        }
    }
    for (i = 0; i < n-1; i++)
    {
        swapped = 0;
        for (j = 0; j < n-i-1; j++)
        {
            if (a[j] < a[j+1])
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
       printf("%d",a[i]);
   }
   
}