#include<stdio.h>

int main()
{

//1. Write a program to print Hello Students on the screen.
     printf("Hello student \n");

//2. Write a program to print Hello in the first line and Students in the second line.
      printf("Hello \n Student\n");

//3. Write a program to print “MySirG” on the screen. (Remember to print in double quotes)

      printf("\"My SirG \" \n");

//4. WAP to find the area of the circle. Take radius of circle from user as input and print the 
//   result in below given format.
//   Expected output format – “Area of circle is A having the radius R”. Replace A with area 
//   & R with radius.
        float a,r;
        printf("Enter the radius of the circle:-");
        scanf ("%f ",&r);
        a=r*r*3.14;

      printf ("%f is the area of the circle",a);

//5. WAP to calculate the length of String using printf function.
        int x=printf("the lenght of the string is -");
        printf ("%d",x);

//6. WAP to print the name of the user in double quotes.

        
        int a;
        printf("Enter the name of user- \n");
        scanf("%s",&a);

       
        printf("\" %s \" \n",a);

//Expected output format – “Hello , Amit Kumar”

        printf (" \"Hello , Aman raja\" \n");

//7. WAP to print “%d” on the screen.
        printf("\"%%d\" \n");

//8. WAP to print “\n” on the screen.
        printf("\"\\n\" \n");

//9. WAP to print “\\” on the screen.
        printf("\\\\ \n");

//10. WAP to take date as an input in below given format and convert the date format and 
//    display the result as given below.
//    User Input date format – “DD/MM/YYYY” (27/11/2022)
//    Output format –
//    “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)

        int d,m,y;
        printf("Enter the date in the formate DD//MM//YY :-");
        scanf("%d // %d // %d",&d,&m,&y);
        printf("Day-%d , Month-%d , Year-%d",d,m,y);


//11. WAP to take time as an input in below given format and convert the time format and 
//    display the result as given below.
//    User Input date format – “HH:MM”
//    Output format – “HH hour and MM Minute” Example –
//    “11:25” converted to “11 Hour and 25 Minute”
       int h, m;
       printf("enter the time in formate (HH:MM) :-");
       scanf("%d : %d",&h,&m);

       printf("%d Hour and %d Minute",h,m);


//12. Find output of below code:
/*int main()
{ 
int x = printf(“ineuron”);
printf(“%d”,x);
return 0;
}*/


//=> Output = ineuron7



 return 0;
}