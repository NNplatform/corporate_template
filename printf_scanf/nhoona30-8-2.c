#include <stdio.h>
main()
{
float w,h,bmi;
    printf("weight:");
    scanf("%f",&w);
    printf("height :");
    scanf("%f",&h);
    bmi = w/((h/100)*(h/100));
if (bmi>=18.5)
        printf("under weight");
else if (bmi<=24.9)
    printf("normal weight");
else if (bmi<=29.9)
        printf("over weight");
else
        printf("obesity");

}
