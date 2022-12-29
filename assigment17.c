#include <stdio.h>

int main ()
{
//1. Write a program to calculate the length of the string. (without using built-in method)

       char str[100], i;
        printf("Enter the string :-");
        fgets (str, 100, stdin);

        for (i=0; str[i]; i++);
        printf ("The length of the string is :-%d",(i-1));
        
//2. Write a program to count the occurrence of a given character in a given string.

        
        char s[100],o;
        int i ,count=0;
        printf ("Enter the string :-");
        fgets (s,100,stdin);

        printf ("Enter the occurance char in string :-");
        scanf ("%c",&o);

        for (i=0; s[i]; i++)
        {
            if (s[i]==o)
            count++;
        }
        printf ("The occurance cahracter %c is %d",o,count);

//3. Write a program to count vowels in a given string

        char str[100], i ,count=0;
        printf ("Enter the string :-");
        fgets (str,100,stdin);
        for(i=0; str[i] ; i++)
        {
            if (str[i]=='a' || str[i]=='e' ||str[i]=='o' || str[i]=='u' || str[i]=='i')
                count++;
        }
        printf ("The number of the 'Vowel' in string is :-%d",count);

//4. Write a program to convert a given string into uppercase

        char s[100],i;
        printf ("Enter the string in 'lower case' =");
        fgets (s,100,stdin);

        for (i=0; s[i]; i++)
        {
            if (s[i]==32)
                s[i]=32;
            else
            {
            s[i]=s[i]-32;
            }
            printf ("%c",s[i]);
        }

//5. Write a program to convert a given string into lowercase

        char s[100];
        int i;
        printf ("Enter the string in 'upper case' =");
        fgets (s,100,stdin);

        for (i=0; s[i]; i++)
        {
            if (s[i]==32)
                s[i]=32;
            else
            {
            s[i]=s[i]+32;
            }
            printf ("%c",s[i]);
        }
//6. Write a program to reverse a string.

        char str[20],rev[20];
        int i ,count=0;

        printf ("Enter the string :-");
        fgets (str, 20, stdin);

        for (i=0; str[i]; i++)
        {
            count++;
        }
        for (i=0; i<count; i++)
        {
            rev[i]=str[(count-1)-i];
            printf ("%c",rev[i]);
        }

//7. Write a program in C to count the total number of alphabets, digits and special 
//   characters in a string.

        char str[100];
        int i, alp=0, dig=0, spcl=0 ;
        printf ("Enter the string:-");
        fgets (str, 100, stdin);

        for (i=0; str[i]; i++)
        {
            if (str[i]==32 && str[i]==0)
            continue;

            else if (str[i]>=65 && str[i]<=90)
            alp++;

            else if (str[i]>=97 && str[i]<=122)
            alp++;

            else if (str[i]>=48 && str[i]<=57)
            dig++;

            else
            spcl++;
        }
        printf ("\nThe total number of alphabate is :- %d",alp);
        printf ("\nThe total number of digit is :-%d",dig);
        printf ("\nThe total number of special character is :-%d",spcl);

//8. Write a program in C to copy one string to another string.

        char s[20], c[20];
        int i;

        printf ("Enter the string :-");
        fgets (s,20,stdin);

        for (i=0; s[i]; i++)
        {
            c[i]=s[i];
            printf ("%c",c[i]);
        }

//9. Write a C program to sort a string array in ascending order.

        char s[100], temp;
        int i ,j;
        printf ("Enter the string :-");
        fgets (s, 100 ,stdin);

        for (i=0; s[i]; i++)
        {
            for (j=(i+1); s[j]; j++)
            {
                if (s[i]>s[j])
                {
                    temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                }
            }
        }
        printf ("The short string are :- ");
        printf ("%s",s);

//10. Write a program in C to Find the Frequency of Characters.    

        char s[100], freq[300]={0};
        int i ,j ;
        printf ("Enter the string :-");
        fgets (s,100,stdin);

        for (i=0; s[i]; i++)
        {
            freq[s[i]]++;
        }
        for (i=0; i<300; i++)
        {
            if (i==32)
            printf ("Spacebar = %d\n",freq[i]);
            else if (freq[i]!=0)
            printf ("%c => %d\n",i,freq[i]);
        }
    return 0;
}