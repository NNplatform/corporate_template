#include <stdio.h>
int main()
{
    printf("This is added from Local repository");
    int n=3,sum=0;
    do
    {
        sum=sum+n;
        n=n+3;
    }while(n<=1000);

    printf("summation : %d",sum);
    return 0;
}
