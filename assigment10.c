#include<stdio.h>

float area(int);
int intrest(int,int,int);
int number (int);
void natural (int);
void odd (int);
int factorial(int);
void primefact(int);
int digit(int,int);
int main ()
{
//1. Write a function to calculate the area of a circle. (TSRS)

        int r;
        printf("Enter the value of radius:- ");
        scanf("%d",&r);

        float s=area(r);
        printf("The area of the triangle is %f",s);

//2. Write a function to calculate simple interest. (TSRS)

        int p,r,y,si;
        printf("Enter the principle, rate and time :-");
        scanf("%d %d %d",&p,&r,&y);

        si=intrest(p,r,y);
        printf("simple intrest is %d",si);

//3. Write a function to check whether a given number is even or odd. Return 1 if the 
//   number is even, otherwise return 0. (TSRS)

        int n,s ;
        
        printf("Enter the number :-");
        scanf("%d",&n);
        s=number(n);

        if(s == 0)
        printf("%d is Even number",n);
        else if (s==1) 
        printf("%d is odd number",n);

//4. Write a function to print first N natural numbers (TSRN)

        int n ;
        printf ("Enter the value of N:-");
        scanf("%d", &n);

        natural(n);

//5. Write a function to print first N odd natural numbers. (TSRN)

        int n ;
        printf("Enter the N :-");
        scanf("%d",&n);

        odd (n);
//6. Write a function to calculate the factorial of a number. (TSRS)

        int n ;
        printf("Enter the nunmber :-");
        scanf ("%d",&n);
        factorial(n);

        printf("The factorial of %d is %d",n,factorial(n)); 

//7. Write a function to calculate the number of combinations one can make from n items 
//   and r selected at a time. (TSRS)

          int n ,r,combination,x,y,z;
          printf("Enter the value of n and r :-");
          scanf("%d %d",&n,&r);

          x=factorial(n);
          y=factorial(r);
          z=factorial(n-r);

          combination=(x/(y*z));

          printf("The selection of %d times from %d different items is %d",r,n,combination);

//8. Write a function to calculate the number of arrangements one can make from n items 
//   and r selected at a time. (TSRS)

         int n ,r,permutation,x,y;
          printf("Enter the value of n and r :-");
          scanf("%d %d",&n,&r);

          x=factorial(n);
          y=factorial(r);
          

          permutation=(x/(y));

          printf("The selection of %d times from %d different items is %d",r,n,permutation);

//9. Write a function to check whether a given number contains a given digit or not. 
//   (TSRS)

            int a,b,s;
            printf("Enter the number and digit we finding on its =");
            scanf("%d %d",&a,&b);

            s=digit(a,b);
            
            if (s)
            printf ("\nDigit=%d is 'PRESENT' in the Number=%d ",b,a);
            else
            printf("\nDigit=%d is 'NOT PRESENT' in the Number=%d ",b,a);

//10. Write a function to print all prime factors of a given number. For example, if the 
//    number is 36 then your result should be 2, 2, 3, 3. (TSRN)

            int n;
            printf("Enter the number :-");
            scanf("%d",&n);

            primefact (n);


    printf("\n\n");
    return 0;
}

// Area of the circle.
float area (int a)
{
    float area;
    area=3.14*a*a;
    return area;

}

// simple intrest.

int intrest(int a, int b ,int c)
{
    int intrest;
    intrest=(a*b*c)/100;
    return intrest;

}
//Odd-Even number.

int number (int a)
{
     int num = a%2 ;

    return num;

}

// 'N' Natural number .

void natural (int a)
{
    int num=a,i;
    for (i=1; i<=num; i++)
    {
        printf("%d \n",i);
    }
}

// 'N' odd number .

void odd (int a)
{
    int num=a,i;
    for (i=1; i<=num; i++)
    {
        printf("%d \n",((2*i)-1));
    }
}

// Factorial of the number .

int factorial(int a)
{
    int i ,factorial=1;
    for (i=1;i<=a; i++)
    {
        factorial= factorial*i;       
    }
    return factorial;
}

//Prime number .

void primefact (int n)
{
    int i;
   for (i=2; n!=1; i++)
   {
        while(n%i==0)
        {
            n=n/i;
            printf("%d ,",i);
        }
   }
}

//check digit in number .

int digit(int n, int d)
{
    int  result=0 ;
    while (n!=0)
    {
        if(n%10==d)
        {        
            result=d;
            break;
        }
        n=n/10;
     
    }
     return result;  
}    