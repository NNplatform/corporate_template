#include <stdio.h>
main()
{
    float w,h,bmi;
    printf("Please Enter weight : ");
    scanf("%f",&w);

    printf("Please Enter height : ");
    scanf("%f",&h);

    bmi= w/(h/100)*(h/100);

    if(bmi>=18.5)
        printf("You are under weight");
    else if (bmi<=24.9)
        printf("You are normal weight");
    else if (bmi<=29.9)
        printf("You are over weight");
    else
        printf("You are obesity");

}
