/*including header files*/
#include <stdio.h>
#include <math.h>

/*main function*/
int main(){

    /* Using signed and unsigned modifier */
    signed char  ch;
    int          x;
    unsigned int y;

    ch = 0xFF;
    x = 0xFFFF;
    y = 0xFFFFu;
    printf("The decimal of signed 0xFF is %d.\n", ch);
    printf("The decimal of signed 0xFFFF is %d.\n", x);
    printf("The decimal of unsigned 0xFFFFu is %u.\n", y);
    printf("The hex of decimal 12345 is 0x%X.\n", 12345);
    printf("The hex of decimal -12345 is 0x%X.\n", -12345);

    /* Using short and long modifier */

    printf("The size of short int is: %d.\n", (int)sizeof(short int));
    printf("The size of long int is: %d.\n",(int)sizeof(long int));
    printf("The size of float is: %d.\n",(int)sizeof(float));
    printf("The size of double is: %d.\n",(int)sizeof(double));
    printf("The size of long double is: %d.\n",(int)sizeof(long double));

    /* Using %hd, %ld, and %lu specifiers */
    /* run this part in separete to remove declaration conflict*/

    /* short int         x;
    unsigned int      y;
    long int          s;
    unsigned long int t;

    x = 0xFFFF;
    y = 0xFFFFU;
    s = 0xFFFFFFFFl;
    t = 0xFFFFFFFFL;
    printf("The short int of 0xFFFF is %hd.\n", x);
    printf("The unsigned int of 0xFFFF is %u.\n", y);
    printf("The long int of 0xFFFFFFFF is %ld.\n", s);
    printf("The unsigned long int of 0xFFFFFFFF is %lu.\n", t); */

    /* Using sin(), cos(), and tan() functions  add math.h library */

    /* If you are using linux
        use:
            compile with  -> gcc main.c -o main -lm 
            and run using -> ./main
    */
    double b;
    b = 45.0;
    b *= 3.141593 / 180.0;

    printf("The sin of 45 is: %f\n", sin(b));
    printf("The cos of 45 is: %f\n", cos(b));
    printf("The tan of 45 is: %f\n", tan(b)); 

    /* Using pow() and sqrt() functions */

    double a, c;
    a = 64.0;
    b = 3.0;
    c = 0.5;
    printf("pow(%1.0f, %1.0f) returns: %1.0f\n",a, b, pow(a, b));
    printf("sqrt(%1.0f) returns: %1.0f\n", a, sqrt(a));
    
    return 0;
}