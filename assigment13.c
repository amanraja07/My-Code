#include<stdio.h>

int sumnatural(int);
int sumodd (int);
int sumeven (int);
int sumsquare (int);
int factorial (int);
int hcf (int,int);
void fib(int);
int countdigit(int);
int power (int ,int);


int sumnatural (int n)
{
    if (n==1)
    {
    return 1;
    }   
    return (n+sumnatural(n-1));
}

int sumodd (int n)
{
    if (n==1)
    {
    return 1;
    }   
    return (((2*n)-1)+sumodd(n-1));
}

int sumeven (int n)
{
    if (n==0)
    {
    return 0;
    }    
    return ((2*n)+sumeven(n-1));
}

int sumsquare (int n)
{
     if (n==0)
    {
    return 0;
    }  
    return ((n*n)+sumsquare(n-1));
}

int sumdigit(int n)
{
    if (n==0)
    {
    return 0;
    }  
    return ((n%10)+sumdigit(n/10));
}

int factorial(int n)
{
    if (n==1)
    {
        return (1);    
    }
    return ((n)*factorial(n-1));
}

int hcf (int a, int b)
{
    int min = a<b ? a:b;
    int max =a>b ? a:b;
    if (max%min == 0)
    return min;

     return (hcf (max % min , min));
    
}

void fib (int n )
{
    int sum=0;
    if (n<0)
    {
        fib (n-1);
        sum=sum+n;
        printf("%d ",sum);
    }
}

int countdigit (int n)
{
    int result;
  if (n==0)
  return 0;
  result=countdigit(n/10);
  result++;
  return (result);

}

int power (int n,int r)
{
    int result;
    if (r==0)
    return 1;

     result=n*power (n,(r-1));
   
    return result;
    
}

int main ()
{
//1. Write a recursive function to calculate sum of first N natural numbers

        int n ,s;
        printf("Enter the value of N :-");
        scanf("%d",&n);

        s=sumnatural(n);
        printf ("The sum of %d natural number is %d .",n,s);

//2. Write a recursive function to calculate sum of first N odd natural numbers

        int n ,s;
        printf("Enter the value of N :-");
        scanf("%d",&n);

        s=sumodd(n);
        printf ("The sum of %d odd natural number = %d .",n,s);

//3. Write a recursive function to calculate sum of first N even natural numbers

        int n ,s;
        printf("Enter the value of N :-");
        scanf("%d",&n);

        s=sumeven(n);
        printf ("The sum of %d even natural number = %d .",n,s);

//4. Write a recursive function to calculate sum of squares of first n natural numbers

        int n ,s;
        printf("Enter the value of N :-");
        scanf("%d",&n);

        s=sumsquare(n);
        printf ("The sum of %d square natural number = %d .",n,s);

//5. Write a recursive function to calculate sum of digits of a given number

        int n ,s;
        printf("Enter the value of N :-");
        scanf("%d",&n);

        s=sumdigit(n);
        printf ("The sum of digit %d = %d .",n,s);

//6. Write a recursive function to calculate factorial of a given number

        int n ,s;
        printf("Enter the value of N :-");
        scanf("%d",&n);

        s=factorial(n);
        printf ("The farctorial of %d = %d .",n,s);

//7. Write a recursive function to calculate HCF of two numbers

        int a,b,s;
        printf("Enter the two number :-");
        scanf("%d %d",&a,&b);

        s=hcf(a,b);
        printf ("The HCF of %d and %d = %d .",a,b,s);
 
//8. Write a recursive function to print first N terms of Fibonacci series

        int n;
        printf("Enter the value of the N :-");
        scanf("%d",&n);

        printf ("The %d term of the fibonacci series = ",n);
        printf("1");

         fib(n);

//9. Write a program in C to count the digits of a given number using recursion.

        int n,s;
        printf("Enter the value of the N :-");
        scanf("%d",&n);

        s=countdigit(n);
        printf("Digit = %d",s);
                   
//10. Write a program in C to calculate the power of any number using recursion.

        int n,r,s;
        printf("Enter the Number:-");
        scanf("%d %d",&n,&r);

        s=power(n,r);
        printf("Number =%d and Power= %d is = %d",n,r,s);
    return 0;
}