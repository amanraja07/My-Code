#include <stdio.h>

int main()
{
//1. Write a program which takes the month number as an input and display number of days in that month. 

         int x;
        printf("Enter the number of the month:- ");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
            printf("%d month has 31 days",x);
            break;
        case 3:
            printf("%d month has 31 days",x);
            break;
        case 5:
            printf("%d month has 31 days",x);
            break;
        case 7:
            printf("%d month has 31 days",x);
            break;
        case 8:
            printf("%d month has 31 days",x);
            break;
        case 10:
            printf("%d month has 31 days",x);
            break;
        case 12:
            printf("%d month has 31 days",x);
            break;
        case 4 :
            printf("%d month has 30 days",x);
            break;
        case 6 :
            printf("%d month has 30 days",x);
            break;
        case 9:
            printf("%d month has 30 days",x);
            break;
        case 11:
            printf("%d month has 30 days",x);
            break;    
        case 2:
            printf("%d month has 28 or 29 days",x);
            break;    
        
        default:
            printf("invalid number");
            break;
        }

//2. Write a menu driven program with the following options: 
//    a. Addition 
//    b. Subtraction 
//    c. Multiplication 
//    d. Division 
//    e. Exit 
        while (1)
        {
        char x;
        printf("  \nChoose the option of the menu \n");
        printf("a. Addition \n");
        printf("b. Subtraction \n");
        printf("c. Multiplication \n");
        printf("d. Division \n");
        printf("e. Exit \n");

        scanf("%c",&x);
        int a,b;
               
        switch (x)
        {
        case'a':
            
            printf("\n Enter the two number :-");
            scanf("%d %d",&a,&b);

            printf("The Sum of %d and %d is %d \n",a,b,a+b);
            break;
        
        case'b':
            
            printf("\n Enter the two number :-");
            scanf("%d %d",&a,&b);

            printf("The Subtraction of %d and %d is %d \n",a,b,a-b);
            break;
        
        case'c':
            
            printf("\n Enter the two number :-");
            scanf("%d %d",&a,&b);

            printf("The Multiplication of %d and %d is %d \n",a,b,a*b);
            break;
        case'd':
            
            printf("\n Enter the two number :-");
            scanf("%d %d",&a,&b);

            printf("The Quotient of %d and %d is %d\n",a,b,a/b);
            break;

        case 'e':
           break;    
        default :
        printf("invalid selection \n");
        break;
        }
        if(x=='e')
        break;

    }


//3. Write a program which takes the day number of a week and displays a unique greeting message for the day. 

        int x;
        printf ("Enter the number of the day:-");
        scanf ("%d",&x);

        switch (x)
        {
        case 1:
           printf("Today is the Sunday and enjoy this day \n");
            break;
        case 2:
           printf("Today is the Monday and start working on all importants work");
            break;
        case 3:
           printf("Today is the Tuesday and this day is the day of Lord Hanuman");
           break;
        case 4:
           printf("Today is the Wednesday and we clebrate the small party");
           break;
        case 5:
           printf("Today is the Thursday and today is my bday");
           break;
        case 6:
           printf("Today is the Friday and gaming day");
           break;
        case 7:
           printf("Today is the Saturday this day for the family");
        default:
            break;
        }

//4. Write a menu driven program with the following options: 
//    1. Check whether a given set of three numbers are lengths of an isosceles triangle or not 
//    2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not 
//    3. Check whether a given set of three numbers are equilateral triangle or not 
//    4. Exit 
     while (1)
    {
        int x;
        
        printf("\n1. Check isosceles triangle or not ?");
        printf("\n2. Check right angle triangle or not ?");
        printf("\n3. Check Equilateral triangle or not ?");
        printf("\n4. Exit");
        printf("\nChoose the option of the menu:-");

        scanf("\n %d",&x);
        int a, b, c;
        switch (x)
        {
        case 1:
            printf("\n\nEnter the length of the sides");
            scanf("%d %d %d", &a ,&b ,&c);
            if(a==b || b==c || c==a)
            printf("The Triangle is the isosceles triangle \n");
            else 
            printf("The Triangle is not an isosceles triangle \n ");
            break;
        case 2:
            printf("\n\nEnter the length of the sides");
            scanf("%d %d %d", &a ,&b ,&c);
            if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
            printf("The Triangle is the Right angle triangle \n");
            else 
            printf("The Triangle is not a Right angle triangle \n ");
            break;
        case 3:
            printf("\n\nEnter the length of the sides");
            scanf("%d %d %d", &a ,&b ,&c);
            if(a==b && b==c)
            printf("The Triangle is the Equilateral triangle \n");
            else 
            printf("The Triangle is not an Equilateral triangle \n ");
            break;
        case 4:
            break;
        default:
            break;
        }
        if(x==4)
        break;
    }  

//5. Convert the following if-else-if construct into switch case: 
//      if(var == 1)
//         System.out.println("good"); 
//      else if(var == 2)
//         System.out.println("better"); 
//      else if(var == 3) 
//         System.out.println("best"); 
//      else 
//         System.out.println("invalid"); 

        int x;
        printf("Enter the number :- ");
        scanf("%d",&x);

        switch (x)
        {
        case 1:
          printf("good");
            break;

        case 2:
          printf("batter");
            break;

        case 3:
          printf("best");
            break;

        
        
        default:
          printf("invalid");
            break;
        }

//6. Program to check whether a year is a leap year or not. Using switch statement

        int x;
        printf("Enter the year :-");
        scanf("%d",&x);
        
          
       switch(x % 100==0 )
       {
       case 1:
            switch(x % 400==0)
            {
            case 1:
            printf("%d is the Leap Year",x);
            break;
            case 0:
            printf("%d is not a Leap Year",x);
            break;
            }
            break;
       case 0:
            switch (x % 4==0)
            {
            case 1:
            printf("%d is the Leap Year",x);
            break;

            case 0:
            printf("%d is not a Leap Year",x);
            break;
            }

//7. Program to take the value from the user as input electricity unit charges and 
//   calculate total electricity bill according to the given condition . Using the switch statement. 
//        For the first 50 units Rs. 0.50/unit 
//        For the next 100 units Rs. 0.75/unit 
//        For the next 100 units Rs. 1.20/unit 
//        For units above 250 Rs. 1.50/unit 
//        An additional surcharge of 20% is added to the bill. 

        int x ;
        printf("Enter the unit of electricity :-");
        scanf("%d",&x);

        switch (x)
        {
        case 1 ... 50:
            float c;
            c=((x*0.50)+((x*0.50)/5));
            printf("\nThe electric unit of %d units is %f rupees ",x,c);
            break;

        case 51 ... 150:
            float c;
            c=((x*0.75)+((x*0.75)/5));
            printf("\nThe electric unit of %d units is %f rupees ",x,c);
            break;

        case 151 ... 250:
            float c;
            c=((x*1.20)+((x*1.20)/5));
            printf("\nThe electric unit of %d units is %f rupees ",x,c);
            break;
        
        default:
            float c;
            c=((x*1.50)+((x*1.50)/5));
            
            printf("\nThe electric unit of %d units is %f rupees ",x,c);
            break;
        }


//8. Program to convert a positive number into a negative number and negative number into a positive number 
//   using a switch statement. 


         int x;
         printf ("Enter the number :-");
         scanf("%d",&x);

         switch (x)
         {
         case 0 :
             printf("This number is not positive or not negative number");

         default:
            printf("\nThe number is %d and convert in %d",x,-x);
            break;
         }   


//9. Program to Convert even number into its upper nearest odd number Switch Statement. 

        int x;
        printf("Enter the even number :-");
        scanf("%d",&x);

        switch(x%2)
        {
            case 0:
                printf("\nThe even number is %d and its nearest odd number is %d .",x,x+1);
                break;
            default :
                printf("Its is not a even number ");
                break;
        }
//10. C program to find all roots of a quadratic equation using switch case

        int a,b,c,d;
        printf("Enter the constant of the equation :-");
        scanf("%d %d %d",&a,&b,&c);

        d=((b*b)-(4*a*c));
        
        switch (d)
        {
        case 0:
            printf("\nBoth Roots are real and equal");
            break;

        case 1:
            switch (d<0)
            {
                case 1:
                printf("\nBoths Roots are imaginary");
                break;

                case 0:
                printf("\nBoths Roots are real and different");
                break;
            }
        
        default:
            break;
        }
    printf("\n");
    return 0;
}