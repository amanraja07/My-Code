#include <stdio.h>

int main ()
{
 //1. Write a program to print MySirG N times on the screen.

      int i=1,n;
      
      printf("Enter the value of N=");
      scanf("%d",&n);
      while (i<=n)
      {
        printf("\n MySirG");
        i++;

      }  

 //2. Write a program to print the first N natural numbers. 
 
      int n ,i=1;
      printf("Enter the value of N:-");
      scanf("%d",&n);

      while (i<=n)
      {
        printf ("\n %d",i);
        i++;
      }
 
 //3. Write a program to print the first N natural numbers in reverse order 
 
       int n ,i;
      printf("Enter the value of N:-");
      scanf("%d",&n);
       
      for(i=n; i>=1; i--)
      {
        printf("\n %d",i);
        
      }
 
 //4. Write a program to print the first N odd natural numbers 
 
       int n ,i ;

       printf ("Enter the value of N =");
       scanf ("%d",&n);

       for(i=1 ; i<=n; i++)
       {
        if (i % 2 != 0)
        {
          printf("%d \n",i);
        }
       }
       
  //5. Write a program to print the first N odd natural numbers in reverse order. 
 
       int n ,i ;

       printf ("Enter the value of N =");
       scanf ("%d",&n);

       for(i=n ; i>=1; i--)
       {
        if (i % 2 != 0)
        {
          printf("%d \n",i);
        }
       }
 
 //6. Write a program to print the first N even natural numbers 
 
       int n ,i ;

       printf ("Enter the value of N =");
       scanf ("%d",&n);

       for(i=1 ; i<=n; i++)
       {
        if (i % 2 == 0)
        {
          printf("%d \n",i);
        }
       }
 
 //7. Write a program to print the first N even natural numbers in reverse order 
 
       int n ,i ;

       printf ("Enter the value of N =");
       scanf ("%d",&n);

       for(i=n ; i>=1; i--)
       {
        if (i % 2 == 0)
        {
          printf("%d \n",i);
        }
       }
 
 //8. Write a program to print squares of the first N natural numbers 
 
        int n ,i ;

       printf ("Enter the value of N =");
       
      scanf ("%d",&n);

       for(i=1 ; i<=n; i++)
       {
          printf("\n The square of the %d is %d",i,i*i);
     
       }
 //9. Write a program to print cubes of the first N natural numbers 
 
       int n ,i ;

       printf ("Enter the value of N =");
       
      scanf ("%d",&n);

       for(i=1 ; i<=n; i++)
       {
          printf("\n The cube of %d is %d",i,i*i*i);
     
       }
 
 //10. Write a program to print a table of N.   

       int n ,i ;

       printf ("Enter the value of N =");
       
      scanf ("%d",&n);

       for(i=1 ; i<=10; i++)
       {
          printf("\n %d*%d=%d",n,i,i*n);
     
       }
    return 0;
}