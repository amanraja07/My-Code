#include<stdio.h>

int main()
{
//1. Write a program to print unit digit of a given number.

       int x ,a;
       printf("enter the number more than one digit=");
       scanf("%d",&x);
       a=x%10;
       printf("%d is the unit place of %d",a,x);

//2. Write a program to print a given number without its last digit.

       int a,b,c ;
       printf("Enter the number= ");
       scanf("%d",&a);
       b=a%10;
       c=(a-b)/10;

       printf("%d is the without its last digit of %d",c,a);

//3. Write a program to swap values of two int variables.

       int a,b,c;
      printf("Enter the two number :-");
      scanf  ("%d %d",&a,&b);
     
      printf("\n A=%d , B=%d",a,b);

      c=a;
      a=b;
      b=c;

      printf("\n A=%d, B=%d",a,b);

//4. Write a program to swap values of two int variables without using a third variable.

      int a,b;
      printf("Enter the two number");
      scanf("%d %d ",&a,&b);
      printf("\n A=%d, B=%d",a,b);

      a=a+b;
      b=a-b;
      a=a-b;

      printf("\n A=%d, B=%d",a,b); 

       

//5. Write a program to input a three-digit number and display the sum of the digits.

         int x,rem=0,sum=0;
        printf ("Enter the three number=");
        scanf ("%d ",&x);

         rem=x%10;
         x=x/10;

         sum=rem+sum;

         rem=x%10;
         x=x/10;
         sum=rem+sum;

         rem=x%10;
         x=x/10;
         sum=rem+sum;

         printf("The sum of the three digit of the number = %d",sum); 


//6. Write a program which takes a character as an input and displays its ASCII code.

              char a ;
              printf("Enter the any cahracter form the keyboard=");
              scanf ("%c",&a);
              printf("The character has ASCII code =%d",a);

//7. Write a program to find the position of first 1 in LSB.

       int a ,result=0, count=0;
       
       printf("Enter the number :-");
       scanf ("%d",&a);

       while (a!=0)
       {
              result= a&1;
              count++;
              if(result==1)
              {
                     printf("%d",count);
                     break;
              }
              a=a>>1;


       }

//8. Write a program to check whether the given number is even or odd using a bitwise 
//   operator.

        int x,result=0;
        printf ("Enter the number =");
        scanf("%d",&x);
        
        result= x&1;

        if (result==1)
        {
              printf("%d is the odd number",x);
        }
        else
        {
              printf("%d is the even number",x);
        }

//9. Write a program to print size of an int, a float, a char and a double type variable
     
         int a,b,c,d;

         a=sizeof (int);
         b=sizeof (char);
         c=sizeof (float);
         d=sizeof (double);

         printf ("The Size of an int =%d",a);
         printf ("\n The Size of a char =%d",b);
         printf ("\n The Size of a float =%d",c);
         printf ("\n The Size of a double =%d",d); 


//10. Write a program to make the last digit of a number stored in a variable as zero. 
//(Example - if x=2345 then make it x=2340)

       int x ,a;
       printf("Enter the number =");
       scanf ("%d",&x);
       printf("Number=%d",x);

       a=x%10;
       printf("\n New number=%d ",x-a);


//11. Write a program to input a number from the user and also input a digit. Append a 
//    digit in the number and print the resulting number. (Example - number=234 and 
//     digit=9 then the resulting number is 2349)
       int a ,b ,x;
       printf("Enter the number and digit::-");
       scanf("%d %d",&a,&b);

       x=a*10+b;
       printf ("The new number =%d",x);
       

//12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
//convert it into USD.

         float x,a ;
         printf("Enter the value of INR =");
         scanf ("%f",&x);

         a =(1/76.23)*x;

         printf ("%f Rupees =%.2f Doller",x,a);

//13. Write a program to take a three-digit number from the user and rotate its digits by 
//    one position towards the right.

          int x,y,z,result=0;
          printf("Enter the three digit number =");
          scanf("%d",&x);

          y=x%10;
          z=x/10;


          result=y*100+z;

          printf("%d",result);

    return 0;
}