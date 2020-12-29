#include <stdio.h>
main()
    {
    int a,b;
      printf("InputA :");
      scanf("%d",&a);
      printf("InputB :");
      scanf("%d",&b);
      printf("      /\\\_/\\\n");
      printf("    =( 0 0 )=\n");
      printf("      > - <\n");
      printf("|-----------------|\n");
      printf("|%d + %d = %-6d   |\n",a,b,(a+b));

      printf("|%d - %d = %-6d   |\n",a,b,(a-b));

      printf("|%d * %d = %-6d   |\n",a,b,(a*b));

      printf("|%d / %d = %6.2f   |\n",a,b,(float)a/b);

      printf("|-----------------|\n");


    }
