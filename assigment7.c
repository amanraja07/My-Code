#include<stdio.h>
#include<math.h>


int main()
{
 //1. Write a program to find the Nth term of the Fibonnaci series.

        int i, n, prev=0, cur=1, seri=0;
        printf ("Enter the number \n");
        scanf ("%d",&n);
      
        for (i=1; i<n; i++)
        {
            seri=prev+cur;
            prev=cur;
            cur=seri;
        
        }
          printf("%d ",seri);

 //2. Write a program to print first N terms of Fibonacci series 
 
        int n, i, pre=0, cur=1, seri=0;
        printf ("Enter the number= ");
        scanf ("%d ",&n);
        printf(" 1 ");

        for (i=1; i<n; i++)
        {
            seri=pre+cur;
            pre=cur;
            cur=seri;
            
            printf(" %d ",seri);
        }
 
 //3. Write a program to check whether a given number is there in the Fibonacci series or not. 

         int i ,n , a=0, b=1, c=0;
         printf ("Enter the number ");
         scanf("%d",&n);

         for (i=1; 1 ; i++)
         {
            c=a+b;
            a=b;
            b=c;
            
            if(c==n)
            {
                printf("Number is present in the series");
                break;
            }
            if (c>n)
            {
                printf("Not present");
                break;
            }
          
         } 

 
 //4. Write a program to calculate HCF of two numbers 
 
            int i , a, b, hcf, min;
            printf("Enter the two number -");
            scanf("%d %d",&a,&b);
            
            min= a<b ? a:b ;

            for ( i = 1; i <=min; i++)
            {
                if (a%i==0 && b%i==0)
                {
                    hcf=i;
                }
            }
            printf("%d",hcf);

            

 //5. Write a program to check whether two given numbers are co-prime numbers or not. 
 
            int i ,a ,b ,hcf, min;
            printf ("Entr the two number -");
            scanf ("%d %d",&a,&b);
            min = a<b  ?  a:b ;

            for (i=1; i<=min; i++)
            {
                if (a%i==0 && b%i==0)
                {
                    hcf=i;

                }
            }
            if (hcf==1)
            printf("%d and %d are the co-prime ",a,b);
            else
            printf("%d and %d are not co-prime",a,b);

            
 
 
 //6. Write a program to print all Prime numbers under 100. 
 
            int n,i,prime;
            for(n=1; n<=100; n++)
            {
                for(i=1; i<n; i++)
                {
                    if (n%i==0)
                    prime=i;
                }
                if (prime==1)
                {
                    printf(" %d ",n);
                }
 
            }
            
 //7. Write a program to print all Prime numbers between two given numbers. 
 
            int a,b,i,prime,n;
            printf ("Enter the two number =");
            scanf ("%d %d",&a,&b);

            for (n=a; n<=b; n++)
            {
                for (i=1; i<n; i++)
                {
                    if (n%i==0)
                    prime=i;
                }
                if (prime == 1)
                {
                    printf(" %d ",n);
                }
            }
 
 //8. Write a program to find next Prime number of a given number. 
 
            int n, a ,i ,prime;
            printf("Enter the number :- ");
            scanf ("%d",&a);

            for (n=a+1; 1 ; n++  )
            {
                for (i=1; i<n ; i++)
                {
                    if (n%i==0)
                    prime=i;
                }
                if(prime==1)
                {
                    printf(" %d ",n);
                    break;
                }
                
            }

 //9. Write a program to check whether a given number is an Armstrong number or not. 
 
            int x ,y ,num , count=0 ,rem=0 ,sum=0;
            printf("Enter the number :-");
            scanf("%d",&num);

            x=num;
            while (x!=0)
            {
               
                x= x/10;
                count++;
            }
            
            printf("Digit in the number is %d \n",count);

            y=num;
            while (y!=0)
            {
                rem=y%10;
                y=y/10;

                sum=sum+ pow(rem,count);
            }
            printf("Sum is %d \n",sum);
            
            if (num==sum)
            {
                printf("The number is armstrong number \n");
            }
            else
            printf("The number is not armstrong number \n");

 //10. Write a program to print all Armstrong numbers under 1000

        int i, sum, num, count = 0;
    printf("All Armstrong number between 1 and 1000 are:\n");
    for (i = 1; i <= 1000; i++) {
        num = i;
        
        while (num != 0) {
            num /= 10;
            count++;
        }
        num = i;
        sum = pow(num % 10, count)
              + pow((num % 100 - num % 10) / 10, count)
              + pow((num % 1000 - num % 100) / 100, count);
        
        if (sum == i) {
            printf("%d ", i);
        }
        count = 0;
    }


    return 0;
}