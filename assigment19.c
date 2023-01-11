#include <stdio.h>
#include <string.h>

int main ()
{
//1. Write a program to find the number of vowels in each of the 5 strings stored in two 
//   dimensional arrays, taken from the user.

        char s[100];
        int i, j;
        int count=0;
        printf ("Enter the 5 string :-");
        for (i=0; i<5; i++)
        {
            fgets (s,100,stdin);
        }
        for (i=0; i<5; i++)
        {
            
            for (j=0; s[j]; j++)
            {
                if (s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
                count++;                
            }
            printf("The %d string has %d vowels.\n",i+1,count);
            count=0; 
        }

//2. Write a program to sort 10 city names stored in two dimensional arrays, taken from 
//   the user.

        char s[10][100], t[100];
        int i ,j ;

        printf ("Enter the 10 city names :-");

        for  (i=0; i<10; i++)
        {
            gets (s[i]);
        }
        for (i=0; i<9; i++)
        {
            for (j=i+1; j<10; j++)
            {
                if (strcmp (s[i],s[j])>0)
                {
                    strcpy (t,s[i]);
                    strcpy (s[i],s[j]);
                    strcpy (s[j],t);
                }
            }
        }
        printf ("\nThe Shorted Strings are :=\n");
        for (i=0; i<10; i++)
        {
            printf ("%s \n",s[i]);
        }

//3. Write a program to read and display a 2D array of strings in C language.

        char s[5][20];
        int i;
        printf ("Enter the 5 name :-");
        for (i=0; i<5; i++)
        {
            gets (s[i]);
        }
        for (i=0; i<5; i++)
        {
            printf ("%s\n",s[i]);
        }

//4. Write a program to search a string in the list of strings.

        char s[5][20],temp[20];
        int i,j,count=0;
        printf ("Enter the 5 strings :-");
        for (i=0; i<5; i++)
        {
            gets (s[i]);
        }
        fflush(stdin);
        printf ("Enter the searching string :-");
        gets (temp);

        for (i=0; i<5; i++)
        {
            if (strcmp(s[i],temp)==0)
            {
                count++;
                break;
            }   
        }
        if (count)
        printf ("STRING FOUND");
        else
        printf("STRING NOT FOUND");

//5. Suppose we have a list of email addresses, check whether all email addresses have 
//   ‘@’ in it. Print the odd email out.

        int i,j;
        char s[5][20];
        printf("Enter the 5 email address:-\n");
        for (i=0; i<5; i++)
        {
            gets(s[i]);
        }
        printf("\nThe vlaid Email ID are:-\n\n");
        for (i=0; i<5; i++)
        {
            if (strchr(s[i],'@')!=0)
            {
                printf ("%s \n",s[i]);
            }
        }

//6. Write a program to print the strings which are palindrome in the list of strings.

        char s[5][20];
        int i ,l=0,x,y;
        printf ("Enter the 5 string :-");
        for (i=0; i<5; i++)
        {
            gets(s[i]);
        }
        printf ("\nThe PALINDROME strings are :-\n");
         for (i=0; i<5; i++)
         {
            l=strlen(s[i]);
            
           x=0, y=(l-1);
           while (x<=y)
           {
             if (s[i][x] != s[i][y])
             break;
             
             x++;
             y--;
           }
           if (x>y)
            printf ("%s \n",s[i]);
         }

//7. From the list of IP addresses, check whether all ip addresses are valid.

        char ip[30];
        int i ;
        printf ("Enter the ip address :-");
        gets (ip);
        char *a= strtok(ip,".");
        while (a!= NULL)
        {
            int x = atoi (a);
            if (x>=0 && x<=255)
            printf ("%d ",x);
            a=strtok(NULL,".");
        }
        
//8.Given a list of words followed by two words, the task is to find the minimum distance 
//  between the given two words in the list of words.
//  (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
//  word1 = “the”, word2 = “fox”, OUTPUT : 1 )

        char s[6][20]={"aman","suman","anshu","amisha","arjun","sarita"};
        char word1[20],word2[20];
        int i,w1=-1,w2=-1, min=1000;
        for (i=0; i<6; i++)
        {
             printf ("%s ,",s[i]);
        }
        printf ("\nEnter the '1st' word form the above:-");
        gets (word1);
        printf("\nEnter the '2nd' word from the above:-");
        gets(word2);
        for (i=0; i<6; i++)
        {
            if (strcmp(s[i],word1) == 0)
            w1=i;
            if (strcmp(s[i],word2) == 0)
            w2=i;

            if (w1!=-1 && w2!=-1)
            min=((w2-w1)-1);
        } 
        printf ("The minimum distance is %d",min);

//9.Write a program that asks the user to enter a username. If the username entered is 
//  one of the names in the list then the user is allowed to calculate the factorial of a 
//  number. Otherwise, an error message is displayed

    char s[6][20]={"aman","suman","anshu","amisha","arjun","sarita"};
    char name[20];
    int i ,result=0;
    printf ("Enter the Name :-");
    gets (name);
    for (i=0; i<6; i++)
    {
        if (strcmp(s[i],name)==0)
        result++;
    }
    if(result)
    {
        printf("Enter the number to calculate the factorail:-");
        int x,factorial=1;
        scanf ("%d",&x);
        for (i=1; i<=x; i++)
        {
            factorial=factorial*i;
        }
        printf ("The factorial of %d is %d",x,factorial);
    }
    else
    printf ("The user name is Invalied.");

//10. Create an authentication system. It should be menu driven.

        char id [3][2][20]={
            {"aman","123"},
            {"anshu","321"},
            {"suman","258"}};
        
        int i ,j,flag=0;
        char user[20],pass[20]; 
        printf("Enter the user name :-");
        gets(user);
        printf ("Enter the password :-");
        gets (pass);
        for (i=0; i<3; i++)
        {
            if (strcmp(id[i][0],user)==0 && strcmp(id[i][1],pass)==0)
            flag++;
        }
        if (flag)
        printf ("The id is valid.");
        else
        printf("Wrong id and password.");


return 0;    
}