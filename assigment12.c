#include<stdio.h>
void firstnatural (int);
void reversenatural(int);
void oddnumber (int);
void reverseodd (int);
void evennumber(int);
void reverseeven(int);
void reversenumber (int);
void dtob(int);
void octal (int);



void firstnatural (int n)
{
    if(n>0)
    {
        firstnatural(n-1);
        printf(" %d ",n);
    }
}

void reversenatural(int n )
{
    if (n>0)
    {
        printf(" %d ",n);
        reversenatural(n-1);    
    }
}

void oddnumber (int n)
{

    if (n>0)
    {
        oddnumber(n-1);
        printf(" %d ",((2*n)-1));
    }
}

void reverseodd (int n)
{
    if (n>0)
    {
        printf(" %d ",((2*n)-1));
        reverseodd(n-1);        
    }
}
void evennumber (int n)
{
     if (n>0)
    {
        evennumber(n-1);
        printf(" %d ",(2*n));
    }
}

void reverseeven (int n)
{
    if (n>0)
    {
        printf(" %d ",(2*n));
        reverseeven(n-1);        
    }
}
void square (int n)
{
    if (n>0)
    {
        square(n-1);
        printf(" %d ",(n*n));
    }
}

void reversenumber(int n)
{
   
    if (n>0)
    {
        printf("%d",n%10);
        reversenumber(n/10);
    }
}

void dtob (int n )
{
    if (n>0)
    {
        dtob(n/2);
        printf("%d",n%2);
    }
}

void octal (int n)
{
    if (n==0)
    {
        return;
    }
    octal (n/8);
    printf("%d",n%8);
}


int main()
{
//1. Write a recursive function to print first N natural numbers

        int n;
        printf("Enter the value of N:- ");
        scanf("%d",&n);

        printf("The fist %d natural nunmber = ",n);
        firstnatural(n);

//2. Write a recursive function to print first N natural numbers in reverse order

        int n;
        printf("Enter the value of N:- ");
        scanf("%d",&n);

        printf ("Reverse %d natural number =",n);
        reversenatural(n);

//3. Write a recursive function to print first N odd natural numbers

        int n;
        printf("Enter the value of N:- ");
        scanf("%d",&n);

         printf ("first %d odd natural number =",n);
         oddnumber(n);

//4. Write a recursive function to print first N odd natural numbers in reverse order

        int n;
        printf("Enter the value of N:- ");
        scanf("%d",&n);

         printf ("Reverse %d odd natural number =",n);
        reverseodd(n);

//5. Write a recursive function to print first N even natural numbers

        int n;
        printf("Enter the value of N:- ");
        scanf("%d",&n);

         printf ("First %d even natural number =",n);
        evennumber(n);

//6. Write a recursive function to print first N even natural numbers in reverse order

        int n;
        printf("Enter the value of N:- ");
        scanf("%d",&n);

         printf ("Reverse %d even natural number =",n);
         reverseeven(n);


//7. Write a recursive function to print squares of first N natural numbers

        int n;
        printf("Enter the value of N:- ");
        scanf("%d",&n);

        printf("The square of the first %d natural number = ",n);
        square(n);

//8. Write a recursive function to print binary of a given decimal number

        int a;
        printf("Enter the number :-");
        scanf("%d",&a);
        
        dtob(a);
//9. Write a recursive function to print octal of a given decimal number

        int n ;
        printf ("Enter the nnumber :-");
        scanf ("%d",&n);

        octal (n);

//10. Write a recursive function to print reverse of a given number
        int n;
        printf ("Enter the number :-");
        scanf("%d",&n);

        printf("Reversed number = ");
        reversenumber(n);


    return 0;
}