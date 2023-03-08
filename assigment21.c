#include<stdio.h>
#include<string.h>

int main ()
{
//1. Define a structure Employee with member variables id, name, salary

        struct employee 
        {
                int id;
                char name[20];
                float salary;
        }; 
        
//2. Write a function to take input employee data from the user. [ Refer structure from
//   question 1 ]

        int i ;
        struct employee e[10];
                for (i=0; i<10; i++)
                { 
                        
                        printf ("Enter the employee id ,name , salary :-");
                        scanf ("%d",&e[i].id);
                        fflush(stdin);
                        fgets(e[i].name,20,stdin);
                        e[i].name[strlen(e[i].name)-1]='\0'; 
                        scanf("%f",&e[i].salary);
                }

//3. Write a function to display employee data. [ Refer structure from question 1 ]

        for (i=0; i<10; i++)
        printf ("%d %s %f\n",e[i].id ,e[i].name, e[i].salary);

//4. Write a function to find the highest salary employee from a given array of 10
//   employees. [ Refer structure from question 1]

        int k ,j ;
        struct employee temp;
        for(j=0; j<10; j++)
        {
                for (k=0; k<10-j; k++)
                {
                        if (e[k].salary>e[k+1].salary)
                        {
                                temp =e[k];
                                e[k]=e[k+1];
                                e[k+1]=temp;
                        }
                }
        }
        pirntf ("\nThe Heighest salary man is:- ");
        printf ("%d %s %f\n",e[9].id ,e[9].name, e[9].salary);

//5. Write a function to sort employees according to their salaries [ refer structure from
//   question 1]

        int k ,j ;
        struct employee temp;
        for(j=0; j<10; j++)
        {
                for (k=0; k<10-j; k++)
                {
                        if (e[k].salary>e[k+1].salary)
                        {
                                temp =e[k];
                                e[k]=e[k+1];
                                e[k+1]=temp;
                        }
                }
        }
        printf ("\nThe Lowest to Heighest Employees are :-\n");
        for (i=0; i<10; i++)
        printf ("%d %s %f\n",e[i].id ,e[i].name, e[i].salary);


//6. Write a function to sort employees according to their names [refer structure from
//   question 1]

        struct employee temp;
        int j,k;
        for(j=0; j<10; j++)
        {
                for (k=0; k<10-j; k++)
                {
                        if (strcmp(e[k].name,e[k+1].name)>0)
                        {
                                (temp=e[k]);
                                (e[k]=e[k+1]);
                                (e[k+1]= temp);
                        }
                }
        }
        for (i=0; i<10; i++)
        printf ("%d %s %f\n",e[i].id ,e[i].name, e[i].salary);

//7. Write a program to calculate the difference between two time periods.

        struct time
        {
              int hour;
              int min;
        };

        struct time t[2];
        int i,r1=0,r2=0;
        for (i=0; i<2; i++)
        {
             printf ("Enter the Time[%d] as Hour : Min :-",i+1);
             scanf ("%d:%d",&t[i].hour,&t[i].min);
        }

        if (t[1].min < t[0].min)
        {
                t[1].min +=60;
                t[1].hour -=1;

                 r1= t[1].hour - t[0].hour;
                 r2= t[1].min - t[0].min;
        }
        else
        {
             r1= t[1].hour - t[0].hour;
             r2= t[1].min - t[0].min;    
        }
       
        printf ("The difference of the %d:%d and %d:%d is %d:%d .",t[0].hour,t[0].min,t[1].hour,t[1].min,r1,r2);

//8. Write a program to store information of 10 students and display them using structure.

        struct student
        {
                char name[20];
                int roll;
                int class;
        };

        int i ;
        struct student s[10];
        for (i=0; i<10; i++)
        {
                printf ("Enter the student%d name ,roll number ,calss :-",i+1);
                fflush(stdin);
                fgets(s[i].name,20,stdin);
                s[i].name[strlen(s[i].name)-1]='\0';
                scanf("%d",&s[i].roll);
                scanf("%d",&s[i].class);
        }

        for (i=0; i<10; i++)
        {
                printf ("%s %d %d\n",s[i].name,s[i].roll,s[i].class);
        }
        

//9. Write a program to store information of n students and display them using structure

        struct student
        {
                int class;
                char name[20];
                int roll;
        };

        int i ,n;
        printf ("Enter the number of total student:-");
        scanf ("%d",&n);

        struct student s[n];
        for (i=0; i<n; i++)
        {
                printf ("Enter the student%d - roll number, name ,calss :-",i+1);

                scanf("%d",&s[i].roll);
                fflush(stdin);
                fgets(s[i].name,20,stdin);
                s[i].name[strlen(s[i].name)-1]='\0';
                scanf("%d",&s[i].class);
        }

            for (i=0; i<n; i++)
        {
                printf ("%d %s %d\n",s[i].roll,s[i].name,s[i].class);
        }

//10.Write a program to enter the marks of 5 students in Chemistry, Mathematics and
//   Physics (each out of 100) using a structure named Marks having elements roll no.,
//   name, chem_marks, maths_marks and phy_marks and then display the percentage
//   of each student

        struct student
        {
                int roll;
                char name[20];
                float chem;
                float phy;
                float math;
                float per;
        };
        
        struct student s[5];
        int i;
        for (i=0; i<5; i++)
        {
                printf ("Enter the student%d - roll number, name ,marks_chemistry, marks_phy, marks_math :-",i+1);
                scanf ("%d",&s[i].roll);
                fflush(stdin);
                fgets(s[i].name, 20 ,stdin);
                s[i].name[strlen(s[i].name)-1]='\0';
                scanf("%f",&s[i].chem);
                scanf("%f",&s[i].phy);
                scanf("%f",&s[i].math);

                s[i].per=((s[i].chem+s[i].phy+s[i].math)*100)/300;
        }
            for (i=0; i<5; i++)
        {
                printf ("%d %s %f, %f, %f, %f%%\n",s[i].roll,s[i].name,s[i].chem,s[i].phy,s[i].math,s[i].per);
        }

 return 0;   
}
