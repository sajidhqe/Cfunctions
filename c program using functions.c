// A program Using functions
// Md SAJIDUL HAQUE SAJID IN DHAKA @ 3:03 am

#include <stdio.h>


int add (a,b);    // GLOBAL DECLARATION OF USED FUNCTION //
int sub (a,b);    // GLOBAL DECLARATION OF USED FUNCTION //     //return_type function_name (argument);
int mul (a,b);    // GLOBAL DECLARATION OF USED FUNCTION //

int main ()
{
        int c,d,e;
        int a,b;
        printf("ENTER VALUE OF 1st Number: ");
        scanf("%d" , &a);
        printf("ENTER VALUE OF 2nd Number: ");
        scanf("%d" , &b);

    c= add(a,b);        // CALLING A FUNCTION //
    d= sub(a,b);        // CALLING A FUNCTION //
    e= mul (a,b);       // CALLING A FUNCTION //
            printf(" %d + %d = %d\n",a,b,c);
            printf(" %d - %d = %d\n",a,b,d);
            printf(" %d x %d = %d\n",a,b,e);

}

    int add (a,b)    // FUNCTION DEFINITION   //return_type function_name(argument)  { body of the function} //
{

        return a+b;

}

  int sub (a,b)     // FUNCTION DEFINITION   //return_type function_name(argument)  { body of the function} //
{

        return a-b;

}

  int mul (a,b)     // FUNCTION DEFINITION   //return_type function_name(argument)  { body of the function} //
{



        return a*b;

}

