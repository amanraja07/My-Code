#include<stdio.h>

int length (char s[]);
void reverse(char str[]);
void uppercase (char s[]);
void lowercase (char s[]);
void alphanumeric (char s[]);
void palindrome (char s[]);
int countword (char s[]);
void wordreverse(char s[]);
void reapeated (char s[]);
void compare (char a[], char b[]);
void swap(char str[] , int ,int);



int main ()
{
//1. Write a function to calculate length of the string

        /*char s[100];
        int result;
        printf ("Enter the string :-");
        fgets(s,100,stdin);

        result=length(s);
        printf ("The Length of the string :- %d",(result-1));*/

//2. Write a function to reverse a string.

        /*char str[100];
        printf ("Enter the string :-");
        fgets (str,100,stdin);

        reverse(str);*/

//3. Write a function to compare two strings.

        /*char a[20],b[20];
        
        printf ("Enter the 1st string :-");
        fgets (a,20,stdin);

        printf ("Enter the 2nd string :-");
        fgets (b,20,stdin);

        compare(a,b);*/

//4. Write a function to transform string into uppercase

        /*char s[100];
        printf ("Enter the string in 'LOWERCASE':-");
        fgets (s,100,stdin);

        uppercase(s);*/

//5. Write a function to transform a string into lowercase

        /*char s[100];
        printf ("Enter the string in 'UPPERCASE' :-");
        fgets (s,100,stdin);

        lowercase (s);*/

//6. Write a function to check whether a given string is an alphanumeric string or not. 
//   (Alphanumeric string must contain at least one alphabet and one digit)

        /*char s[100];
        printf ("Enter the string :- ");
        fgets(s,100,stdin);

        alphanumeric (s);*/

//7. Write a function to check whether a given string is palindrome or not.

        /*char s[100];
        printf ("Enter the string :-");
        fgets(s,100,stdin);
       
        palindrome(s);*/

//8. Write a function to count words in a given string

        /*char s[100];
        int result=0;
        printf ("Enter the word:-");
        fgets (s,100,stdin);

        result=countword(s);
        printf ("The total number of the word is %d",result);*/

//9. Write a function to reverse a string word wise. (For example if the given string is 
//   “Mysirg Education Services” then the resulting string should be “Services Education 
//    Mysirg” )

        char s[100];
        printf ("Enter the string :- ");
        gets(s);

        wordreverse (s);

//10. Write a function to find the repeated character in a given string.    

        /*char s[100];
        printf ("Enter the string :-");
        fgets (s,100,stdin);

        reapeated (s);*/



return 0;
}

int length (char s[])
{
 int count=0 ,i ;
 for (i=0; s[i]; i++)
 {
    count++;
 }
 return count;
}

void reverse (char str[])
{
    int i, count=0;
    char s[100];
    for (i=0; str[i]; i++)
    {
        count++;
    }
    for (i=0; i<count; i++)
    {
        s[i]=str[(count-1)-i];
        printf ("%c",s[i]);
    }
}

void uppercase (char s[])
{
     int i ;
     for ( i=0; s[i]; i++)
     {
        if (s[i]==32)
           s[i]=32;
        else
           s[i]=s[i]-32;

        printf ("%c",s[i]);    
     } 
      
}

void lowercase (char s[])
{
        int i ;
        for (i=0; s[i]; i++)
        {
          if (s[i]==32)
                {
                     s[i]=32;
                }
          else
                {
                     s[i]=s[i]+32;
                }
                printf ("%c",s[i]);               
        }
}

void alphanumeric (char s[])
{
     int i ,alp=0, dig=0;

     for (i=0; s[i]; i++)
     {
        if (s[i]>=48 && s[i]<=57)
        dig++;

        else if (s[i]>=65 && s[i]<=90)
        alp++;

        else if (s[i]>=97 && s[i]<=122)
        alp++;  
     }   
     if (alp && dig)
     printf ("The string is the alphanumeric string");

     else
     printf ("The string is not the alphanumeric string");
}

void palindrome (char s[])
{
    int i=0, count=0 ,j;
    for (i=0; s[i]; i++)
    count ++;
  
    j=(count-2);
    i=0;
    while (i<=j)
    {
        if (s[i]!=s[j])
        {
           break;
        }     
        i=i+1;
        j=j-1;
    }
   
    if (i>j)
    printf ("The string is PALINDROME .");
    else
    printf("The string is NOT PALINDROME . ");    
    
}

int countword (char s[])
{
     int i ,count=0;
     for (i=0; s[i]; i++)
     {
        if (s[i]==32)
        count++;
     }
     return count+1;   
}

void reapeated(char s[])
{
        int i , count=0;
        char freq[400]={0};
        for (i=0; s[i]; i++)
        {
              freq[s[i]]++;  
        }
        for (i=0; i<400; i++)
        {
                if (freq[i]>1)
                printf ("%c ==> %d\n",s[i],freq[i]);
        }
}

void compare (char a[],char b[])
{
        int i,j;

        for (i=0; a[i]; i++);
        for (j=0; b[j]; j++);

        if (i==j)
        printf ("Both the string are equal .");

        else if (i<j)
        printf ("1st string is smaller than 2nd string.");

        else if (i>j)
        printf ("1st string is bigger than 2nd string.");
}

void wordreverse (char s[])
{
        int i=0, start=0, end=0, temp=0;
        while (s[i]!='\0')
        {
                while (s[i]!=' ')
                {
                        if (s[i]=='\0')
                        {
                            temp++;
                            break;
                        }
                       end++;
                       i++;
                }
                swap(s,start,(end-1));
                
                if (temp)
                break;
                start=end++;
                i++;
        }
        swap(s,0,(i-1));
        printf("%s ",s);
        
}

void swap(char str[], int i, int j)
{
        char temp;
        while(i<=j)
        {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
                i++;
                j--;
        }
}