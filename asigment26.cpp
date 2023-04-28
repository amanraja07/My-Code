#include <iostream>
using namespace std;

class StaticCount
{
    private:
    static int n;

    public:

    void increament ()
    {
       cout <<"The increased number ="<<n++<<endl;
    }
};

class counter
{
    private:
    int static a;
    public:
    counter (int n)
    {
        a=n;
    }

    void increament ()
    {
        cout <<"Before increament is "<<a<<endl;
        cout<<"After increament is "<<++a<<endl;
    }
    
};


int StaticCount :: n=10;
int counter :: a;
int main()
{
//1. Define a class Complex to represent a complex number with instance variables a and b to store real and imaginary parts. 
//   Also define following member functions a. void setData(int,int) b. void showData() c. Complex add(Complex) 

            class complex 
            {
                private:
                int a,b;

                public:
                void setdata (int x, int y)
                {
                    a=x;
                    b=y;
                }

                void showdata ()
                {
                    cout<<"The Real part = "<<a<<"  The imaginary part= "<<b<<endl;
                }

                complex add (complex c)
                {
                    complex temp;
                    temp.a = a+c.a;
                    temp.b = b+c.b;

                    return temp;
                }
            };

            complex c1, c2, c3;
            c1.setdata(3,7);
            c2.setdata(5,9);
            c3=c1.add (c2);

            c1.showdata();
            c2.showdata();
            c3.showdata();

//2. Define a class Time to represent a time with instance variables h,m and s to store hour, minute and second.
//Also define following member functions a. void setTime(int,int,int) b. void showTime() c. void normalize() d. Time add(Time) 

            class time 
            {
                private:
                int h,m,s;

                public:
                void setTime(int a, int b ,int c)
                {
                    h=a;
                    m=b;
                    s=c;
                }

                void showTime ()
                {
                    cout <<"Hour = "<<h<<"  Minutes= "<<m<<" Second= "<<s<<endl;
                }
                time normalize ()
                {
                    time temp;
                    temp.h= h + m/60;
                    temp.m= m%60 + s/60;
                    temp.s= s%60 ;

                    return temp;
                }

                time add (time t)
                {
                    time temp ;
                    temp.h = h + t.h;
                    temp.m= m + t.m;
                    temp.s = s + t.s;

                    temp =temp.normalize();
                    
                    return temp;
                }
            };

            time t1, t2, t3;

            t1.setTime(3,75,25);
            t2.setTime(9,50,59);

            t3=t1.add(t2);

            t1.showTime();
            t2.showTime();
            t3.showTime();


//3. Define a class Cube and calculate Volume of Cube and initialise it using constructor. 

            class Cube 
            {
                private:
                int a;

                public :
                Cube (int n)
                {
                    a=n;
                }
                Cube ()
                {
                    a=5;
                }

                void volume ()
                {
                    int temp;
                    temp=(a*a*a);
                    cout <<"The Volume of the Cube is :-"<< temp <<endl;

                }
            };

            Cube c1(7),c2(4),c3;

            c1.volume();
            
            c2.volume();
            
            c3.volume();
           

//4. Define a class Counter and Write a program to Show Counter using Constructor. 

            counter c1(5);

            c1.increament();
            c1.increament();
            c1.increament();
            c1.increament();
            c1.increament();

//5. Define a class Date and write a program to Display Date and initialise date object using Constructors. 

           class Date 
            {
                private :
                int y,m,d;

                public:

                Date (int x, int w, int z)
                {
                    y=x;
                    m=w;
                    d=z;

                    cout <<"Year = "<<y<<"  Months= "<<m<<"  Days= "<<d<<endl;
                }

            };

            Date d1(1997,05,15),d2(2017,10,21),d3(2000,05,17);


//6. Define a class student and write a program to enter student details using constructor and define member 
//   function to display all the details. 

            class student 
            {
                private:
                char n[50],b[20];
                int y,s,r;
                public:
                student ()
                {
                    cout <<"Enter Your Name :-";
                    cin.sync();
                    cin.getline(n,50);
                    cout<<"Branch:- ";
                    cin.getline(b,20);
                    cout<<"YEAR :-";
                    cin>>y;
                    cout<<"Semaster:- ";
                    cin>>s;
                    cout<<"Roll Number :-";
                    cin>>r;
                }

                void display ()
                {
                    cout <<"\nNAME :- "<<n<<endl;
                    cout<<"BRANCH :- "<<b<<endl;
                    cout<<"YEAR:- "<<y<<endl;
                    cout<<"SEMASTER :- "<<s<<"th"<<endl;
                    cout<<"ROLL NUMBER:- "<<r<<endl;
                }
            };

            student s1,s2,s3,s4;
            s1.display();
            s2.display();
            s3.display();
            s4.display();

//7. Define a class Box and write a program to enter length, breadth and height and initialise objects 
//using constructor also define member functions to calculate volume of the box. 

            class Box
            {
                private:
                int l,b,h;

                public:
                Box(int x,int y,int z )
                {
                    l=x;
                    b=y;
                    h=z;
                }

                void volume ()
                {
                    int result=l*b*h;
                    cout<<"The Volume OF The Box Is :-"<<result<<endl;
                }
            };
            Box b1(5,2,8),b2(7,10,6),b3(4,3,8);
            b1.volume();
            b2.volume();
            b3.volume();

//8. Define a class Bank and define member functions to read principal , rate of interest and year.
// Another member functions to calculate simple interest and display it. Initialise all details using constructor. 

            class Bank 
            {
                private:
                int p,r,t;

                public:
                Bank(int x, int y ,int z)
                {
                    p=x;
                    r=y;
                    t=z;
                }
                void interst ()
                {
                    float si;
                    si=(p*r*t)/100;

                    cout <<"The Simple interst = "<<si<<endl;
                }
            };
            Bank b1(7000,12,5),b2(10000,2,10),b3(5000,8,5);
            b1.interst();
            b2.interst();
            b3.interst();


//9. Define a class Bill and define its member function get() to take detail of customer , calculateBill() function to 
//calculate electricity bill using below tariff : Upto 100 unit RS. 1.20 per unit From 100 to 200 unit RS. 2 per unit 
//Above 200 units RS. 3 per unit.

            class Bill
            {
                private:
                char name[20];
                int ci,unit;
                
                public:
                void Get()
                {
                    cout<<"Enter the Name ,consumer ID ,Unit:-\n";
                    cin.sync();
                    cin.getline(name,20);
                    cin>>ci>>unit;
                }

                void calculatebill()
                {
                    float rupees;
                    if (unit >=0 && unit<=100)
                        rupees=unit*1.20;
                    
                    if (unit>=101 && unit<=200)
                        rupees =unit*2;

                    if (unit>=201)  
                        rupees=unit*3;  

                    cout<<"\nConsumer Name := "<<name<<endl;
                    cout<<"Consumer ID := "<<ci<<endl;
                    cout<<"Unit Of Use := "<<unit<<endl;
                    cout<<"Amount to pay := := "<<rupees<<endl;    
                }

            };
            Bill c1,c2,c3;
            c1.Get();
            c2.Get();
            c3.Get();

            c1.calculatebill();
            c2.calculatebill();
            c3.calculatebill();


//10. Define a class StaticCount and create a static variable.Increment this variable in a 
//function and call this 3 times and display the result.

    StaticCount c1;
    c1.increament();
    c1.increament();
    c1.increament();



    return 0;
}


