#include <stdio.h>
int main()
{
    
    int n=3,sum=0;
    do
    {
        sum=sum+n;
        n=n+3;
    }while(n<=1000);

    printf("summation : %d",sum);
    return 0;
}
