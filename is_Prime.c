#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,res=0;
      int i = 5;
    int w = 2;
    printf("Hello..............!\n Enter a number to check if Prime\n");

    scanf("%d",&n);

    if (n == 2){
        res=1;
        printf("True\n");
    }
    else if (n == 3){
        res=1;
        printf("True\n");
    }
    else if ((n % 2) == 0)
    {
        res=1;
        printf("False\n");
    }
    else if ((n % 3) == 0){
        res=1;
        printf("False\n");
    }
    else
    {
    while ((i * i )<= n)
        {
        if ((n % i) == 0)
        {
            res=1;
            printf("False\n");
            break;
        }
        i += w;
        w = 6 - w;
        }
    }
    if(res==0)
    {
            printf("True");
    }
    getchar();
    return 0;
}
