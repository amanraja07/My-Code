#include<stdio.h>

int main()
{
//1. Write a program to draw the following patterns: 
//              *
//              **
//              ***
//              ****
//              *****

    int i ,j ;
    for(i=1; i<=5; i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf("*");

            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }


//2.) Write a program to draw the following patterns:  
//                 *
//                **
//               ***
//              ****
//             *****

    int i ,j ;
    for(i=1; i<=5; i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
            {
                printf("*");

            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

//3.) Write a program to draw the following patterns:     
//                  *****
//                  ****
//                  ***
//                  **
//                  * 

       int i ,j ;
    for(i=1; i<=5; i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
            {
                printf("*");

            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    } 

//4.) Write a program to draw the following patterns:

//               *****
//                ****
//                 ***
//                  **
//                   *

      int i ,j ;
     for(i=1; i<=5; i++)
     {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            {
                printf("*");

            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    } 

//5.) Write a program to draw the following patterns:
//                    *
//                   ***
//                  *****
//                 *******
//                *********

     int i ,j ;
    for(i=1; i<=5; i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i )
            {
                printf("*");

            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    } 

//6.) Write a program to draw the following patterns: 
//                 *********
//                  *******
//                   *****
//                    ***
//                     *

     int i ,j ;
     for(i=1; i<=5; i++)
     {
        for(j=1;j<=9;j++)
        {
            if(j<=10-i && j>=i )
            {
                printf("*");

            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    } 

//7.) Write a program to draw the following patterns:
//                 **********
//                 ****  ****
//                 ***    ***
//                 **      **
//                 *        *

     int i ,j ;
    for(i=1; i<=5; i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j<=6-i || j>=5+i )
            {
                printf("*");

            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    } 

//8.) Write a program to draw the following patterns:
//                    1
//                   121
//                  12321
//                 1234321

     int i ,j,k ;
    for(i=1; i<=4; i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i )
            {
             if(j<4)
             {
                printf("%d",k++);
             }
             else
             printf("%d",k--);
            }
           
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    } 

//9.) Write a program to draw the following patterns:
//                 1234321
//                  12321
//                   121
//                    1

    int i ,j,k ;
    for(i=1; i<=4; i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j<=8-i && j>=i )
            {
             if(j<4)
             {
                printf("%d",k++);
             }
             else
             printf("%d",k--);
            }
           
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    } 

//10.) Write a program to draw the following patterns:
//                 1234321
//                 123 321
//                 12   21
//                 1     1

    int i ,j, k,l ;
    for(i=1; i<=4; i++)
    {
        k=1;
        l=5-i;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i )
            {
              if(j<4)
              {
                printf("%d",k++);

              }
               else if(j>=4)
              {
                printf("%d",l--);
              }
              else
              {
              printf(" ");
              
              }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");

    }


//11.) Write a program to draw the following patterns:
//                    A
//                   ABA
//                  ABCBA
//                 ABCDCBA
//                ABCDEDCBA

     int i ,j,k ;
    for(i=1; i<=5; i++)
    {
        k='A';
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i )
            {
             if(j<5)
             {
                printf("%c",k++);
             }
             else
             printf("%c",k--);
            }
           
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }  

//12.) Write a program to draw the following patterns:
//                ABCDEFGFEDCBA
//                ABCDEF FEDCBA
//                ABCDE   EDCBA 
//                ABCD     DCBA
//                ABC       CBA
//                AB         BA
//                A           A 

    int i ,j, k,l ;
    for(i=1; i<=7; i++)
    {
        k='A';
        l='H'-i;
        for(j=1;j<=13;j++)
        {
            if(j<=8-i || j>=6+i )
            {
              if(j<7)
              {
                printf("%C",k++);

              }
               else if(j>=6+i)
              {
                printf("%C",l--);
              }
              else
              {
              printf(" ");
              
              }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");

    }

//13.) Write a program to draw the following patterns:
//                ABCDCBA
//                 ABCBA
//                  ABA
//                   A


        int i, j,k,l;
        for (i=1; i<=4; i++)
        {
             k ='A';
             l ='E'-i;
           for(j=1; j<=7; j++)
           {
            if (j<=8-i && j>=i)
            {
              if(j<4)
              {
                printf("%c",k);
                k++;
              } 
              else if (j>3 && j<=8-i)
              {
                printf("%c",l--);
              } 
              else
              printf(" ");

            }
            else
            {
                printf(" ");
            }
           } 
           printf("\n");
        }

//14.) Write a program to draw the following patterns:


//                   *
//                   * *
//                   *   *
//                   *     *
//                   * * * * *

     int i ,j;
    for(i=1; i<=5; i++)
    {
        
        for(j=1;j<=9;j++)
        {
           if(j==1)
           {
            printf("*");
           }
           else if (i==2 && j==3 )
           printf("*");

           else if (i==3 && j==5)
           printf("*");

           else if (i==4 && j==7)
           printf("*");

           else if (i==5 && j==3)
           printf("*");

           else if (i==5 && j==5)
           printf("*");

           else if (i==5 && j==7)
           printf("*");

           else if (i==5 && j==9)
           printf("*");

           else
           printf(" ");
        }
        
        printf("\n");
    } 

  

//15.) Write a program to draw the following patterns:

//                           *
//                         * *
//                       *   *
//                     *     *
//                   * * * * *

     int i ,j ;
    for(i=1; i<=5; i++)
    {
        
        for(j=1;j<=9;j++)
        {
           if(j==9)
           {
            printf("*");
           }
           else if (i==2 && j==7 )
           printf("*");

           else if (i==3 && j==5)
           printf("*");

           else if (i==4 && j==3)
           printf("*");

           else if (i==5 && j==1)
           printf("*");


           else if (i==5 && j==3)
           printf("*");

           else if (i==5 && j==5)
           printf("*");

           else if (i==5 && j==7)
           printf("*");

           else if (i==5 && j==9)
           printf("*");

           else
           printf(" ");
        }
        
        printf("\n");
    } 

// 16.) Write a program to draw the following patterns:
//                       *    
//                      * *
//                     *   *
//                    *     *
//                   *********
         int i ,j ;
    for(i=1; i<=5; i++)
    {
        
        for(j=1;j<=9;j++)
        {
           if(i==1 && j==5)
           {
            printf("*");
           }
           else if (i==2 && j==4 )
           printf("*");

           else if (i==2 && j==6)
           printf("*");

           else if (i==3 && j==3)
           printf("*");

           else if (i==3 && j==7)
           printf("*");


           else if (i==4 && j==2)
           printf("*");

           else if (i==4 && j==8)
           printf("*");

           else if (i==5 && j<=9)
           printf("*");

           else
           printf(" ");
        }
        
        printf("\n");
    } 

// 17.) Write a program to draw the following patterns:
//                   *********  
//                    *     *
//                     *   *  
//                      * *
//                       *

     int i ,j ;
    for(i=1; i<=5; i++)
    {
        
        for(j=1;j<=9;j++)
        {
           if(i==1 && j<=9)
           {
            printf("*");
           }
           else if (i==2 && j==2 )
           printf("*");

           else if (i==2 && j==8)
           printf("*");

           else if (i==3 && j==3)
           printf("*");

           else if (i==3 && j==7)
           printf("*");


           else if (i==4 && j==4)
           printf("*");

           else if (i==4 && j==6)
           printf("*");

           else if (i==5 && j==5)
           printf("*");

           else
           printf(" ");
        }
        
        printf("\n");
    } 

// 18) Write a program to draw the following patterns:
//                       *
//                      ***
//                     *****
//                    *******
//                   *********
//                    *******
//                     *****
//                      ***
//                       *


     int i ,j ;
    for (i=1; i<=9; i++)
    {
        for(i=1; i<=5; i++)
        {
            
            for(j=1;j<=9;j++)
            {
               if (j>=6-i && j<=4+i)
               printf ("*");
               else
               printf(" ");

            }
            printf("\n");
        }
        for (i=6; i<=9; i++)
        {
            for (j=1; j<=9; j++)
            {
                if (j>=i-4 && j<=14-i)
               printf ("*");
               else
               printf(" ");

            }
             printf("\n");
        
        }  

    }

// 19) Write a program to draw the following patterns:
//         
//           *****     *****
//          *******   *******     
//         ********* ********* 
//         ******MySirG*******
//          *****************  
//           ***************
//            *************
//             ***********
//              *********
//               *******
//                *****
//                 ***
//                  *


         int i,j;
         
            for (i=1; i<=3; i++)
            {
                for(j=1; j<=19; j++)
                {
                    if (j<=6+i && j>=4-i)
                    {
                        printf("*");
                    }
                    else if(j<=16+i && j>=14-i)
                    printf("*");
                    else
                    printf(" ");
                }
                printf("\n");
            }
            for(i=1; i<=10; i++)
            {
                for(j=1; j<=19; j++)
                {
                    if (i==1 && j==6)
                        printf("MySirG");
                    if (i==1 && j>=7 && j<=12)
                        continue;    
                    if (j>=i && j<=20-i)
                    printf("*");

                    else
                    printf(" ");
                }
                printf("\n");
            }

         

 return 0;

}

