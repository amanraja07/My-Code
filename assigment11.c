#include <stdio.h>

int hcf (int, int);
int prime (int);
int square (int);
int factorial (int);
void fibonacci (int);
int nextprime (int);
void nprime(int);
void betweenprime (int,int);
int combination (int, int);
void pascaltriangle(int);


int main()
{
//1. Write a function to calculate LCM of two numbers. (TSRS)

        int a,b,s,lcm;
        printf ("Enter the two number = ");
        scanf("%d %d",&a,&b);

        s=hcf(a,b);
        lcm=(a*b)/s;

        printf("LCM Of two number is %d",lcm);

//2. Write a function to calculate HCF of two numbers. (TSRS)

        int a,b,s;
        printf("Enter two number :- ");
        scanf("%d %d",&a,&b);

         s=hcf(a,b);
        printf("HCF of %d and %d is %d ",a,b,s);

//3. Write a function to check whether a given number is Prime or not. (TSRS)

        int n ,s ;
        printf("Enter the number :-");
        scanf("%d",&n);

        s=prime(n);
       
        if (s)
            printf("Non-Prime Number");
        else
            printf("Prime Number");
        

//4. Write a function to find the next prime number of a given number. (TSRS)

        int n ,s;
        printf("Enter the number :-");
        scanf ("%d",&n);

        s=nextprime(n);
        printf("The next prime number is %d",s);
                 
//5. Write a function to print first N prime numbers (TSRN)

        int n;
        printf("Enter the value of N :-");
        scanf ("%d",&n);

        nprime(n);

//6. Write a function to print all Prime numbers between two given numbers. (TSRN)

        int a,b,s ;
        printf("Enter the value of '1st' number and '2nd' number :-");
        scanf("%d %d",&a,&b);

        betweenprime (a ,b);
      
//7. Write a function to print first N terms of Fibonacci series (TSRN)

        int num; 
        printf("Enter the value of N :- ");
        scanf("%d",&num);

        fibonacci (num); 

//8. Write a function to print PASCAL Triangle. (TSRN)

        int n;
        printf("Enter the value of N :-");
        scanf("%d",&n);

       pascaltriangle(n);



//9. Write a program in C to find the square of any number using the function.

        int n,s;
        printf("Enter the number =");
        scanf("%d",&n);

        s=square(n);
        printf("The square of the %d is %d .",n,s);

//10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the 
//    function.

       float a,b,c,d,e,f;
        float series=0;
        a=factorial(1);
        b=1+factorial(2);
        c=2+factorial(3);
        d=3+factorial(4);
        e=4+factorial(5);
       
       printf("%f %f %f %f %f ",a,b,c,d,e);

        series = ((a/b)*(d/c)*(5/e));
        printf("\nThe sum of the series is  %f ",series);

    return 0;
}

// HCF Of two number.

int hcf(int a, int b)
{
    int i ,hcf ,min ;
    min= a<b ? a:b;

    for (i=1; i<=min; i++)
    {
        if (a%i==0 && b%i==0)
            hcf=i;
    }
    return hcf;
}

//Square of the number .

int square (int a)
{
    int result;
    result=a*a;

    return result;
}

// Factorial of the any number.

int factorial (int a)
{
    int i,result=1 ;
    for (i=1; i<=a; i++)
    {
        result=result*i;
    }
    return result;
}

//Fibonacci series .

void fibonacci (int a)
{
    int i, pre=0, curr=1, result=0;
    printf(" %d ",1);
    for(i=1; i<a; i++)
    {
        result=pre+curr;
        pre=curr;
        curr=result;

        printf(" %d ",result);
    }
}

//Prime number.
int prime (int a)
{
    int i,result=0 ;
    for(i=2; i<=a/2; i++)
    {
        if(a%i==0)
        result=a;
    }
    return result;

}
// Next Prime number.

int nextprime(int a)
{
    int num ,i ,result=0,r=0;
    for(num=a+1; 1; num++)
    {
        for(i=1; i<num; i++)
        {
            if (num%i==0)
            r=i;
        }
        if (r==1)
        {
            result=num;
            break;
        }
    }
    return result;
}

// First N prime Number .

void nprime (int a)
{
    int num ,i ,result=0,r=0;

    printf("Frist N Prime Number =");
    for(num=1; num<=a; num++)
    {
        for(i=1; i<num; i++)
        {
            if (num%i==0)
            r=i;
        }
        if (r==1)
        {
             
             printf(" %d ",num);
          
        }
    }
    
}

// Prime Number between two number .

void betweenprime (int a ,int b)
{
    int num ,i ,result=0,r=0;

    printf("Prime Number between %d and %d =",a,b);
    for(num=a; num<=b; num++)
    {
        for(i=1; i<num; i++)
        {
            if (num%i==0)
            r=i;
        }
        if (r==1)
        {
             
             printf(" %d ",num);
          
        }
    }
       
}

//Combination of two nnumber.

int combination (int n, int r)
{
    int comb;
    comb= factorial(n)/(factorial(r)*factorial(n-r));

    return comb;
}

// Pascal Triangle .

void pascaltriangle (int a)
{
    int i , j;
    
     for(i=0; i<=a; i++)
        {
            int n=a;
            for(j=0; j<=i; j++)
            {
               printf(" %d ",combination (i,j));
            }
            printf("\n");
        } 
}