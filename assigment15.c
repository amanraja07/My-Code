#include<stdio.h>

int greatest(int a[],int);
int smallest(int b[],int);
void sort (int a[],int);
void rotate (int a[],int,int);
void adjdupliacate (int a[],int);
void reverse (int a[],int);
void duplicate (int a[] ,int);
void unique (int a[],int);
void frequency (int a[],int);



int greatest (int a[],int n)
{
    int i,max=-1;
    for (i=0; i<n; i++)
    {
        if (max < a[i])
        {
            max=a[i];
        }
    }
    return max;   
}

int smallest (int b[],int n)
{
    int i ,min=9999;
    for (i=0; i<n; i++)
    {
        if (min > b[i])
            min =b[i];
    }
    return min;
}

void sort (int a[],int n)
{
    int i ,j ,temp;
    for (i=0; i<(n-1); i++)
    {
        for (j=(i+1); j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sort element = ");
    for (i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}

void rotate (int a[],int n,int d)
{
    int i ,j;
    for (j=0; j<d; j++)
    {
        int temp=a[0];
        for (i=0; i<(n-1); i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=temp;
    }
    printf("The rotated value is :-");

    for (i=0; i<n; i++)
    {
        printf(" %d",a[i]);
    }
   
}

void adjduplicate (int a[], int n)
{
    int i, result=0 ;
    for (i=0; i<10; i++)
    {
        if (a[i]==a[i+1])
        {
            result =a[i];
            break;
        }
    }
    if (result)
    {
        printf ("The first adjecent duplicate = %d",result);
    }
    else
    printf ("No any adjecent duplicate is avalible");
}

void reverse (int a[],int n)
{
    int i ,b[5];
       for (i=0; i<5; i++)
    {
        b[i]=a[(n-1)-i];
    }
    for (i=0; i<5; i++)
    {
        printf ("%d ",b[i]);
    }
    
}

void duplicate (int a[], int n)
{
    int i ,j ,count=0 ;
    for (i=0; i<n; i++)
    {
      for (j=(i+1); j<n; j++)
      {
        if (a[i]==a[j])
            count++;
      }
    }
    printf ("The Total duplicate number is %d",count);
}

void unique (int a[], int n)
{
   int i , uni[100]={0} ;
   for (i=0; i<n; i++)
   {
        uni [a[i]]++;
   }

   for (i=0; i<100; i++)
   {
    if (uni[i]==1)
    printf ("%d ",i);
   }
   
}
void merge (int a[],int b[], int n)
{
  int i=0 , j=0, k=0, c[10];
  for (k=0; k<10; k++)
  {
    if (a[i]<b[j])   
    {
        c[k]=a[i];
        i++;
    }
    else
    {
        c[k]=b[j];
        j++;
    }
  }
  for (k=0; k<10; k++)
  {
    printf ("%d ",c[k]);
  }
}

void frequency (int a[],int n)
{
    int i ,freq[100]={0};
    for (i=0; i<n; i++)
    {
        freq [a[i]]++;
    }

    for (i=0; i<100; i++)
    {
        if (freq[i]!=0)
        {
            printf ("%d => %d\n",i,freq[i]);
        }
    }
}




int main()
{
//1. Write a function to find the greatest number from the given array of any size. (TSRS)

        int a[10],i,s;
        printf("Enter the 10 number :-");
        for (i=0; i<=9; i++)
        {
            scanf("%d",&a[i]);
        }
        s=greatest(a,10);
        printf("\nThe Greatest number = %d",s);
       
//2. Write a function to find the smallest number from the given array of any size. (TSRS)

        int a[10],i,s;
        printf("Enter the 10 number :-");
        for (i=0; i<=9; i++)
        {
            scanf("%d",&a[i]);
        }
        s=smallest(a,10);
        printf("\nThe Smallest number = %d",s);

//3. Write a function to sort an array of any size. (TSRN)

        int a[10],i;
        printf("Enter the 10 number :-");
        for (i=0; i<=9; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,10);
        
//4. Write a function to rotate an array by n position in d direction. The d is an indicative 
//   value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and 
//   d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

         int a[5],i,n;
         printf("Enter the 5 number and 'n' position:-");
         
         for (i=0; i<5; i++)
         {
            scanf("%d",&a[i]);
         }
         scanf("%d",&n);

         rotate (a,5,n);

//5. Write a function to find the first occurrence of adjacent duplicate values in the array. 
//   Function has to return the value of the element.

        int a[10], i, n;
        printf ("Enter the 10 number :-");
        for (i=0; i<10; i++)
        {
            scanf("%d",&a[i]);
        }
        adjduplicate (a,10);

//6. Write a function in C to read n number of values in an array and display it in reverse 
//   order.

        int a[5], i, n;
        printf ("Enter the 5 number :-");
        for (i=0; i<5; i++)
        {
            scanf("%d",&a[i]);
        }
        reverse(a,5);

//7. Write a function in C to count a total number of duplicate elements in an array.

        int a[10], i, n;
        printf ("Enter the '10' number :-");
        for (i=0; i<10; i++)
        {
            scanf("%d",&a[i]);
        }
         duplicate (a,10);

//8. Write a function in C to print all unique elements in an array.

        int a[10], i, n;
        printf ("Enter the '10' number :-");
        for (i=0; i<10; i++)
        {
            scanf("%d",&a[i]);
        }
         unique (a,10);

//9. Write a function in C to merge two arrays of the same size sorted in descending 
//   order.

        int a[5]={1,3,5,7,9};
        int b[5]={2,6,8,10,25};

        merge(a,b,5);

//10. Write a function in C to count the frequency of each element of an array.

        int a[10],i;
        printf ("Enter the 10 number :-");
        for (i=0; i<10; i++)
        {
            scanf ("%d",&a[i]);
        }
        frequency(a,10);

    return 0;
}