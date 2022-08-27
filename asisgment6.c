#include<stdio.h>
int main()
{
//1. Write a program to calculate sum of first N natural numbers 
      
      int n,i=1, sum=0;
      printf ("Enter the value of 'N' :- " );
      scanf("%d",&n);
      while(i<=n)
      {
            printf("\n %d",i);
            sum =sum+i;            
            i++;
      }
      printf("\n sum =%d",sum);

//2. Write a program to calculate sum of first N even natural numbers 

       int n,i=1, sum=0;
      printf ("Enter the value of 'N' :- " );
      scanf("%d",&n);
      while(i<=n)
      {
            if(i%2==0)
            {
                   printf("\n %d",i);
                   sum =sum+i;

            }
          i++;

      }
      printf("\n sum =%d",sum);

//3. Write a program to calculate sum of first N odd natural numbers 

       int n,i=1, sum=0;
      printf ("Enter the value of 'N' :- " );
      scanf("%d",&n);
      while(i<=n)
      {
            if(i%2!=0)
            {
                   printf("\n %d",i);
                   sum =sum+i;

            }
          i++;

      }
      printf("\n sum =%d",sum);

//4. Write a program to calculate sum of squares of first N natural numbers 

       int n,i=1, sum=0;
      printf ("Enter the value of 'N' :- " );
      scanf("%d",&n);
      while(i<=n)
      {
          printf("\n %d",i*i);
          sum=(sum+(i*i));

          i++;

      }
      printf("\n sum =%d",sum);

//5. Write a program to calculate sum of cubes of first N natural numbers 

        int n,i=1, sum=0;
      printf ("Enter the value of 'N' :- " );
      scanf("%d",&n);
      while(i<=n)
      {
          printf("\n %d",i*i*i);
          sum=(sum+(i*i*i));

          i++;

      }
      printf("\n sum =%d",sum);
//6. Write a program to calculate factorial of a number .

      int n,i=1, f=1;
      printf ("Enter the value of 'N' :- " );
      scanf("%d",&n);
      while(i<=n)
      {
            
         printf("%d * ",i);
         f=f*i;
         i++;
      }
      printf("\n factorial of %d =%d",n,f);  

//7. Write a program to count digits in a given number 

        int a,count=0;
        printf ("Enter the number =");
        scanf("%d",&a);
        while(a>0)
        {
            a=a/10;
            count=count+1;
            
        }

        printf("The digit in the number is %d",count);

//8. Write a program to check whether a given number is a Prime number or not 

     int a , i;
     printf("Enter the number =");
     scanf("%d",&a);
     for(i=2;i<a;i++)
     {
           if (a%i==0)
           {
            printf("%d = Non Prime number \n",a);
            break;
          }
          i++;
     }
      
            printf("%d = prime \n",a);

   
//9. Write a program to calculate LCM of two numbers 

         int num1,num2,lcm,temp,gcd;

         printf("Enter the two interger value \n");
         scanf("%d %d",&num1,&num2);

         int a =num1;
         int b =num2;

         while (num2!=0)
         {
            temp= num2;
            num2=num1 % num2;
            num1=temp;

         }

         gcd= num1;
         printf("gcd of %d and %d =%d\n",a,b,gcd);

         lcm=(a*b)/gcd;
         printf("lcm of %d and %d is %d",a,b,lcm);
 
//10. Write a program to reverse a given number    

        int a,result=0;
        printf ("Enter the number =");
        scanf("%d",&a);
        printf("The number is %d and reverse=",a);
        while(a>0)
        {
            result=a%10;
            a=a/10;

            printf("%d",result);
       
        }

    return 0;
}
