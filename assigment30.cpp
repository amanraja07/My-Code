#include <iostream>
#include<string>
#include<cstring>
#include<ctype.h>

using namespace std;

int main ()
{
//1. Write a C++ program to demonstrate the use of try, catch block with the argument as an 
//   integer and string using multiple catch blocks.

        int x ;
        cout <<"Enter the number :-";
        cin >>x;

        try 
        {
            if (x>0)
            throw "The number is Positive number .";

            if (x==0)
            throw "The number is non-positive number .";

            if (x<0)
            throw "The number is negative number ."; 

        }

        catch(const char * msg)
        {
            cout << msg;
        }

//2. Write a C++ program to demonstrate try, throw and catch statements.

        int x ;
        cout <<"Enter the number :-";
        cin >>x;

        try 
        {
            if (x>0)
            throw "The number is Positive number .";

            if (x==0)
            throw exception();

            if (x<0)
            throw 'n'; 

        }

        catch(const char * msg)
        {
            cout << msg;
        }
        catch(const char c)
        {
             cout << "The number is negative .";  
        }
        catch (...)
        {
            cout <<"This is for the exception throw";
        }

//3. Write a C++ program to perform arithmetic operations on two numbers and throw an 
//exception if the dividend is zero or does not contain an operator.

        int a ,b ,result;
        cout <<"Enter the two number :-"<<endl;
        cin >>a>>b;
        try
        {
            if (b==0)
            throw 0;

        }
        catch(const int a)
        {
            cout <<"The result is infinite";
        }
        
        result=a/b;
        cout <<"The value is ="<<result<<endl;

//4. Write a C++ program to accept an email address and throw an exception if it does not 
//contain @ symbol.

        string str;
        cout <<"Enter the Email Address :-"<<endl;
        getline (cin , str) ;

       try
       {
        int i;
        for (i=0; str[i]; i++)
        {
            if (str[i]=='@')
            {
            cout <<"This Email is Valid ."<<endl;
            exit(0);
            }
        }
        if (true)
        throw "This Email is Invalid .";
       }
       catch(const char *msg)
       {
        cout<<msg;
       }
    
//5. Write a C++ program to accept a mobile number and throw an exception if it does not 
//contain 10 digits.

        string str;
        int l ;
        cout <<"Enter the Mobile number :-";
        getline (cin , str) ;
        l=str.size();

        try
        {
            if (l==10)
            throw "The Number is correct.";

            else
            throw "The Number is Wrong.";
        }
        catch(const char *msg)
        {
            cout <<msg;
        }
        
//6. Write a C++ program to accept area pin code and throw an exception if it does not 
//contain 6 digits.

        string str;
        int l ;
        cout <<"Enter the Area PIN CODE :-";
        getline (cin , str) ;
        l=str.size();

        try
        {
            if (l==6)
            throw "The PIN CODE is correct.";

            else
            throw "The PIN CODE is Wrong.";
        }
        catch(const char *msg)
        {
            cout <<msg;
        }

//7. Write a C++ program to accept a username if the username has less than 6 characters 
//or does contain any digit or special symbol.

        string str;
        cout <<"Enter the Username :-"<<endl;
        getline (cin , str);

        int i, isDigit=0, isChar=0 ,isSpecialChar=0 ,isException=0;
        int len=str.size();

        try
        {
            for (i=0; str[i]; i++)
            {
                if (isdigit(str[i]))
                    isDigit=1;

                if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9'))
                    isChar=1;
                else
                    isSpecialChar=1;
            }
            if (len > 6)
            throw 1;

            if (isDigit == 0)
            throw 2;

            if(isChar == 0)
            throw 3;

            if(isSpecialChar == 0)
            throw 4;
        }
        catch(const int num)
        {
            if (num == 1)
            cout <<"The Username has more than '6' Character "<<endl;

            if (num == 2)
            cout<<"The Username has not found Digit. "<<endl;

            if (num == 3)
            cout<<"The Username has not Found Alphabates. "<<endl;

            if (num == 4)
            cout<<"The User name has not found Special Character."<<endl;

            isException = 1;
        }

        if (isException == 0)
        cout<<"The Username has Valid ."<<endl;

        else
        cout<<"The Username has 'Not' Valid ."<<endl;
        
//8. Write a C++ program to accept a password and throw an exception if the password has 
//less than 6 characters or does not contain a digit or does not contain any special 
//character or does not contain any capital letter.

        string str;
        cout <<"Enter the Password :-"<<endl;
        getline (cin , str);

        int i, isDigit=0, isChar=0 ,isCpitalLatter=0 ,isSpecialChar=0 ,isException=0;
        int len=str.size();

        try
        {
            for (i=0; str[i]; i++)
            {
                if (isdigit(str[i]))
                    isDigit=1;

                if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9'))
                    isChar=1;
                else
                    isSpecialChar=1;

                if (str[i]>='A' && str[i]<='Z')
                    isCpitalLatter=1;    
            }
            if (len <= 6)
                throw 1;

            if (isDigit == 0)
                throw 2;

            if(isChar == 0)
                throw 3;

            if(isSpecialChar == 0)
                throw 4;

            if(isCpitalLatter == 0)
                throw 5;    
        }
        catch(const int num)
        {
            if (num == 1)
            cout <<"The Password has Less than '6' Character "<<endl;

            if (num == 2)
            cout<<"The Password has not found Digit. "<<endl;

            if (num == 3)
            cout<<"The Password has not Found Alphabates. "<<endl;

            if (num == 4)
            cout<<"The Password has not found Special Character."<<endl;

            if (num == 5)
            cout<<"The Password has not found Capital Latter."<<endl;

            isException = 1;
        }

        if (isException == 0)
        cout<<"The Password has Valid ."<<endl;

        else
        cout<<"The Password has 'Not' Valid ."<<endl;

//9. Write a C++ program to accept Gmail id only and throw an exception if the id does not 
//contain @ and gmail.com.

        string str;
        cout <<"Enter the Gmial id :-"<<endl;
        getline (cin , str) ;

       try
       {
        int i;
        for (i=0; str[i]; i++)
        {
            if (str[i]=='@')
            {
            cout <<"This Gmail is Valid ."<<endl;
            exit(0);
            }
        }
        if (true)
        throw "This Gmail does not have "@" ,so it is Invalid .";
       }
       catch(const char *msg)
       {
        cout<<msg;
       }

//10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8 
//characters or does contain a digit or special symbol or space

        string str;
        cout <<"Enter the Nickname :-"<<endl;
        getline (cin , str);

        int i, isDigit=0, isChar=0 ,isSpace=0 ,isSpecialChar=0 ,isException=0;
        int len=str.size();

        try
        {
            for (i=0; str[i]; i++)
            {
                if (isdigit(str[i]))
                    isDigit=1;

                if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9') || str[i]== ' ')
                    isChar=1;
                else
                    isSpecialChar=1;

                if (str[i] == ' ')
                    isSpace=1;    
            }
            if (len > 8)
                throw 1;

            if (isDigit == 1)
                throw 2;

            if(isChar == 0)
                throw 3;

            if(isSpecialChar == 1)
                throw 4;

            if(isSpace == 1)
                throw 5;    
        }
        catch(const int num)
        {
            if (num == 1)
            cout <<"The Nickname has Greater than '8' Character "<<endl;

            if (num == 2)
            cout<<"The Nickname has 'Found Digit' . "<<endl;

            if (num == 3)
            cout<<"The Nickname has not Found Alphabates. "<<endl;

            if (num == 4)
            cout<<"The Nickname has 'Found Special Character'."<<endl;

            if (num == 5)
            cout<<"The Nickname has 'Space'."<<endl;

            isException = 1;
        }

        if (isException == 0)
        cout<<"The Nickname has Valid ."<<endl;

        else
        cout<<"The Nickname has 'Not' Valid ."<<endl;

    return 0;
}