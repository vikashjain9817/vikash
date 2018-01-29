#include <stdio.h>
void main()
{
int yr;
  scanf ("%d", &yr);

  if (yr%4 == 0) {

      if(yr%100 == 0) {
      
          if(yr%400 == 0)
             printf("yes");
          else
             printf("no");
      }

      else {
             printf ("yes");
      }
  }
  else
      printf("no");
  
}