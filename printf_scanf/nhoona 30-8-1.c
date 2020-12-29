#include <stdio.h>
main()
{
    int sum,n;
    sum=0;
    n=3;
    do{
        sum=sum+n;
        n=n+3;
    }while(n<=1000);
    printf("summation = %d",sum);
}
