#include <iostream>
using namespace std;

int main ()
{
//1. Write a C++ program to print Hello MySirG on the screen.

       cout<< "Hello My Sirg"; 

//2. Write a C++ program to print Hello on the first line and MySirG on the second line
//   using endl.

        cout<<"Hello "<<endl<<"MySirg";

//3. Write a C++ program to calculate the sum of two numbers.

        int a ,b ;
        cout<<"Enter the two number :-";
        cin>>a>>b;
        cout <<"The sum of "<<a<<" and "<<b<<" is "<<a+b;

//4. Write a C++ program to calculate the area of a circle

        float a, r;
        cout <<"Enter the Radius of the circle:- ";
        cin >>r;
        a=3.14*r*r;
        cout<<"The area of the circle = "<<a;

//5. Write a C++ program to calculate the volume of a cuboid.

        int l,b,h;
        cout<<"Enter the Length, breath, height of the cuboid:-";
        cin>>l>>b>>h;
        cout<<"the volume of cuboid is :-"<<l*b*h;

//6. Write a C++ program to calculate an average of 3 numbers.

        int a, b, c;
        cout <<"Enter the 3 number :-";
        cin>>a>>b>>c;
        cout <<"Average of the three number is " <<(a+b+c)/3;

//7. Write a C++ program to calculate the square of a number

        int x;
        cout<<"Enter the nmber :-";
        cin>>x;
        cout<<"The Square of "<<x<<" is "<<x*x;      

//8. Write a C++ program to swap values of two int variables without using third variable

        int a ,b ,temp;
        cout <<"Enter the two number :-";
        cin>>a>>b;
        temp=a;
        a=b;
        b=temp;
        cout<<"a = "<<a<<", b= "<<b;

//9. Write a C++ program to find the maximum of two numbers.

        int a,b;
        cout<<"Enter the two number :-";
        cin>>a>>b;
        if (a==b)
        {
                cout<<"Both the numbers "<<a<<" and "<<b<< " are Equal.";
        }
        else if (a>b)
        {
                cout <<"The Maximum number is :-"<<a;
        }
        else
        {
                cout<<"The Maximum number is :-"<<b;
        }

//10. Write a C++ program to add all the numbers of an array of size 10.

        int i, a[10], sum=0;
        cout<<"Enter the 10 numbrs:- ";
        for (i=0; i<10; i++)
        {
                cin>>a[i];
                sum+=a[i];
        }
        cout<<"The sum of the total number is :- "<<sum;
        


return 0;    
}