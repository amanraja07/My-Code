#include<stdio.h>

int main ()
{
//1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user. 

        int a[10],i,sum=0;
        printf("Enter the 10 number :- ");
        for (i=0; i<=9; i++)
        {
            scanf("%d",&a[i]);

            sum=sum+a[i];
        }
        printf("Sum = %d",sum);
        
//2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user. 

        float a[10],sum=0;
        int i;
        printf("Enter the 10 number :- ");
        for (i=0; i<=9; i++)
        {
            scanf("%f",&a[i]);

            sum=sum+a[i];
        }
        printf("Average = %f",(sum/10));

//3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user. 

        int a[10], se=0, so=0 ,i ;
        printf ("Enter the 10 Number =");
        for (i=0; i<=9; i++)
        {
            scanf ("%d",&a[i]);

            if (a[i]%2==0)
            {
                se=se+a[i];
            }
            else 
            {
                so=so+a[i];
            }
           
        }
         printf("\nThe sum of all even number is %d",se);
         printf("\nThe sum of all odd number is %d",so);

//4. Write a program to find the greatest number stored in an array of size 10. 
//   Take array values from the user. 

        int a[10],i,max;
        printf("Enter the 10 number :-");
        for (i=0; i<=9; i++)
        {
            scanf("%d",&a[i]);    
        }
        max=a[0];
        for (i=1; i<=9; i++)
        {
            if (max<a[i])
            max=a[i];
        }
        printf("The Greatest number =%d",max);
        
//5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user. 

        int a[10],i,min;
        printf("Enter the 10 number :-");
        for (i=0; i<=9; i++)
        {
            scanf("%d",&a[i]);    
        }
        min=a[0];
        for (i=1; i<=9; i++)
        {
            if (min>a[i])
            min=a[i];
        }
        printf("The Smallest Number = %d",min);

//6. Write a program to sort elements of an array of size 10. Take array values from the user. 

        int a[10],i,j,k,temp;
        printf("Enter the 10 number :-");
        for(i=0; i<=9; i++)
        {
            scanf("%d",&a[i]);
        }
        for (j=0; j<9; j++)
        {
            for (k=j+1; k<10; k++)
            {
                if (a[j] > a[k])
                {
                    temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }

            }
        }
        printf ("\nThe sort element are = ");
        for (i=0; i<10; i++)
        {
            printf("%d ",a[i]);
        }
        
//7. Write a program to find second largest in an array.Take array values from the user. 

        int a[10],i,j,k,temp;
        printf("Enter the 10 number :-");
        for(i=0; i<=9; i++)
        {
            scanf("%d",&a[i]);
        }
        for (j=0; j<9; j++)
        {
            for (k=j+1; k<10; k++)
            {
                if (a[j] > a[k])
                {
                    temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }

            }
        }
        printf ("\nThe second largest element are = %d",a[8]);
       
//8. Write a program to find the second smallest number in an array.Take array values from the user. 

       int a[10],i,j,k,temp;
        printf("Enter the 10 number :-");
        for(i=0; i<=9; i++)
        {
            scanf("%d",&a[i]);
        }
        for (j=0; j<9; j++)
        {
            for (k=j+1; k<10; k++)
            {
                if (a[j] > a[k])
                {
                    temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }

            }
        }
        printf ("\nThe second smallest element are = %d",a[1]);
       

//9. Write a program in C to read n number of values in an array and display it in reverse order. 
//    Take array values from the user. 

        int a[10],i;
        printf("Enter the 10 number :-");

        for (i=0; i<=9; i++)
        {
            scanf ("%d",&a[i]);
        }
        printf("\nThe reversed order is :-");
        for (i=9; i>=0; i--)
        {
            printf("%d ", a[i]);
        }


//10. Write a program in C to copy the elements of one array into another array.Take array values from the user.

        int a[10],b[10],i;
        printf("Enter the 10 number = ");

        for (i=0; i<=9; i++)
        {
            scanf ("%d",&a[i]);

        }
        printf("\nThe new array is:- ");
        for (i=0; i<=9; i++)
        {
            b[i]=a[i];

            printf("%d ",b[i]);
        }

    return 0;
}