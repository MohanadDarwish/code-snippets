/*Every integer can be written in the form of 6n,6n+1,6n+2,6n+3,6n+46n,6n+1,6n+2,6n+3,6n+4 or 6n+56n+5.
* It is quite evident that 6n6n is always divisible by 6, 6n+1 may be prime, 6n+26n+2 will always
* be divisible by 2, 6n+36n+3 by 3, and 6n+46n+4 by 2. 6n+56n+5 may be prime. 
* Our candidates for primality are therefore 6n+16n+1 and 6n+56n+5. We can then see that 6n+5=6(n+1)−1=6x−16n+5=6(n+1)−1=6x−1 
* Therefore, every prime can be written in the form of 6n±1.
*/
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
    while ((i * i )<= n)    //6n+1 6n-1
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
