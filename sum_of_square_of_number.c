#include <stdio.h>
#include<math.h>
int main()
{
    int n, n1, r, result = 0;
    scanf("%d", &n);
    n1 = n;
    while (n1 != 0)
    {
        r = n1%10;
        result += pow(r,2);
        n1 /= 10;
    }
    printf("%d",result);
}