#include <stdio.h>
main()
{
    int a=8,b=9;
    int a1,a2;
    float b1,b2;
    printf("A = %d \t B = %d\n",a,a/2);
    printf("Please Enter (a1,a2) : ");
    scanf("%d,%d",&a1,&a2);

    printf("Result minus = %d\n",a1-a2);
    printf("Please Enter (b1,b2): ");
    scanf("%f,%f",&b1,&b2);

    printf("Result plus = %.2f",b1+b2);
}
