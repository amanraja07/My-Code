#include<iostream>
#include<cstring>
#include<string>
#include<limits>

using namespace std;

/*1. Define a class Person with instance members name and age. Also define member
functions setName(), setAge(), getName(), getAge(). Now define class Employee by
inheriting Person class. In the Employee class define empid and salary as instance
members. Also define setEmpid, setSalary, getEmpid, getSalary.*/

        class Person
        {
            private :
            string name ;
            int age ;

            public:
            void setName ()
            {
                cout <<"Enter the name :-";
                fflush(stdin);
                getline (cin ,name);
            }
            void setAge ()
            {
                cout <<"Enter the Age :-";
                cin >>age;
            }
            string getName()
            {
                return name;
            }
            int getAge()
            {
                return age;
            }
        };

        class Employee : public Person
        {
            private:
            int id;
            int salary;

            public :

            void setId()
            {
                cout <<"Enter the employee ID:-";
                cin >>id;
            }
            void setSalary()
            {
                cout <<"Enter the employee Salary :-";
                cin>>salary;
                cout<<endl;
            }
            int getId()
            {
                return id;
            }
            int getSalary()
            {
                return salary;
            }
        };
    int main ()
    {
        Employee e1,e2;
        e1.setName();
        e1.setAge();
        e1.setId();
        e1.setSalary();

        e2.setName();
        e2.setAge();
        e2.setId();
        e2.setSalary();

        cout <<"ID :-"<<e1.getId()<<endl;
        cout<<"Name :-"<<e1.getName()<<endl;
        cout <<"Age :-"<<e1.getAge()<<endl;
        cout<<"Salary :-"<<e1.getSalary()<<endl<<endl;

        cout <<"ID :-"<<e2.getId()<<endl;
        cout<<"Name :-"<<e2.getName()<<endl;
        cout <<"Age :-"<<e2.getAge()<<endl;
        cout<<"Salary :-"<<e2.getSalary()<<endl;
   
    return 0;
    }

/*2. Write a C++ program to add two numbers using single inheritance. Accept these two
numbers from the user in base class and display the sum of these two numbers in
derived class.*/

        class Base 
        {
            private:
            int x,y;

            public:
            void setData ()
            {
                cout <<"Enter the two number :-";
                cin >>x>>y;
            }
            int getNum1()
            {
                return x;
            }
            int getNum2()
            {
                return y;
            }
        };

        class Derived :public Base
        {
        private:
            int result;
        public:
           int Add()
           {
                result=getNum1()+getNum2();
                return result;
           }
        };
        
        
        int main ()
        {
            Derived d;
            d.setData();
            cout<<"The sum of two number is :-"<<d.Add();
            return 0;
        }

/*3. Write a C++ program to calculate the percentage of a student using multi-level
inheritance. Accept the marks of three subjects in base class. A class will be derived
from the above mentioned class which includes a function to find the total marks
obtained and another class derived from this class which calculates and displays the
percentage of students.*/

        class Marks
        {
         private:
            int m;
            int p;
            int c;

         public:
            void setData(int x ,int y ,int z)
            {
                m=x;
                p=y;
                c=z;
            }

            int getMath()
            {
                return m;
            }
            int getPhy()
            {
                return p;
            }
            int getChe()
            {
                return c;
            }

        };

        class Percentage : public Marks
        {
            private:
            float result;

            public:

            void Displaypercent()
            {
                result=(getPhy()+getMath()+getChe());
                cout<<"Total Marks = "<<result<<endl;
                cout <<"Percentage of the student :-"<<(result/300)*100<<"%"<<endl<<endl;
            }
        };
               
        int main ()
        {
            Percentage s1,s2;

            s1.setData(90,75,80);
            s1.Displaypercent();

            s2.setData(100,100,100);
            s2.Displaypercent();

            return 0;
        }

/*4. Write a C++ program to design a base class Person (name, address,
phone_no). Derive a class Employee (eno, ename) from Person. Derive a
class Manager (designation, department name, basic-salary) from
Employee. Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary*/

        class Person 
        {
            public:
            string name;
            char address[100];
            double phone_no;
        };

        class Employee : public Person
        {
            public :
            int emp_ID;
        };
        class Manager : public Employee
        {
            public :
            char designation[100];
            char deparment_name[100];
            int basic_salary;

            void Accept_All_Data()
            {
                cout <<"Enter the  ID : ";
                cin >>emp_ID;

                cout <<"Enter the Name : ";
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                getline(cin,name);

                cout <<"Enter the Phone number : ";
                cin >>phone_no;

                cout <<"Enter the Address : ";
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cin >>address;

                cout <<"Enter the Designation : ";
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cin >>designation;

                cout <<"Enter the Department Name : ";
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cin >>deparment_name;

                cout <<"Enter the Basic Salary : ";
                cin >>basic_salary;
            }

            void Display_all_Detail()
            {
                cout <<"__________________________"<<endl;
                cout <<"Employee ID :"<<emp_ID<<endl;
                cout <<"Name : "<<name<<endl;
                cout <<"Address : "<<address<<endl;
                cout <<"Phone Number : "<<phone_no<<endl;
                cout <<"Designation : "<<designation<<endl;
                cout <<"Department Name : "<<deparment_name<<endl;
                cout <<"Basic Salary : "<<basic_salary<<endl;
                cout <<"_____________________________"<<endl<<endl;
            }
        };

        int main ()
        {
            Manager man[100];
            int i,n;
            int highest_salary=0, h;

            cout <<"How Many Manager you want to enter ? = ";
            cin >>n;

            for (i=0; i<n; i++)
            {
                cout <<"\nEnter the All Details of Manager : "<<endl;
                cout <<"**********************************"<<endl;
                man[i].Accept_All_Data();
            }

             for (i=0; i<n; i++)
            {
               man[i].Display_all_Detail();
            }

            for (i=0; i<n; i++)
            {
                if (man[i].basic_salary >= highest_salary)
                {
                    highest_salary = man[i].basic_salary;
                    h=i;
                }
            }
            cout <<"\n\nThe Manager with the Heighest salary = "<<highest_salary<<endl;
            cout <<"The Name of the manager with Heighest salary :- "<<man[h].name<<endl;

        return 0;
        }
    
/*5. Write a C++ program to define a base class Item (item-no, name, price).
Derive a class Discounted-Item (discount-percent). A customer purchases
'n' items. Display the item-wise bill and total amount using appropriate
format.*/

        class  Item 
        {
            public:
            int item_no;
            string name;
            int price;
        };

        class Discounted_Item : public Item
        {
            public:
            int dis_percent;

            void set_Item_Data()
            {
                cout <<"Enter the Item number : ";
                cin >>item_no;

                cout <<"Name of Item : ";
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                getline(cin , name);

                cout <<"Enter the Item Price : ";
                cin>>price;

                cout<<"Enter the Discount Percentage : ";
                cin>>dis_percent;
            }
            void Display_all_Item()
            {
                 cout <<"_______________________"<<endl;
                 cout <<"Item Numebr : "<<item_no<<endl;
                 cout <<"Name : "<<name<<endl;
                 cout <<"Price : "<<price<<endl;
                 cout <<"Discount Percentage : "<<dis_percent<<endl;
                 cout <<"Discoutn Price : "<<(price - (price*dis_percent)/100)<<endl;
                 cout <<"________________________"<<endl;
            }
        };

        int main ()
        {
            Discounted_Item dis[100];
            int i,n;
            int Total_price =0;
            int Total_dis_Price=0;


            cout <<"How many Item you want to Enter ? : ";
            cin >>n;
            for (i=0; i<n; i++)
            {
                cout <<"\nEnter the All details of Item : -"<<endl;
                cout<<"********************************"<<endl;
                dis[i].set_Item_Data();
            }
            for (i=0; i<n; i++)
            {
                dis[i].Display_all_Item();
            }
            
            for(i=0; i<n; i++)
            {
                Total_price += dis[i].price;
                Total_dis_Price += (dis[i].dis_percent*dis[i].price)/100;
            }
            cout <<"\n****************************************"<<endl;
            cout <<"The Total Price of All Items : "<<Total_price<<endl;
            cout <<"The Total Discount on All Items "<<Total_dis_Price<<endl;
            cout <<"The Payable Amount are : "<<Total_price-Total_dis_Price<<endl;
            cout <<"****************************************"<<endl;

            return 0;
        }
        
/*6. Write a C++ program to demonstrate how a common friend function can
be used to exchange the private values of two classes. (Use call by
reference method).*/
        class B;
        class A
        {
           protected:
           int num1;

           public:

           A(int y)
           {
            num1=y;
           } 

           void Display_A()
            {
                cout <<"The number1 = "<<num1<<endl;
            }

           friend void swap (A *num1 , B *num2); 
        };

        class B
        {
            protected:
            int num2;

            public:
            B(int x)
            {
                num2=x;
            }

            void Display_B()
            {
                cout <<"The number2 = "<<num2<<endl;
            }

            friend void swap (A *num1 , B *num2);
        };

        void swap (A *n1 , B *n2)
        {
            int number;
            number = n1 -> num1;
            n1 -> num1 = n2 -> num2;
            n2 -> num2 = number;
        }

        int main ()
        {
            A a(100);
            B b(200);

            swap(&a, &b);

            a.Display_A();
            b.Display_B();

            return 0;
        }

/*7. Write class declarations and member function definitions for a C++ base
class to represent an Employee (emp-code, name).
Derive two classes as Fulltime (daily rate, number of days, salary) and
Parttime (number of working hours, hourly rate, salary).
Write a menu driven program to:
1. Accept the details of ‘n’ employees.
2. Display the details of ‘n’ employees.
3. Search a given Employee by emp-code.*/

        class Employee
        {
            public:
            int emp_code;
            char name[100];         
        };
        class FullTime :public Employee
        {
            public:
            int daily_rate;
            int number_days;
            int salary_full_time=0;
        };
        class PartTime : public FullTime
        {
            public:
            int working_hour;
            int hourly_rate;
            int salary_part_time=0;
            char Status[100];

            public:
            void Accept_All_Data ()
            {
                cout <<"\n\nEnter the ALL detail of the Employee :-"<<endl;
                cout <<"____________________________________"<<endl;
                cout <<"Enter the Employee Code : ";
                cin>>emp_code;

                cout <<"Enter the name of Employee : ";
                cin>>name;

                cout<<"Enter the Status(fulltime or parttime) :- ";
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cin>>Status;

                try
                {
                    if (strcmp(Status,"parttime"))
                    throw "parttime";

                    if(strcmp(Status,"fulltime"))
                    throw 1;
                }
                catch(const char *msg)
                {
                    cout <<"Enter the per day Rate : ";
                    cin>>daily_rate;
                    cout <<"Enter the number of working of Days : ";
                    cin>>number_days;

                    salary_full_time = daily_rate*number_days;
                }
                catch (const int n)
                {
                    cout <<"Enter the Working hour : ";
                    cin >>working_hour;
                    cout <<"Enter the Hourly Rate : ";
                    cin >>hourly_rate;

                    salary_part_time = working_hour*hourly_rate;
                }
            }

            void Display_All_Data()
            {
                cout <<"-------------------------"<<endl;
                cout <<"Employee Code : "<<emp_code<<endl;
                cout <<"Employee Name : "<<name<<endl;
                cout <<"Status : "<<Status<<endl;
                if (strcmp(Status,"parttime"))
                cout<<"Salary : "<<salary_full_time<<endl;
                else
                cout<<"Salary : "<<salary_part_time<<endl;
                               
            }
        };

        int main ()
        {
            PartTime Emp[100];
            int i,n,x,code;
           
            while(1)
            {               
                cout<<"_____________________________________"<<endl;
                cout<<"1.Accept the details of 'n' employees."<<endl;
                cout<<"2.Display the details of 'n' employees."<<endl;
                cout<<"3.Search a given Employee by 'emp-code'."<<endl;
                cout<<"4. Exit "<<endl;
                cout<<"--------------------------------------"<<endl;
                cout<<"Choose The option :-";
                cin>>n;
                cout<<"_____________________________________"<<endl;
                
                switch (n)
                {
                case 1:
                    cout <<"Enter the Total Number of Employee :-";
                    cin>>x;
                    
                    for(i=0; i<x; i++)
                    {
                        Emp[i].Accept_All_Data();
                    }                    
                    break;
                case 2:
                    for (i=0; i<x; i++)
                    {
                        Emp[i].Display_All_Data();
                    }
                    break;
                case 3:
                    cout<<"Enter the Employee-Code for search : ";
                    cin>>code;

                    for (i=0; i<x; i++)
                    {
                        if (Emp[i].emp_code == code)
                        {
                            Emp[i].Display_All_Data();
                            break;
                        }                        
                    }
                    break;  
                case 4:
                    return 0;                  
                default:
                    cout <<"Wrong Number choosed."<<endl;
                    break;
                }
            }
        return 0;
        }

/*8 - In a bank, different customers have savings account. Some customers may
have taken a loan from the bank. So bank always maintain information about
bank depositors and borrowers.
Design a Base class Customer (name, phone-number). Derive a class
Depositor(accno, balance) from Customer.
Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
Write necessary member functions to read and display the details of ‘n’
customers.*/

        class Customer
        {
            public:
            string name;
            int phone_num;
        };

        class Depositor : public Customer
        {
            public:
            int acc_number;
            int balance;
        };

        class Borrower : public Depositor
        {
            public:
            int loan_num;
            int loan_amt;

            void set_All_Data()
            {
                cout <<"Enter the A/C Holder Name : ";
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                getline (cin, name);

                cout <<"Enter the Phone Number : ";
                cin >>phone_num;

                cout <<"Enter the Account Number : ";
                cin >>acc_number;

                cout <<"Enter the Balance : ";
                cin >>balance;

                cout <<"Enter the Lone Number : ";
                cin >>loan_num;

                cout <<"Enter the Lone Amount : ";
                cin >>loan_amt;
            }

            void Display_all_Data()
            {
                cout<<"\n\nDetails Of Constumer"<<endl;
                cout<<"=========================="<<endl;
                cout<<"A/C Holder Name : "<<name<<endl;
                cout<<"Phone Numbere : "<<phone_num<<endl;
                cout<<"Account Number : "<<acc_number<<endl;
                cout<<"Account Balance : "<<balance<<endl;
                cout<<"==========================="<<endl;
                cout<<"Lone Number : "<<loan_num<<endl;
                cout<<"Lone Amount : "<<loan_amt<<endl;
                cout<<"==========================="<<endl;
            }
        };

        int main ()
        {
            Borrower man[100];
            int i,n;

            cout <<"Enter the number of Details you want ? :- ";
            cin >>n;

            for (i=0; i<n; i++)
            {
                cout <<"\nEnter the details of consumer :"<<endl;
                cout<<"**********************************"<<endl;
                man[i].set_All_Data();
            }
            for (i=0; i<n; i++)
            {
                man[i].Display_all_Data();
            }

        return 0;
        }

/*9. Write a C++ program to implement the following class hierarchy:
Student: id, name
StudentExam (derived from Student): Marks of 6 subjects
StudentResult (derived from StudentExam) : percentage
Define appropriate functions to accept and display details.
Create 'n' objects of the StudentResult class and display the marklist.*/

        class Student 
        {
            public :
            int id;
            string name ;
        };

        class StudentExam :public Student
        {
            public:
            int phy,math,che,hin,eng;
        };

        class StudentResult : public StudentExam
        {
            public:
            int percentage;
            int total_Marks=0;

            void Accept_Data()
            {
                cout <<"Enter the Student ID : ";
                cin>>id;

                cout <<"Enter the Name : ";
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                getline(cin,name);

                cout <<"Enter the marks of Physics :";
                cin>>phy;
                cout <<"Enter the marks of Chemistry :";
                cin>>che;
                cout <<"Enter the marks of Maths :";
                cin>>math;
                cout <<"Enter the marks of Hindi :";
                cin>>hin;
                cout <<"Enter the marks of English :";
                cin>>eng;

                total_Marks = phy+che+math+hin+eng;
                percentage = (total_Marks*100)/500;
            }

            void Result()
            {
                cout <<"\n********* RESULT ***********"<<endl;
                cout<<"______________________________"<<endl;
                cout <<"Student Roll no. : "<<id<<endl;
                cout <<"Name             : "<<name<<endl<<endl;
                cout <<"1.  Physic       : "<<phy<<endl;
                cout <<"2.  Chemistry    : "<<che<<endl;
                cout <<"3.  Math         : "<<math<<endl;
                cout <<"4.  Hindi        : "<<hin<<endl;
                cout <<"5.  English      : "<<eng<<endl<<endl;
                cout <<"        Total  =   "<<total_Marks<<" Marks" <<endl;
                cout <<"    Percentage =   "<<percentage<<" %"<<endl;
                cout<<"______________________________"<<endl;
            }
        };

        int main ()
        {
            StudentResult stud[100];
            int i,n;
            cout<<"How many Students you want to enter ? :- ";
            cin>>n;

            for (i=0; i<n; i++)
            {
                cout <<"\nEnter the Student Data : "<<endl;
                cout <<"*************************"<<endl;
                stud[i].Accept_Data();
            }

            for (i=0; i<n; i++)
            {
                stud[i].Result();
            }

        return 0;
        }

/*10. Consider two base classes
worker(int code, char name, float salary),
officer(float DA, HRA)
class manger(float TA(is 10% of salary), gross salary) is derived from both base
classes.
Write necessary member functions.*/

        class Worker
        {
            public:
            int code ;
            string name;
            float salary;
        };

        class Officer
        {
            public:
            float DA, HRA;
        };

        class Manager : public Worker, public Officer
        {
            public:
            float TA = 0, gross_salary = 0;

            void set_all_data()
            {
                cout<<"Enter Manager Code : ";
                cin>>code;

                cout <<"Enter Name : ";
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                getline(cin, name);

                cout<<"Enter Salary : ";
                cin>>salary;

                cout<<"Enter DA : ";
                cin>>DA;
                
                cout <<"Enter HRA : ";
                cin>>HRA;

                TA=(salary*10)/100;
                gross_salary=(salary+TA+DA+HRA);
            }
            void Manager_all_Info()
            {
                cout <<"\n     Manager Information"<<endl;
                cout <<"__________________________________"<<endl;
                cout <<"Manager Code : "<<code<<endl;
                cout <<"Name         : "<<name<<endl;
                cout <<"Salary       : "<<salary<<endl;
                cout <<"DA           : "<<DA<<endl;
                cout <<"TA           : "<<TA<<endl;
                cout <<"HRA          : "<<HRA<<endl<<endl;
                cout <<"Gross Salary : "<<gross_salary<<endl;
                cout <<"__________________________________"<<endl;       

            }
        };

        int main ()
        {
            Manager m[100];
            int i,n;
            cout<<"Enter the Manager Count : ";
            cin>>n;

            for (i=0; i<n; i++)
            {
                cout <<"\nEnter the manager Information : "<<endl;
                cout<<"*********************************"<<endl;
                m[i].set_all_data();
            }
            for(i=0; i<n; i++)
            {
                m[i].Manager_all_Info();
            }
            return 0;
        }

