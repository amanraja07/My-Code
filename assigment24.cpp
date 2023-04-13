#include <iostream>
using namespace std;

void isprime(int);
void highestdigit(int a);
int power (int, int);
void fibonacci(int);
void swap(int & ,int &);
int add(int,int=0,int=0);
float area (int);
int area (int, int);
float add (float, float);
float add (int , float);
int max(int, int);
float max (float, float);
int factorial (int);
void pascal (int);


int main ()
{
//1. Define a function to check whether a given number is a Prime number or not. 

        int x;
        cout<<"Enter The Number :-";
        cin >>x;

        isprime(x);

//2. Define a function to find the highest value digit in a given number. 

        int a;
        cout<<"Enter the number more than 2 digit:-";
        cin>>a;
        highestdigit(a);

//3. Define a function to calculate x raised to the power y. 

        int x, y,result ;
        cout <<"Enter the number x and rasied to the power y :-";
        cin >>x>>y;

        result=power(x,y);
        cout<<"The 'X' rasied to Power 'Y' is :-"<<result;

//4. Define a function to print Pascal Triangle up to N lines. 

        int n;
        cout<<"Enter the value of 'N' :-";
        cin>>n;

        pascal(n);

//5. Define a function to check whether a given number is a term in a Fibonacci series or not. 

        int n;
        cout <<"Enter the number :-";
        cin>>n;

        fibonacci(n);

//6. Define a function to swap data of two int variables using call by reference 

        int n1,n2;
        cout<<"Enter the Two Number :-";
        cin>>n1>>n2;

        swap(n1,n2);
        cout<<"After swap the number is :-"<<n1<<" "<<n2;

//7. Write a function using the default argument that is able to add 2 or 3 numbers. 

        int num1,num2,num3;
        cout<<"Enter the 3 number :-";
        cin>>num1>>num2>>num3;
        cout<<"The sum of the 3 number is :-"<<add(num1,num2,num3)<<endl;

        int a,b;
        cout<<"Enter the 2 number :-";
        cin >>a>>b;
        cout <<"The sum of the 2 number is :-"<<add(a,b);

//8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle 

        int r;
        cout<<"Enter the radius of the circle:-";
        cin>>r;
        cout<<"The Area of the circle is :-"<<area(r)<<endl;

        int l, w;
        cout<<"Enter the length and breath of the rectangle:-";
        cin>>l>>w;
        cout<<"The Area of the rectangle is:-"<<area(l,w)<<endl;

        int h,b;
        cout<<"Enter the Height and Base of the triangle:-";
        cin>>h>>b;
        cout <<"The area of the triangle is :-"<<(area(h,b))/2<<endl;

//9. Write functions using function overloading to find a maximum of two numbers and both 
//   the numbers can be integer or real. 

        int n1, n2;
        cout<<"Enter the two integer number :-";
        cin>>n1>>n2;  
        cout<<"The Maximum Number is :-"<<max(n1,n2);

        float a, b ;
        cout <<"\nEnter the two real number :-";
        cin >>a>>b;
        cout<<"The Maximum Number is :-"<<max(a,b);



//10. Write functions using function overloading to add two numbers having different data types.

        int a,b;
        cout<<"Enter the two integer type number :-";
        cin>>a>>b;
        cout <<"The sum of the two number is :-"<<add(a,b);

        float n,m;
        cout<<"\nEnter the two  float type number :-";
        cin>>n>>m;
        cout <<"The sum of the number is :-"<<add(n,m);

        int x;
        float y;
        cout<<"\nEnter the integer and float type number:- ";
        cin>>x>>y;
        cout <<"The sum of two number is :-"<<add(x,y);



    return 0;
}
int factorial (int n)
{
    int i, result=1;
    for (i=1; i<=n; i++ )
    {
        result*=i;
    }
    return result;
}

int combination (int n, int r)
{
    return (factorial(n))/(factorial(r)*factorial(n-r));
}

void pascal(int n)
{
    int i, j ,k;
   
    for (i=0; i<n; i++)
    {
        for (k=0; k<n-i; k++)
        cout<<" ";
        
        for (j=0; j<=i; j++)
        {
            cout<<combination(i,j);
            cout <<" ";
        }
        cout <<"\n";
    }

}

void isprime(int a)
{
    int i ,count=0;
    for (i=2; i<=a/2; i++)
    {
        if (a%i==0)
        count++;
    }
    if (count)
    {
        cout<<"The number is not prime.";
    }
    else
    cout <<"The number is prime.";
}

void highestdigit(int a)
{
    int r,result=-9;
    while (a!=0)
    {
        r=a%10;
        a=a/10;

        if (r>result)
        result=r;
    }
    cout<<"The Greatest numbre is :-"<<result;
}

int power(int a,int b)
{
    int i ,result=1;
    for (i=0; i<b; i++)
    {
        result=result*a;
    }
    return result;
}

void fibonacci(int n)
{
   int i, pre=1, curr=0, sum=0;
   for (i=0; i<=n; i++)
   {
     sum=pre+curr;
     pre=curr;
     curr=sum;
     if (sum==n)
     break;
   }
   if (sum==n)
   cout <<"The Number is the fibonacci number.";

   else
   cout<<"The Number is the not fibonacci number .";

}

void swap(int &a, int &b)
{
    int temp;

    temp=a;
    a=b;
    b=temp;
}

int add(int a,int b, int c)
{
    return a+b+c;
}

float area(int r)
{
    return 3.14*r*r;
}
int area (int a, int b)
{
    return a*b;
}

float add(float a, float b)
{
    return (a+b);
}

float add (int a,float b)
{
    return a+b;
}

int max (int a, int b)
{
    int max;
    if (a>b)
    max=a;
    else
    max=b;

    return max;
}

float max (float a, float b)
{
    float max;
    if (a>b)
    max=a;
    else
    max=b;

    return max;
}