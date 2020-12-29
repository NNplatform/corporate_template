#include <stdio.h>
main()
{
char name[25];
char grade;
int year;
float score;

    printf("Name : ");
    scanf("%s",name);

    printf("Year : ");
    scanf("%d",&year);

    printf("Score : ");
    scanf("%f",&score);

    printf("Grade : ");
    scanf(" %c",&grade);

    printf("I'm %s , Year %d\n",name,year);
     printf("My score is %.1f and I get %c",score,grade);

}
