#include <iostream>
using namespace std;

int square :: k ;
int main ()
{
//1. Define a class Complex to represent a complex number. Declare instance member variables to 
//  store real and imaginary part of a complex number, also define instance member functions to set 
//  values of complex number and print values of complex number 

        class complex 
        {
            private:
            int r, i;

            public:
            void set (int a, int b)
            {
                r=a;
                i=b;
            }

            void get ()
            {
                cout <<"The complex number is :- "<<r<<" + "<<i<<"i ."<<"\n";
            }
        };

        complex c1,c2,c3;

        c1.set(2,7);
        c2.set(5,9);
        c3.set(100,50);

        c1.get();
        c2.get();
        c3.get();

//2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of 
//  instance member variables and also define instance member functions to set values for time and display values of time. 

        class time 
        {
            private:
            int h,m,s;

            public:
            void set (int a, int b, int c)
            {
                h=a;
                m=b;
                s=c;
            }

            void display()

            {
                cout<<"Time = "<<h<<"hr "<<m<<"min "<<s<<"sec "<<endl;
            }

        };

        time t1, t2;
        t1.set(3,45,57);
        t2.set(7,15,45);

        t1.display();
        t2.display();

//3. Define a class Factorial and define an instance member function to find the Factorial of a number using class. 

        class Factorial
        {
            private:
            int n;

            public:
            void input ()
            {
                cout <<"Enter the number :-";
                cin >>n;
            }
            void fact ()
            {
                int i ,result=1 ;
                for (i=1; i<=n; i++)
                result*=i;
                cout <<"The Factorial of "<<n<<" is "<<result<<"\n";
            }
        };

        Factorial f1, f2, f3;
        f1.input();
        f2.input();
        f3.input();

        f1.fact();
        f2.fact();
        f3.fact();

//4. Define a class LargestNumber and define an instance member function to find the 
//  Largest of three Numbers using the class. 

        class LargestNumber 
        {
            int n1,n2,n3 ;
            public:
            void input ()
            {
                cout <<"Enter the 3 number :-";
                cin>> n1>>n2>>n3;

            }
            void max ()
            {
                if (n1>n2)
                {
                    if (n2>n3)
                    cout<<"The Largest number is "<<n1<<endl;
                    else
                    cout<<"The Largest number is "<<n3<<endl;
                }
                else if (n2>n1) 
                {
                    if (n1>n3)
                        cout <<"The Largest number is "<<n2<<endl;
                    else
                        cout <<"The Largest number is "<<n3<<endl; 
                }
                 
            }
        };

        LargestNumber n1,n2,n3;
        n1.input();
        n1.max();

        n2.input();
        n2.max();

        n3.input();
        n3.max();

//5. Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class. 

        class ReverseNumber
        {
        private:
            int n;
        public:
            void set (int a)
            {
                n=a;
            }
            void reverse ()
            {
                int result=0;

                cout <<"The REVERSED NUMBER is :- ";
                while (n!=0)
                {
                    result=n%10;
                    n=n/10;
                    cout <<result;
                }
                cout <<"\n";
            }
            
        };
        
        ReverseNumber n1,n2,n3;

        n1.set(1998);
        n2.set(12345);
        n3.set(25896);

        n1.reverse();
        n2.reverse();
        n3.reverse();

//6. Define a class Square to find the square of a number and write a C++ program to Count 
//  number of times a function is called. 

        square s1,s2,s3;
        s1.input();
        s2.input();
        s3.input();

        s1.sq();
        s2.sq();
        s3.sq();

        cout<<"The SQUARE FUNCTION called by "<<square :: k << "times.";

//7. Define a class Greatest and define instance member function to find Largest among 3 numbers using classes. 



//8. Define a class Rectangle and define an instance member function to find the area of the rectangle. 

        class rectangle 
        {
            private:
            int l,b;

            public:
            void set (int x, int y)
            {
                l=x;
                b=y;
            }

            void area ()
            {
                cout <<"The area of the rectangle is :- "<<l*b<<endl;
            }
        };

        rectangle r1,r2,r3;
        r1.set(2,3);
        r2.set(10,5);
        r3.set(7,9);

        r1.area();
        r2.area();
        r3.area();

//9. Define a class Circle and define an instance member function to find the area of the circle. 

        class circle 
        {
            private:
            int r;

            public:
            void set (int x)
            {
                r=x;
            }

            void area ()
            {
                cout <<"The area of the circle is :- "<<3.41*r*r<<endl;
            }
        };

        circle c1,c2,c3;
        c1.set(1);
        c2.set(10);
        c3.set(7);
        c1.area();
        c2.area();
        c3.area();

//10. Define a class Area and define instance member functions to find the area of the different 
//    shapes like square, rectangle , circle etc.

        class area 
        {
            private:
            int a;
            int l,b;
            int r; 

            public:
            void setsqu (int x)
            {
                a=x;
            }
             void setrec (int x,int y)
            {
                l=x;
                b=y;
            }
             void setcir (int x)
            {
                r=x;
            }
            void areasqu ()
            {
                cout <<"The Area of the Square is :-"<<a*a<<endl;
            }
             void arearec ()
            {
                cout <<"The Area of the Square is :-"<<l*b<<endl;
            }
             void areacir ()
            {
                cout <<"The Area of the Square is :-"<<3.14*r*r<<endl;
            }
        };

         area s,r,c;
            s.setsqu(7);
            r.setrec(5,8);
            c.setcir(1);

            s.areasqu();
            r.arearec();
            c.areacir();


    return 0;
}

     class square 
    {
        private:
            int n;
                
        public:
            static int k;

            void input ()
                {
                    cout <<"Enter the number :-";
                    cin>>n;
                }
            void sq ()
                {
                    cout <<"The Square of the "<< n<<" is "<<n*n<<endl;
                    k++;
                }

     };