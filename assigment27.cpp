#include<iostream>
#include <string.h>
using namespace std;

//class for the question number 3.
class complex
{
    private:
    int r, i;

    public:
    void setData(int x, int y)
    {
        r=x;
        i=y;
    }
    void showData()
    {
        cout<<"Real = "<<r<<"  Imaginary ="<<i<<endl;
    }
    friend complex operator +(complex x, complex y);
                            
};
//Friend Function 
complex operator +(complex x, complex y) 
{
    complex temp;
    temp.r=x.r+y.r;
    temp.i=x.i+y.i;
    return temp; 
}

//class for the question number 4.
class Time 
{
    private :
    int h,m,s;
    char s1[30]={"Enter First Time :-"};
    char s2[30]={"Enter Second Time:-"};
    char s3[30]={"First Time"};
    char s4[30]={"Second Time"};
    static int count1,count2;

    public:
    void operator <<(int )
    {
       
        if (count1==1)
            cout <<"\n"<<s1;
        else 
            cout<<"\n"<<s2;    
        cout <<"\n..................."<<endl;
        cout <<"Enter Hour :-";
        cin  >>h;
        cout <<"Enter Minute :-";
        cin  >>m;
        cout <<"Enter Second :-";
        cin  >>s;
        count1++;
    }
    void operator >>(int)
    {
        if (count2==1)
            cout <<"\n"<<s3;
        else 
            cout<<"\n"<<s4;  
       
        cout <<"\n............."<<endl;
        cout <<"Hour    : "<<h<<endl;
        cout <<"Minute : "<<m<<endl;
        cout <<"Second  : "<<s<<endl;
        count2 ++;
    }
   
};


int Time :: count1=1; //Static variable define.. 
int Time :: count2=1; //Static variable define.. 

//class for the question number (8 & 10) .
      class Matrix
            {
                private:
                    int a[3][3];
                public:
                    void setdata ()
                    {
                        int i , j;
                        cout << "Enter the 3 x 3 Matrix :-";
                        for (i=0; i<3; i++)
                        {
                            for (j=0; j<3; j++)
                            cin>>a[i][j];
                        }
                    }
                    void display ()
                    {
                        int i,j;
                        for (i=0; i<3; i++)
                        {
                            cout <<"| ";
                            for (j=0; j<3; j++)
                            {
                                cout <<a[i][j]<<" ";
                            }
                            cout <<" |"<<endl;
                        }
                        cout <<endl;
                    }

                    Matrix operator- ()
                    {
                        Matrix temp;
                        int i , j;
                        for (i=0; i<3; i++)
                        {
                            for (j=0; j<3; j++)
                            {
                                temp.a[i][j]=-a[i][j];
                            }
                        }
                        return temp;
                    }

                    Matrix operator + (Matrix m)
                    {
                        Matrix temp;
                        int i ,j ;
                        for ( i=0; i<3; i++)
                        {
                            for (j=0; j<3; j++)
                            {
                                temp.a[i][j]= a[i][j] + m.a[i][j];
                            }
                        }
                        return temp;
                    }
            };

// class for the queastion number 7.
            class fraction
            {
            private:
               long numerator; 
               long denominator; 
            public:
                
                void setData (int a, int b)
                {
                    numerator=a;
                    denominator=b;
                }

                void display ()
                {
                    cout <<"NUMERATOR ="<<numerator<<"  DENOMINATOR ="<<denominator<<endl;
                }

                fraction operator ++ ()
                {
                    fraction temp;
                    temp.numerator = ++numerator;
                    temp.denominator = ++denominator;
                    return temp;
                }

                fraction operator ++ (int )
                {
                    fraction temp;
                    temp.numerator = numerator++;
                    temp.denominator = denominator++;
                    return temp;
                }
                friend ostream & operator << (ostream & os, fraction f);
                friend istream & operator >> (istream & is, fraction & f);
            };

            ostream & operator << (ostream & os , fraction f)
            {
                os <<"NUMERATOR ="<<f.numerator<<"  DENOMINATOR ="<<f.denominator<<endl;

                return os ;
            }

            istream & operator >> (istream & is, fraction& f)
            {
                cout <<"Enter the Numerator :-";
                is >>f.numerator;

                cout<<"Enter the Denominator :-";
                is>>f.denominator;
               
                return is;
            }



int main ()
{
//1. Define a class Complex with appropriate instance variables and member functions. 
//   Define following operators in the class: 
//  a. + 
//  b. - 
//  c. * 
//  d. ==  

        class complex
        {
            private:
            int r, i;

            public:
            complex(int x, int y)
            {
                r=x;
                i=y;
            }
            complex()
            {
                r=0;
                i=0;
            }
            void showData()
            {
                cout<<"Real = "<<r<<"  Imaginary ="<<i<<endl;
            }
            complex operator+ (complex c)
            {
                complex temp;
                temp.r=r+c.r;
                temp.i=i+c.i;
                return temp;
            }
             complex operator- (complex c)
            {
                complex temp;
                temp.r=r-c.r;
                temp.i=i-c.i;
                return temp;
            }
             complex operator* (complex c)
            {
                complex temp;
                temp.r=r*c.r;
                temp.i=i*c.i;
                return temp;
            }
            bool operator == (complex c)
            {
              if (c.r==r && c.i==i)
              return true;

              return false;
            }

        };
        
        complex c1(8,6),c2(7,5),c3,c4,c5,c6(8,6);

        c3=c1+c2;  //c3=c1.operator+(c2);
        c4=c1-c2;
        c5=c1*c2;
    
        c1.showData();
        c2.showData();
        c3.showData();
        c4.showData();
        c5.showData();
       
        if (c6 == c1)
        cout<<"Both are Equivalent."<<endl;
        else
        cout <<"Both are not Equivalent."<<endl;

        if (c2 == c1)
        cout<<"Both are Equivalent."<<endl;
        else
        cout <<"Both are not Equivalent."<<endl;


//2. Write a C++ program to overload unary operators that is increment and decrement. 

        class complex
        {
            private:
            int r, i;

            public:
            complex(int x, int y)
            {
                r=x;
                i=y;
            }
            complex()
            {
                r=0;
                i=0;
            }
            void showData()
            {
                cout<<"Real = "<<r<<"  Imaginary ="<<i<<endl;
            }
            complex operator ++ ()
            {
                complex temp;
                temp.r=r+1;
                temp.i=i+1;
                return temp;
            } 
            complex operator -- ()
            {
                complex temp;
                temp.r=r-1;
                temp.i=i-1;
                return temp;
            }       
        };
        complex c1(3,7),c2,c3;
        c2=++c1;
        c3=--c1;
        c1.showData();
        c2.showData();
        c3.showData();


//3. Write a C++ program to add two complex numbers using operator overloaded by a friend function. 

        complex c1,c2,c3;
        c1.setData(5,6);
        c2.setData (7,3);
        c1.showData();
        c2.showData();

        c3=c1 + c2; // c3= operator+ (c1,c2);
 
        c3.showData();      

//4. Create a class Time which contains: - 
//  Hours - 
//  Minutes - 
//  Seconds  -
//  Write a C++ program using operator overloading for the following: 
//  1. = = : To check whether two Times are the same or not. 
//  2. >> : To accept the time. 
//  3. << : To display the time.

        Time t1,t2;
        t1<<(3);
        t2<<(3);

        t1>>(3);
        t2>>(3);

/*5. Consider following class Numbers 
    class Numbers
    {
         int x,y,z; 
         public:// methods
    };
    Overload the operator unary minus (-) to negative the numbers.*/

            class Number 
            {
                private :
                int x,y,z;

                public:
                Number (int a, int b , int c)
                {
                    x=a;
                    y=b;
                    z=c;
                }
                Number operator -()
                {
                    Number temp(0,0,0);
                    temp.x=-x;
                    temp.y=-y;
                    temp.z=-z;

                    return temp;
                }
                void Display ()
                {
                    cout <<"X="<<x<<"  Y="<<y<<"  Z="<<z<<endl;
                }
            };

            Number n1(5,2,6),n2(7,6,9),n3(0,0,0),n4(0,0,0);
            n3=-n1;
            n4=-n2;

            n1.Display();
            n2.Display();
            n3.Display();
            n4.Display();

//6. Create a class CString to represent a string. 
//  a) Overload the + operator to concatenate two strings. 
//  b) == to compare 2 strings. 

            class CString 
            {
                private:
                char str[100];
   
                public:
                
                void SetData ()
                {
                    cout <<"Enter the string :-";
                    cin.getline(str,100);
                }
                void GetData ()
                {
                    cout <<str<<endl;
                }

                CString operator + (CString s)
                {
                    CString temp;
                    int i=0,j=0,k=0;
                    int l=strlen(str);
                    int m=strlen(s.str);

                    for (i=0; i<l; i++)
                    {
                        temp.str[i]=str[i];
                    }
                    for (j=l; j<=m+l; j++)
                    {
                        temp.str[j]=s.str[k++];
                    }
                    cout <<"\nAfter the + operator to concatenate two strings.:- ";
                   return temp;

                }
                void operator == (CString s)
                {
                    if (strcmp(str,s.str)== 0)
                    cout <<"\nBoth the string are equal .";
                    else if (strcmp(str,s.str)> 0)
                    cout <<"\nString 1st is greater than 2nd.";
                    else
                    cout <<"\nString 1st is smaller than 2nd."; 
                }

            };

            CString c1,c2,c3;
            c1.SetData();
            c2.SetData();
            

            c1.GetData();
            c2.GetData();
            c3=c1+c2;
            c3.GetData();
            c1==c2;

//7. Define a C++ class fraction 
//      class fraction 
//      { 
//          long numerator; 
//          long denominator; 
//          Public:
//          fraction (long n=0, long d=0); 
//      }
//      Overload the following operators as member or friend: 
//      a) Unary ++ (pre and post both) 
//      b) Overload as friend functions: operators << and >>.


            fraction f1, f2, f3 ;
            f1.setData(7,5);
            f2.setData(1 ,3);

            f1.display();
            f2.display();

            (++f1).display();
            
            (f2++).display();
            f2.display();

            cout<< f1<<f2;

            cin>>f3;
            cout<<f3;

/*8. Consider a class Matrix 
        Class Matrix 
        { 
            int a[3][3]; 
            Public: 
                //methods; 
        }; 
    Overload the - (Unary) should negate the numbers stored in the object.*/
          
            Matrix m1, m2 ;
            m1.setdata();

            m2= -m1;

            m1.display();
            m2.display();

            
/*9. Consider the following class mystring 
        Class mystring 
        { 
            char str [100]; 
            Public: 
                // methods 
        }; 
    Overload operator “!” to reverse the case of each alphabet in the string (Uppercase to Lowercase and vice versa)*/

                class mystring 
                {
                    private :
                    char str[100]="0";

                    public :

                    void setData ( )
                    {
                        cout <<"Enter the string :-";
                        cin.getline(str, 100);
                        
                    }

                    void display()
                    {
                        cout <<str<<endl;
                    }

                    mystring operator ! ()
                    {
                        mystring temp;
                        int i;
                        for ( i=0; str[i]; i++)
                        {
                            if ( str[i] == ' ')
                            continue;

                            if (str[i]>='a' && str[i]<='z' )
                            temp.str[i] = str[i] - 32;

                            if (str[i]>='A' && str[i]<='Z')
                            temp.str[i] = str[i] + 32; 
                        }
                        return temp;
                    } 
                };
                mystring s1, s2, s3, s4;
                s1.setData();
                s2.setData();

                s3= !s1;
                s4= !s2;

                s1.display();
                s2.display();
                s3.display();
                s4.display();

/*10.Class Matrix 
        { 
            int a[3][3]; 
            Public: 
                //methods; 
        }; 
    Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator overloading).*/

                Matrix m1,m2,m3;
                m1.setdata();
                m2.setdata();

                m3=m1+m2;

                m1.display();
                m2.display();
                m3.display();

 return 0;   

}
