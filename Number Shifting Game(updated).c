#include<stdio.h>
#include<stdlib.h>
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"

int main()
{
      system("cls");
    int var=1;
     char name[100];
    printf(ANSI_COLOR_GREEN "          NUMBER SHIFTING GAME" );
    printf("\n\n\n");
    printf(" Player name :" ANSI_COLOR_RESET);


     gets(name);



    system("cls");

    while (var)
    {

        char a;
    int h[16]={0};
    char arr[4][4],b[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,'_'},win[4][4];
    int i,j,x,k=0,m,n,key,temp;




    printf("\n");
    printf(ANSI_COLOR_RED "            RULES OF THE GAME         Name:%s  " ANSI_COLOR_RESET,name);

     printf(ANSI_COLOR_YELLOW "\n\n1.You can move only 1 step at a time by arrow key");
     printf("\nMove up    : by up arrow key");
     printf("\nMove down  : by down arrow key");
     printf("\nMove left  : by left arrow key");
     printf("\nMove right : by right arrow key");
     printf("\n2.You can move number at empty position only\n");
     printf("\n");
     printf("\n3.For each valid move move : your total number of move will decreased by 1\n");
     printf("\n4.Winning situation : number in the matrix should br in order from 1 to 15\n");
     printf("\n\n"ANSI_COLOR_RESET);

     printf(ANSI_COLOR_RED "Winning Position :" ANSI_COLOR_RESET);


     printf(ANSI_COLOR_BLUE"\n\n-----------------------\n\n");

    for(i=0;i<4;i++)
    {
        printf(" ");
        for(j=0;j<4;j++)
        {
            if (b[k]==95)
                printf( "|  %c ",b[k]);
            else
            {
                if(b[k]<10)
                printf("|  %d ",b[k]);
                else
                 printf("| %d ",b[k]);
            }
            win[i][j]=b[k];
             k++;

        }
         printf("|");
        printf("\n");
    }

    printf("\n-----------------------\n" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_GREEN "press Enter key to continue \n"ANSI_COLOR_RESET);
    scanf("%c",&a);

  system("cls");

printf(ANSI_COLOR_RED "THE PUZZLE :                          Name:%s\n\n" ANSI_COLOR_RESET,name);

  printf(ANSI_COLOR_BLUE "\n\n-----------------------\n\n");
      srand(time(NULL));

   for(i=0;i<4;i++)
    {
        printf(" ");
        for(j=0;j<4;j++)
        {
            x=rand()%16;
           while(h[x]!=0)
           {
               x=rand()%16;
           }
            if(x==15)
                {
                    printf("|  %c ",b[x]);
                    m=i;
                    n=j;

                }

            else
            {
                if(b[x]<10)
                    printf("|  %d ",b[x]);
                else
                printf("| %d ",b[x]);}
            arr[i][j]=b[x];
            h[x]++;
        }
        printf("|");
        printf("\n");
    }
    printf("\n-----------------------\n\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_GREEN "Enter arrow keys to move the empty space \n"ANSI_COLOR_RESET);
    int count =100;

    printf(ANSI_COLOR_GREEN "no.of attempts = %d"ANSI_COLOR_RESET,count);

while (count>0)
      {
    key=getch();
    if(key != 72 && key != 77 && key != 75 && key !=80)      /**  change **/
        continue;
    system("cls");


    if (key==0xE0)
        key=getch();

    switch (key)
    {
        case (72):
            printf(ANSI_COLOR_RED "THE PUZZLE :                          Name:%s\n\n" ANSI_COLOR_RESET,name);

  printf(ANSI_COLOR_BLUE "\n\n-----------------------\n\n");

               for(i=0;i<4;i++)
{
    printf(" ");
    for(j=0;j<4;j++)
    {


        if (i==m-1&&j==n)
        {

            if(m>0)
            {temp=arr[i][j];
            arr[i][j]=arr[i+1][j];
            arr[i+1][j]=temp;}
        }

        if (arr[i][j]==95)
            printf("|  %c ",arr[i][j]);
            else
        {
                if(arr[i][j]<10)
                    printf("|  %d ",arr[i][j]);
                else
                printf("| %d ",arr[i][j]);}

    }
    printf("|");
    printf("\n");

}

 printf("\n-----------------------\n\n" ANSI_COLOR_RESET);
 if(m!=0)
  {m=m-1;
  count--;}
// printf("%d %d",m,n);

 printf(ANSI_COLOR_GREEN "\n\n no.of attempts left = %d"ANSI_COLOR_RESET,count);
           break;

        case (75):
           printf(ANSI_COLOR_RED "THE PUZZLE :                          Name:%s\n\n" ANSI_COLOR_RESET,name);

  printf(ANSI_COLOR_BLUE "\n\n-----------------------\n\n");

               for(i=0;i<4;i++)
{
    printf(" ");
    for(j=0;j<4;j++)
    {
        if (i==m&&j==n-1)
        { if(n>0)
            {temp=arr[i][j];
            arr[i][j]=arr[i][j+1];
            arr[i][j+1]=temp;}
        }
        if (arr[i][j]==95)
            printf("|  %c ",arr[i][j]);
            else
        {
                if(arr[i][j]<10)
                    printf("|  %d ",arr[i][j]);
                else
                printf("| %d ",arr[i][j]);}
    }
    printf("|");
    printf("\n");
}

 printf("\n-----------------------\n\n"ANSI_COLOR_RESET);
if(n!=0)
{n=n-1;
count--;}
//printf("%d %d",m,n);

printf(ANSI_COLOR_GREEN"\n\n no.of attempts left = %d"ANSI_COLOR_RESET,count);
           break;


        case (77):
            printf(ANSI_COLOR_RED"THE PUZZLE :                          Name:%s\n\n"ANSI_COLOR_RESET,name);

  printf(ANSI_COLOR_BLUE"\n\n-----------------------\n\n");

            for(i=0;i<4;i++)
{
    printf(" ");
    for(j=0;j<4;j++)
    {
        if (i==m&&j==n)
        {
            if(n!=3)
            {temp=arr[i][j];
            arr[i][j]=arr[i][j+1];
            arr[i][j+1]=temp;}
        }
        if (arr[i][j]==95)
            printf("|  %c ",arr[i][j]);
            else
        {
                if(arr[i][j]<10)
                    printf("|  %d ",arr[i][j]);
                else
                printf("| %d ",arr[i][j]);}
    }
    printf("|");
    printf("\n");
}

 printf("\n-----------------------\n\n"ANSI_COLOR_RESET);
 if(n!=3)
 {n=n+1; count--;}
 //printf("%d %d",m,n);

 printf(ANSI_COLOR_GREEN"\n\n no.of attempts left = %d"ANSI_COLOR_RESET,count);
           break;

        case (80):
           printf(ANSI_COLOR_RED"THE PUZZLE :                          Name:%s\n\n"ANSI_COLOR_RESET,name);

  printf(ANSI_COLOR_BLUE"\n\n-----------------------\n\n");

               for(i=0;i<4;i++)
{
    printf(" ");
    for(j=0;j<4;j++)
    {
        if (i==m&&j==n)
        {
            if(m!=3)
            {temp=arr[i][j];
            arr[i][j]=arr[i+1][j];
            arr[i+1][j]=temp;}
        }
        if (arr[i][j]==95)
            printf("|  %c ",arr[i][j]);
            else
        {
                if(arr[i][j]<10)
                    printf("|  %d ",arr[i][j]);
                else
                printf("| %d ",arr[i][j]);}
    }
    printf("|");
    printf("\n");
}
 printf("\n-----------------------\n\n"ANSI_COLOR_RESET);
 if(m!=3)
 {m=m+1;count--;}
 //printf("%d %d",m,n);

 printf(ANSI_COLOR_GREEN "\n\n no.of attempts left = %d"ANSI_COLOR_RESET,count);
           break;

            default :                            /** changed line **/
            continue;
    }

      }

      for(i=0;i<4;i++)
      {
          for(j=0;j<4;j++)
          {
              if(arr[i][j]==win[i][j])
              {

                  if(i==3&&j==3)
                  printf(ANSI_COLOR_RED"\n         CONGRATULATIONS YOU WIN !\n"ANSI_COLOR_RESET);
              }
              else
              {

                   if(i==3&&j==3)
                  printf(ANSI_COLOR_RED"\n\n         YOU LOSE BETTER LUCK NEXT TIME !\n");
              }
          }
      }
      int play;
       printf("\n\n                  Play again ...?(if yes press 1 and enter or if no press 0 and enter)\n"ANSI_COLOR_RESET);
       scanf("%d",&play);

       if (play==0)
       break;

   }
   system("cls");
   printf(ANSI_COLOR_BLUE "\n\n\n                         THANK YOU ! \n\n\n\n\n\n\n\n\n\n\n\n"ANSI_COLOR_RESET);

    return 0;
}

