#include <stdio.h>
main()
{
    char name[20];
    int year;
    float score;
    char grade;
    printf("Name :");
    scanf("%s",name);
    printf("Year :");
    scanf("%d",&year);
    printf("Score :");
    scanf("%f",&score);
    printf("Grade :");
    scanf(" %c",&grade);
      printf("I'm %s,year %d.\n",name,year);
        printf("My score is %.1f and i get %c.\n",score,grade);


    getch();

    }
