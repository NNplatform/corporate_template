#include <stdio.h>
main()
{
    double x=12.34;
        printf("%4d %4o %4x %4X\n",163,63,63,63);
        printf("%-4d %4o %-4x %-4X \n");
        printf("%f %e %E %.2f\n",x,x,x,x);

    char ch='S';
    char name[]="Suchawadee";
    int d=6,m=9,y=2018;
    float time=12.0512;
    char day[15]="Thursday";

        printf("\t%c. comes form %s \n",ch,name); 
        printf("====================================\n");
        printf("\tToday: %s.\n",day);
        printf("\tDate : %d/ %d/ %d\n",d,m,y);
        printf("\tTime : %.2f\n",time);
        printf("====================================");

}
