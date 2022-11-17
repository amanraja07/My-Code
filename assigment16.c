#include<stdio.h>
int main ()
{
//1. Write a program to calculate the sum of two matrices each of order 3x3.

        int i ,j ;
        int a[3][3];
        int b[3][3];
        int sum[3][3];

        printf("Enter the '2' matrix of 3x3 :-");

        printf ("\nThe Element of matrix 1st:-");
        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                printf ("\nThe Element A[%d][%d]= ",i+1,j+1);
                scanf ("%d",&a[i][j]);
            }
        }

        printf ("\nThe Element of matrix 2nd:-\n");
        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                printf ("\nThe Element B[%d][%d]= ",i+1,j+1);
                scanf ("%d",&b[i][j]);
            }
        }

        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                sum[i][j] = ((a[i][j])+(b[i][j]));
            }
        }

        printf ("\nThe sum of Two Matrix is :-\n");
        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
               
               printf ("%d ",sum[i][j]);
                if (j==2)
                printf ("\n");

               
            }
        }

//2. Write a program to calculate the product of two matrices each of order 3x3.

        int i=0 ,j=0 ,k=0 ;
        int a[3][3];
        int b[3][3];
        int product[3][3];

        printf("Enter the '2' matrix of 3x3 :-");

        printf ("\nThe Element of matrix 1st:-\n");
        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                printf ("The Element A[%d][%d]= ",i+1,j+1);
                scanf ("%d",&a[i][j]);
            }
        }

        printf ("\nThe Element of matrix 2nd:-\n");
        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                printf ("The Element B[%d][%d]= ",i+1,j+1);
                scanf ("%d",&b[i][j]);
            }
        }

        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                int sum=0;
                for (k=0; k<3; k++)
                {
                    sum =sum + (a[i][k]*b[k][j]);
                }
                product[i][j]=sum;
               
            }
        }

        printf ("\nThe product of Two Matrix is :-\n");
        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
               
               printf ("%d ",product[i][j]);
                if (j==2)
                printf ("\n");

               
            }
        }

//3. Write a program in C to find the transpose of a given matrix.

        int i=0 ,j=0 ;
        int a[3][3];
        int b[3][3];

        printf("Enter the matrix of 3x3 :-");

        printf ("\nThe Element of matrix =\n");
        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                printf ("The Element A[%d][%d]= ",i+1,j+1);
                scanf ("%d",&a[i][j]);
            }
        }

       
        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                b[i][j]=a[j][i];
              
            }
        }

        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                printf ("%d ",b[i][j]);
                if (j==2)
                printf ("\n");
            }
        }

//4. Write a program in C to find the sum of right diagonals of a matrix.

        int i ,j ;
        int a[3][3];
        printf("Enter the matrix of 3x3 :-");

        printf ("\nThe Element of matrix =\n");
        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                printf ("The Element A[%d][%d]= ",i+1,j+1);
                scanf ("%d",&a[i][j]);
            }
        }

        int sum =((a[0][0])+(a[1][1])+(a[2][2]));
        printf ("\nThe Right daignol sum is =%d",sum);

//5. Write a program in C to find the sum of left diagonals of a matrix.

        int i ,j ;
        int a[3][3];
        printf("Enter the matrix of 3x3 :-");

        printf ("\nThe Element of matrix =\n");
        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                printf ("The Element A[%d][%d]= ",i+1,j+1);
                scanf ("%d",&a[i][j]);
            }
        }

        int sum =((a[0][2])+(a[1][1])+(a[2][0]));
        printf ("\nThe Left daignol sum is =%d",sum);

//6. Write a program in C to find the sum of rows and columns of a Matrix.

        int i ,j ,rowsum=0, colsum=0;
        int a[3][3];
        printf("Enter the matrix of 3x3 :-");

        printf ("\nThe Element of matrix =\n");
        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                printf ("The Element A[%d][%d]= ",i+1,j+1);
                scanf ("%d",&a[i][j]);
            }
        }
        printf("\n");
        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                rowsum=rowsum+a[i][j];
            }
            printf ("The Sum of %d Row = %d\n",i+1,rowsum);
            rowsum =0;
        }
        printf("\n");
        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                colsum=colsum+a[j][i];
            }
            printf ("The sum of %d coloum =%d\n",i+1,colsum);
           colsum=0;
        }

//7. Write a program in C to print or display the lower triangular of a given matrix.

        int i ,j ;
        int a[3][3];
        printf("Enter the matrix of 3x3 :-");

        printf ("\nThe Element of matrix =\n");
        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                printf ("The Element A[%d][%d]= ",i+1,j+1);
                scanf ("%d",&a[i][j]);
            }
        }
        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                if (j>i)
                {
                    a[i][j]=0;
                }
                printf ("%d ",a[i][j]);
                if (j==2)
                printf ("\n");
            }
        }

//8. Write a program in C to print or display an upper triangular matrix.

        int i ,j ;
        int a[3][3];
        printf("Enter the matrix of 3x3 :-");

        printf ("\nThe Element of matrix =\n");
        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                printf ("The Element A[%d][%d]= ",i+1,j+1);
                scanf ("%d",&a[i][j]);
            }
        }
        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                if (j<i)
                {
                    a[i][j]=0;
                }
                printf ("%d ",a[i][j]);
                if (j==2)
                printf ("\n");
            }
        }

//9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.

        int i ,j , count=0;
        int a[3][3];
        printf("Enter the matrix of 3x3 :-");

        printf ("\nThe Element of matrix =\n");
        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                printf ("The Element A[%d][%d]= ",i+1,j+1);
                scanf ("%d",&a[i][j]);
            }
        }
        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                if (a[i][j]==0)
                count++;
            }
        }
        if (count > 9/2)
        {
            printf ("The matrix is the 'Sparse Matrix'");
        }
        else 
        printf ("The matrix is the not a sparse matrix ");

//10. Write a program in C to find the row with maximum number of 1s.    

        int i ,j , count=0;
        int a[3][3];
        int c[3];
        printf("Enter the matrix of 3x3 :-");

        printf ("\nThe Element of matrix =\n");
        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                printf ("The Element A[%d][%d]= ",i+1,j+1);
                scanf ("%d",&a[i][j]);
            }
        }
        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                if (a[i][j]==1)
                count++;
            }
            c[i]=count;
            printf ("The %d Row is '%d'-1s.\n",1+i,count);
            count=0;
        }
        int max=c[0],result=0;
        for (i=0; i<3; i++)
        {
            if (max<c[i])
            {
                max=c[i];
                result=i;
            }
        }
        printf ("The maximum number of '1s' present in '%d Rows'",(result+1));

    return 0;
}