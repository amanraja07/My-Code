#include<stdio.h>

int main()
{ 
//1. Write a program to print MySirG 5 times on the screen 

      int i=1;
      while (i<=5)
     {
          printf("MySirG\n");
          i++;
     }    
//2. Write a program to print the first 10 natural numbers. 

      int i=1;
      while (i<=10)
      {
          printf("\n %d",i);
          i++;
      }

//3. Write a program to print the first 10 natural numbers in reverse order 

       int i=10;
       while(i>=1)
       {
       printf("\n %d",i);
       i--;
       }

//4. Write a program to print the first 10 odd natural numbers 

       int i =1;
       while (i<=20)
       {
          if(i%2!=0)
          {

               printf("\n %d",i);

               
          }
          i++;
       }

//5. Write a program to print the first 10 odd natural numbers in reverse order. 

       int i =20;
       while (i>=1)
       {
          if(i%2!=0)
          {

               printf("\n %d",i);

               
          }
          i--;
       }

//6. Write a program to print the first 10 even natural numbers 

       int i =1;
       while (i<=20)
       {
          if(i%2==0)
          {

               printf("\n %d",i);

               
          }
          i++;
       }

//7. Write a program to print the first 10 even natural numbers in reverse order 

       int i =20;
       while (i>=1)
       {
          if(i%2==0)
          {

               printf("\n %d",i);

               
          }
          i--;
       }     

//8. Write a program to print squares of the first 10 natural numbers 

      int i =1;
      while (i <=10)
      {
          
          printf("\n The square of the %d is %d",i,i*i);
          i++;
          
      }

//9. Write a program to print cubes of the first 10 natural numbers 

       int i =1;
       while (i<=10)
       {
          printf("\n the cube of the %d is %d",i,i*i*i);

          i++;
       }


//10. Write a program to print a table of 5
       
       int i=1;
       while(i<=10)
       {
          printf("\n 5*%d=%d",i,5*i);

          i++;
       }



    return 0;
}