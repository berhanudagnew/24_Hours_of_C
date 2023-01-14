/* Include header files */
#include <stdio.h>
#include <math.h>

/* Main functioan */

int main(){
    /*   Exercises
        1.Given the following statements,
        int x;
        unsigned int y;
        x = 0xAB78;
        y = 0xAB78;
        write a program to display the decimal values of x and y on the screen. */
        
        int x;
        unsigned int y;
        x = 0xAB78;
        y = 0xAB78;
        printf("Decimal value of 0xAB78 is: %d\n", x);
        printf("Decimal value of 0xAB78 is: %d\n", y);
        /*
        2.Write a program to measure the sizes of short int, long int, and long double on your machine.
        */
        short int short_int;
        long int long_int;
        long double long_double;
        printf("The size of short int is: %zu\n", sizeof(short_int));
        printf("The size of long int is: %zu\n", sizeof(long_int));
        printf("The size of long double is: %ld\n", sizeof(long_double));
       /*
        3.Give the binary representations of the following:
            512
            -1
            128
            -128
        */
       /*
       4.Write a program to display the decimal value given in quiz question 2 in the hex format. Does the result from the program match your answer to that question?
       */
       
        /*
        5.Given an angle of 30 degrees, write a program to calculate its sine and tangent values.
        */
       double angle_a;
       angle_a = 30.0;
       angle_a *= 3.141593 / 180.0;

       printf("sin(30) returns: %0.1f.\n", sin(angle_a));
       printf("tan(30) returns: %1.3f.\n", tan(angle_a));

       /*
        6.Write a program to calculate the non-negative square root of 0x19A1.
       */
       unsigned int v;
       v = 0x19A1;
       printf("sqrt(%d) returns: %f\n", v, sqrt(v));
    return 0;
}