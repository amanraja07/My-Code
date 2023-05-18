#include<stdio.h>
#include<string.h>


int main ()
{
//1. Define a function to input variable length string and store it in an array without memory wastage. 

        char *str, c;
        int i=0, j=1;
        str=(char*) malloc(sizeof(char));
        
        printf ("Enter the string :-");

        while (c != '\n')
        {
            c=getc(stdin);
            j++;
            str= (char*)realloc(str,j * sizeof(char));
            str[i]=c;
            i++;
        }
        str[i]='\0';

        printf ("The enter string is :- %s",str);
        free (str);
        
//2. Write a program to ask the user to input a number of data values he would like to enter then 
//   create an array dynamically to accommodate the data values. Now take the input from the user 
//   and display the average of data values.

            int *p, n;
            printf ("Enter the number of term for the average :-");
            scanf("%d",&n);
            p=(int*)calloc(n,sizeof(int));

            if (p==NULL)
            {
                printf ("The Memory allocation is failed .\n");
                return 0;
            }

            int i=0,sum=0,avg=0;
            for (i=0; i<n; i++)
            {
                scanf("%d",(p+i));
                sum=sum + *(p+i);
            }
            avg=sum/n;
            printf ("The average of the number is :- %d",avg);
            free(p);

//3. Write a program to calculate the sum of n numbers entered by the user using malloc and free. 

            int *ptr ,n , sum=0;
            printf("Enter Number for sum:- ");
            scanf ("%d",&n);

            ptr=(int *)malloc(n*sizeof(int));

            printf ("Enter the number :-");
            for (int i=0; i<n; i++)
            {
                scanf ("%d",(ptr+i));

                sum+=*(ptr+i);
            }
            free(ptr);
            printf ("The sum of Number is :-%d ",sum);

//4. Write a program to input and print text using dynamic memory allocation. 

            char *str,c;
            int i=0, j=1;
            str=(char*)malloc(sizeof(char));
            printf("Enter the string :-");

            while (c != '\n')
            {
                c=getc(stdin);
                j++;
                str=(char *)realloc(str, j*sizeof(char));
                str[i]=c;
                i++;
            }
            str[i] ='\0';

            printf ("The enter string is :- %s",str);
            free(str);
            
//5. Write a program to read a one dimensional array, print sum of all elements along with inputted array elements using dynamic memory allocation. 

            int *ptr, i=0, sum=0;
            ptr=(int*)malloc(5*sizeof(int));
            printf ("enter the 5 number :-");
            for (i=0; i<5; i++)
            {
                scanf ("%d",(ptr+i));

                sum+=*(ptr+i);
            }
            printf ("The sum of all element in the arry is :-%d",sum);
            free (ptr);

//6. Write a program in C to find the largest element using Dynamic Memory Allocation. 

            int *ptr, i=0, j=0;
            ptr=(int*)malloc(10*sizeof(int));

            printf ("Enter the 10 number :-");
            for (i=0; i<10; i++)
            {
                scanf ("%d",ptr+i);
            }
            for (i=0; i<9; i++)
            {
                for (j=i+1; j<10; j++)
                {
                    if (*(ptr+i) > *(ptr+j))
                    {
                        int temp;
                        temp=*(ptr+i);
                        *(ptr+i)=*(ptr+j);
                        *(ptr+j)=temp;
                    }
                }
            }

            for (i=0; i<10; i++)
            {
                printf ("%d ",*(ptr+i));
            }
            printf ("\n\nThe largest number is :- %d",*(ptr+9));
            free(ptr);

//7. Write a program to demonstrate memory leak in C. 

            int *ptr;
            ptr=(int*)malloc(sizeof (int));

            ptr=NULL;

//8. Write a program to demonstrate dangling pointers in C. 

            int *ptr;
            ptr=(int*)malloc(sizeof (int));
            *ptr=10;
            printf("Before free the value is :- %d\n",*ptr);

            free(ptr);

            printf ("After free the value is :- %d\n",*ptr);

//9. Write a program to allocate memory dynamically of the size in bytes entered by the user. 
//   Also handle the case when memory allocation is failed. 

            char *str, c;
            int i=0, j=1;
            str= (char *)malloc(sizeof (char));
            if (str==NULL)
                {
                    printf ("The Memory allocation is failed .\n");
                    return 0;
                }

            printf ("Enter the string:-");

            while (c !='\n')
            {
                c=getc(stdin);
                j++;
                str=(char*)realloc(str, j*sizeof(char));
                str[i]=c;
                i++;              
            }
            str[i] = '\0';
            printf ("The entered string is :-%s",str);
            free(str);

//10. Find out the maximum and minimum from an array using dynamic memory allocation in C.   

            int *ptr, i=0, j=0;
            ptr=(int*)malloc(10*sizeof(int));

            printf ("Enter the 10 number :-");
            for (i=0; i<10; i++)
            {
                scanf ("%d",ptr+i);
            }
            for (i=0; i<9; i++)
            {
                for (j=i+1; j<10; j++)
                {
                    if (*(ptr+i) > *(ptr+j))
                    {
                        int temp;
                        temp=*(ptr+i);
                        *(ptr+i)=*(ptr+j);
                        *(ptr+j)=temp;
                    }
                }
            }

            for (i=0; i<10; i++)
            {
                printf ("%d ",*(ptr+i));
            }
            printf ("\n\nThe MAXIMUM NUMBER is :- %d",*(ptr+9));
            printf ("\nThe MINIMUM NUMBER is :- %d",*(ptr+0));
            free(ptr);

return 0;
}