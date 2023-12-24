#include <iostream>
using namespace std;


    /*1.Write a C++ program to convert Primitive type to Complex type.
     Example -
     int main()
    {
     Complex c1;
     Int x=5;
     c1=x;
     return 0;
    }*/

    class Complex
    {
        private:
        int real;
        int img;

        public:
        Complex(){};

        Complex (int x)
        {
            real=x;
            img=x;
        }

        void display()
        {
            cout <<"The Complex Number :- "<<real<<" + "<<img<<"i ."<<endl;
        }
    };

    int main()
    {
        Complex c1;
        int x=5;
        c1=x;

        c1.display();

        return 0;
    }

    /*2. Write a C++ program to convert Complex type to Primitive type.
     Example -
     int main()
    {
     Complex c1;
     c1.setData(3,4);
     int x;
     x=c1;
     return 0;
    }*/

    class Complex
    {
        private :
        int real;
        int imag;

        public:
        
        Complex (){}

        Complex (int a)
        {
            real = a;
            imag = a;
        }

        void setData (int a , int b)
        {
            real=a;
            imag=b;
        }

        void Display ()
        {
            cout << "Real == "<<real<<"  "<<"Imaginery == "<<imag;
        }

        operator int ()
        {
            return real;
        }

    };

    int main()
    {
     Complex c1;
     c1.setData(3,4);
     int x;
     x=(int)c1;
     cout <<"Integer = "<<x;

     return 0;
    }

    /*3. Create a Product class and convert Product type to Item type using constructor
    int main()
    {
     Item i1;
     Product p1;
     p1.setData(3,4);
     i1=p1;
     return 0;
    }*/

    class Product
    {
        private:
        int prod1 ,prod2;

        public:
        Product(){}

        void setData(int a, int b)
        {
            prod1 = a;
            prod2 = b;
        }

        int getProduct1()
        {
            return prod1;
        }
        int getProduct2()
        {
            return prod2;
        }

        void DisplayProd()
        {
            cout <<"Product are : "<< prod1 <<" , "<<prod2 <<endl;
        }
    };

    class Items
    {
        private :
        int item;

        public:

        Items(){};

        Items(Product P)
        {
          item = (P.getProduct1() + P.getProduct2()) ;
        }

        void DisplayItem()
        {
            cout <<"Items : "<< item <<endl;
        }

    };

    int main()
    {
        Items i1;

        Product p1;
        p1.setData(3,4);
        p1.DisplayProd();

        i1=p1 ;
        i1.DisplayItem();

        return 0;
    }

    /*4. Create Product class and convert Product type to Item type using casting operator
    int main()
    {
     Item i1;
     Product p1;
     p1.setData(3,4);
     i1=p1;
     return 0;
    }*/

    class Items
    {
        private :
        int item;

        public:

        Items(){}

        Items(int i)
        {
            item=i;
        }
       
        void DisplayItem()
        {
            cout <<"Items : "<< item <<endl;
        }

        operator int ()
        {
            return item;
        }
    };

    class Product
    {
        private:
        int prod1 ,prod2;

        public:
        Product(){}

        void setData(int a, int b)
        {
            prod1 = a;
            prod2 = b;
        }

        int getProduct1()
        {
            return prod1;
        }

        int getProduct2()
        {
            return prod2;
        }

        void DisplayProd()
        {
            cout <<"Product are : "<< prod1 <<" , "<<prod2 <<endl;
        }
        
        operator Items()
        {
            return (prod1+prod2);
        }
    };

    int main()
    {
        Items i1;
        Product p1;
        p1.setData(3,4);
        i1 = (Items)p1;
        i1.DisplayItem();
        return 0;
    }

    /*5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
    functions to support Invent1 to float and Invent1 to Invent2 type.
    Example -
    int main()
    {
     Invent1 s1=(4,5);
     Invent2 d1;
     float tv;
     tv=s1;
     d1=s1;
     return 0;
    }*/

    class Invent1
    {
        private:
            int i1,i2;
        
        public:
        Invent1(int a , int b)
        {
            i1=a;
            i2=b;
        }

        operator int ()
        {
            return i1;
        }

        int getData1()
        {
            return i1;
        }
        int getData2()
        {
            return i2;
        }

        void Display()
        {
            cout <<"Invent1 of product1= "<<i1;
            cout <<"Invent1 of product2= "<<i2;
        }
    };

    class Invent2
    {
        private:
        int p1,p2;

        public:
        Invent2 (){}
        Invent2(Invent1 i)
        {
            p1=i.getData1();
            p2=i.getData2();
        }

        void Display()
        {
            cout <<"Invent2 of product1= "<<p1<<endl;
            cout <<"Invent2 of product2= "<<p2<<endl;
        }
        
    };

    int main()
    {
     Invent1 s1(4,5);
     Invent2 d1;
     float tv;
     tv=s1;
     d1=s1;

     cout<<"The number of TV = "<<tv<<endl;
     d1.Display();

     return 0;
    }

    /*6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in
    int ) to Time class.
    Example-
    int main()
    {
     int duration;
     cout<<”Enter time duration in minutes”;
     cin>>duration;
     Time t1 = duration;
     t1.display();
     return 0;
    }*/

    class Time 
    {
        private:
        int sec;

        public:
        Time (int d)
        {
            sec= d*60;
        }

        void display()
        {
            cout <<"Time is "<<sec<<" sencond."<<endl;
        }
    };

    int main()
    {
     int duration;
     cout<<"Enter time duration in minutes =";
     cin>>duration;
     Time t1 = duration;
     t1.display();

     return 0;
    }

    /*7. Create two class Time and Minute and add required getter and setter including constructors.
    Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
    Example -
    int main()
    {
     Time t1(2,30);
     t1.display();
     Minute m1;
     m1.display();
     m1=t1 // Fetch minute from time
     t1.display();
     m1.display();
     return 0;
    }*/

    class Time
    {
        private:
        int hour,min;

        public:
        Time(int x, int y)
        {
            hour=x;
            min=y;
        }

        void display()
        {
            cout <<"Time = "<<hour<<" Hour "<<min<<" Minutes."<<endl;
        }

        int getHour()
        {
            return hour;
        }
        int getminutes()
        {
            return min;
        }

    };

    class Minute
    {
        private:
        int m;

        public:
        Minute()
        {
            m=0;
        }
        Minute(Time t)
        {
            m=(t.getHour()*60)+(t.getminutes());
        }

        void display()
        {
            cout <<"The Total Time in minutes are "<<m<<" Minutes."<<endl;
        }
    };

    int main()
    {
     Time t1(2,30);
     t1.display();
     Minute m1;
     m1.display();
     m1=t1; // Fetch minute from time
     t1.display();
     m1.display();
     return 0;
    }
    
    /*8. Create a Rupee class and convert it into int. And Display it.
    Example:-
    int main()
    {
     Rupee r = 10;
     int x = r;
    cout<<x;
     return 0;
    }*/
    
    class Rupee
    {
        private:
        int r;

        public :
        Rupee(int x)
        {
            r=x;
        }
        operator int ()
        {
            return r;
        }
    };

    int main()
    {
     Rupee r = 10;
     int x = r;
     cout<<x;

     return 0;
    }

    /*9. Create a Dollar class and add necessary functions to support int to Dollar type conversion.
    Example-
    int main()
    {
     int x = 50;
    Dollar d;
    d = x;
    d.display();
     return 0;
    }*/

    class Dollar
    {
        private:
        int d;
        public:
        Dollar(){}
        Dollar(int a)
        {
            d=a;
        }
        void display()
        {
            cout <<"Dollar = "<<d<<"$"<<endl;
        }
    };

    int main()
    {
     int x = 50;
     Dollar d1;
     d1 = x;
     d1.display();

     return 0;
    }

    /*10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
    Dollar and Dollar to Rupee conversion.
    Example-
    int main()
    {
    Rupee r=23;
    Dollar d = r; // Rupee to Dollar conversion
    d.display();
    r.display();
    r = d; // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
    }*/

    class Rupee
    {
        private:
        float r;

        public :
        Rupee(float x)
        {
            r=x;
        }
        operator float ()
        {
            return r;
        }

        float getRupee()
        {
            return r;
        }

        void display()
        {
            cout <<"Rupee ="<<r<<" Rs."<<endl;
        }
    };

    class Dollar
    {
        private:
        float d;
        public:
        Dollar(){}
        Dollar(Rupee r1)
        {
            d=(r1.getRupee())/100;
        }

        operator Rupee()
        {
            return d*100;
        }

        void display()
        {
            cout <<"Dollar ="<<d<<" $"<<endl;
        }
    };

    int main()
    {
    Rupee r=23;

    Dollar d = r; // Rupee to Dollar conversion
    d.display();
    r.display();

    r = d;        // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
    }

   
 