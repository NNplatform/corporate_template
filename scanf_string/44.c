#include <stdio.h>
main()
{
    char ch ='s';
    char name[]="Suchawadee";
    char day[10]="Thrusday";
    int d=6,m=9,y=2018;
    float t=12.0512;
    printf("\t%c. come form %s\n",ch,name);
    printf("=====================================\n");
    printf("\tToday: %s.\n",day);
    printf("\tDate : %d/%d/%d \n",d,m,y);
    printf("\tTime : %.2f \n",t);
    printf("=====================================\n");
}
