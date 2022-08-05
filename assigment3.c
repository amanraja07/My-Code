#include<stdio.h>

int main ()
{

//1. Write a program to check whether a given number is positive or non-positive.
      int x;
      printf("Enter the number :-");
      scanf  ("%d",&x);

      if (x>0)
      {
        printf("%d is the positive number",x);
      }
      else
      {
        printf("%d is the non positive number",x);
      }

//2. Write a program to check whether a given number is divisible by 5 or not?

       int x;
       printf ("Enter the number :-");
       scanf  ("%d",&x);
       if(x%5==0)
       {
        printf ("%d is divisible by 5",x);
       }
       else
       {
        printf("%d is not divisible by 5",x);

       }
//3. Write a program to check whether a given number is an even number or an odd 
//number.

        int x;
        printf("Enter the number :-");
        scanf ("%d",&x);

        if (x%2==0)
        {
          printf ("%d is an Even Number",x);
        }
        else 
        {
          printf("%d is an Odd Number",x);
        }

//4. Write a program to check whether a given number is an even number or an odd 
//   number without using % operator.
     
         int a,b ;
         printf ("Enter the number =");
         scanf ("%d",&a);

         b=a%10;
         if(b==0 || b==2 || b==4 ||b==6||b==8)
         {
          printf("%d is the even number",a);
         }
         else{
          printf("%d is the odd number ",a);
         }

//5. Write a program to check whether a given number is a three-digit number or not.

        int a,b,c;
        printf ("Emter the three number :-");
        scanf("%d %d %d",&a,&b,&c);
        if (a>b && a>c)
        {
          printf("%d is the greater number",a);
        }
        else if (b>c && b>a)
        {
          printf("%d is the greater number",b);
        }
        else
        {
          printf ("%d is the greater number",c);
        }


//6. Write a program to print greater between two numbers. Print one number of both are 
//   the same.

        int a,b;
        printf("Enter the two number:-");
        scanf("%d %d",&a,&b);
        
        if(a>b)
        {
          printf(" %d is the greater number",a);
        }
        else if(b>a)
        {
          printf ("%d is the greater number",b);
        }
        else{
          printf("%d is the equal to %d",a,b);
        }

//7. Write a program to check whether roots of a given quadratic equation are real & 
//    distinct, real & equal or imaginary roots

        int a, b, c, d;
        printf("Enter the constant of the equation:-\n");

        scanf("%d %d %d",&a,&b,&c);
        
        d=(b*b-(4*a*c));
        printf("the value of the D=%d \n",d);

        if (d>0)
        {
         printf("The roots of the equation are real and distinct.\n "); 
        }
        else if(d<0)
        {
          printf("The roots of the equation are imaginary.\n ");
        }
        else{
          printf("The roots of the equation are real and equal.\n");
        }
//8. Write a program to check whether a given year is a leap year or not.

        int year;
        //printf("Enter the year:-");
        scanf("%d",&year);

        if(year%400==0)
        {
          printf("%d is a leap year",year);
        }
        else if (year%100==0)
        {
          printf("%d is the nit a leap year",year);
        }
        else if (year % 4==0)
        {
          printf("%d is the leap year",year);
        }
        else{
          printf ("All year is not the leap year");
        } 

//9. Write a program to find the greatest among three given numbers. Print number once 
//   if the greatest number appears two or three times.

         int a,b,c;
         printf ("Enter the three number=");
         scanf("%d %d %d",&a, &b, &c);
         if (a>b)
            if(a>c)
            {
              printf("%d",a);
            }
            else
            {
              printf("%d",c);
            }
         else
         {
            if (b>c)
            {
            printf("%d",b);
            }
            else
            {
            printf("%d",c);
            }
         }   

//10. Write a program which takes the cost price and selling price of a product from the 
//    user. Now calculate and print profit or loss percentage.

       float c,s,a,b;
        printf ("Enter the cost price and selling price of the product:- ");
        scanf("%f %f",&c,&s);
        
        a=((s-c)/c)*100;
        b=((c-s)/c)*100;

        if ((s-c)>0)
        {
          printf("%f is the profit precent",a);
        }
         else if ((s-c)<0)
        {
          printf("%f is the loss percent",b);
        }
        else{
          printf("no loss no gain");
        }
//11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
//    out of 100 and passing marks is 33. Now display whether the candidate passed the 
//    examination or failed.

        int m , p , c , h, e;
        printf("Enter the marks of all five subject:-");
        scanf("%d %d %d %d %d",&m, &p, &c, &h, &e);

        if (m>33 && p>33 && c>33 && h>33 && e>33 )
        {
          printf ("students are passed in the exam");
        }
       
        else{
          printf("student are failed in the exam ");
        }

//12. Write a program to check whether a given alphabet is in uppercase or lowercase.

         char uppercase,lowercase;
        printf ("Enter the alphabate :-");
         scanf("%c %c",&uppercase,&lowercase);
        //if(uppercase=='A'||uppercase=='B'||uppercase=='C'||uppercase=='D'||uppercase=='E'||uppercase=='F'||uppercase=='G'||uppercase=='H'||uppercase=='I'||uppercase=='J'||uppercase=='K'||uppercase=='L'||uppercase=='M'||uppercase=='N'||uppercase=='O'||uppercase=='P'||uppercase=='Q'||uppercase=='R'||uppercase=='S'||uppercase=='T'||uppercase=='U'||uppercase=='V'||uppercase=='X'||uppercase=='Y'||uppercase=='Z')
        if(uppercase>='A' && uppercase<='z')
        {
          printf("%c is the Uppercase",uppercase);
        }
        //else if(lowercase=='a'||lowercase=='b'||lowercase=='c'||lowercase=='d'||lowercase=='e'||lowercase=='f'||lowercase=='g'||lowercase=='h'||lowercase=='i'||lowercase=='j'||lowercase=='k'||lowercase=='l'||lowercase=='m'||lowercase=='n'||lowercase=='o'||lowercase=='p'||lowercase=='q'||lowercase=='r'||lowercase=='s'||lowercase=='t'||lowercase=='u'||lowercase=='v'||lowercase=='w'||lowercase=='x'||lowercase=='y'||lowercase=='z')
        else if (lowercase>='a' && lowercase<='z')
       
        {
          printf("%c is the lowercase",lowercase);
        }
        else
        {
          printf ("Not an alphabate");
        }

        


//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

        int a ;
        printf ("Enter the number :-");
        scanf ("%d",&a);
        
        if (a%3==0 && a%2==0)
        {
          printf("%d is divisable by the 3 and 2",a);

        }
        else{
          printf("the number is not divisable by 3 and 2");
        }

//14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

       int a ;
        printf ("Enter the number :-");
        scanf ("%d",&a);
        
        if (a%7==0 && a%3==0)
        {
          printf("%d is divisable by the 3 and 7",a);

        }
        else{
          printf("the number is not divisable by 3 and 7");
        }

//15. Write a program to check whether a given number is positive, negative or zero.

         int x;
         printf("Enter the number ");
         scanf("%d",&x);
         if(x>0)
         {
          printf ("%d is the positive number ",x);
         }
         else if(x<0)
         {
          printf("%d is the negative number",x);
         }
         else
         {
          printf("The number is equal to zero");
         }

//16. Write a program to check whether a given character is an alphabet (uppercase), an 
//alphabet (lower case), a digit or a special character.
  
         printf("Enter the any key of the keyboard:=");
         char uppercase,lowercase,d,s;
         int a;

        scanf("%d",&a);
         scanf("%c %c %c %c",&uppercase,&lowercase,&d,&s);
        if(uppercase=='A'||uppercase=='B'||uppercase=='C'||uppercase=='D'||uppercase=='E'||uppercase=='F'||uppercase=='G'||uppercase=='H'||uppercase=='I'||uppercase=='J'||uppercase=='K'||uppercase=='L'||uppercase=='M'||uppercase=='N'||uppercase=='O'||uppercase=='P'||uppercase=='Q'||uppercase=='R'||uppercase=='S'||uppercase=='T'||uppercase=='U'||uppercase=='V'||uppercase=='X'||uppercase=='Y'||uppercase=='Z')
        {
          printf("%c is the Uppercase",uppercase);
        }
        else if(lowercase=='a'||lowercase=='b'||lowercase=='c'||lowercase=='d'||lowercase=='e'||lowercase=='f'||lowercase=='g'||lowercase=='h'||lowercase=='i'||lowercase=='j'||lowercase=='k'||lowercase=='l'||lowercase=='m'||lowercase=='n'||lowercase=='o'||lowercase=='p'||lowercase=='q'||lowercase=='r'||lowercase=='s'||lowercase=='t'||lowercase=='u'||lowercase=='v'||lowercase=='w'||lowercase=='x'||lowercase=='y'||lowercase=='z')
        {
          printf("%c is the lowercase",lowercase);
        }
        else if (d=='1'||d=='0'||d=='2'||d=='3'||d=='4'||d=='5'||d=='6'||d=='7'||d=='8'||d=='9')
        {
          printf("%c is the Digit",d);
        }
        else
         {
          printf ("%c is a special character",s);
        }
//17. Write a program which takes the length of the sides of a triangle as an input. Display 
//whether the triangle is valid or not. 

          int a ,b ,c;
          printf (" Enter the side of the triangle=");
          scanf("%d %d %d",&a,&b,&c);
          if(a<b+c && c<a+b && b<c+a)
          {
            printf("the triangle is valid");
          }
          else 
          {
            printf("the triangle is not valid ");
          }


//18. Write a program which takes the month number as an input and display number of 
//days in that month

         int a ;
         printf("Enter the month number=");
         scanf("%d",&a);

         if(a==1 ||a==3 ||a==5 ||a==7 ||a==8 ||a==12)
         {
          printf("%dth month has 31 days. ",a);
         }
         else if (a==2)
         {
          printf("%dnd month has 28 or 29 days.",a);
         }
         else{
          printf ("%dth month has 30 days.",a);
      
          
         }

    return 0;
}