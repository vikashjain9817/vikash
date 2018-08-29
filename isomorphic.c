#include<stdio.h>
#include<string.h>
int a1[26]={0},b1[26]={0};
void freq(char a[], char b[]);
void sort(int a[]);
void main()
{
	char a[100],b[100];
	int flag=0,i;
	gets(a);
	gets(b);
	if(strlen(a)==strlen(b)){
		freq(a,b);
		sort(a1);
		sort(b1);
		for(i=0;i<26;i++){
			if(a1[i]!=b1[i]){
				flag = 1;
				break;
			}
		}
		if(flag==0)
			printf("yes");
		else
			printf("no");
	}
}
void freq(char string[],char string1[])
{
	int c=0,x;
	while (string[c] != '\0') {
      if (string[c] >= 'a' && string[c] <= 'z') {
         x = string[c] - 'a';
         a1[x]++;
      }
      c++;
   }
   c=0;
   while (string1[c] != '\0') {
      if (string1[c] >= 'a' && string1[c] <= 'z') {
         x = string1[c] - 'a';
         b1[x]++;
      }
 
      c++;
   }
}
void sort(int a[])
{
	int i,j,temp;
	for(i=0;i<25;i++)
	{
		for(j=0;j<26;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
