/*including header files*/
#include <stdio.h>
#include <time.h>
/* defining a function_1. */
int function_1(int x, int y);
/* declearing function with unknown number of arguments. */
int function_3(int arg_f_3, ...);
/* Function 2 definition. */
double function_2(double x, double y)
{
    printf("Within function_2.\n");
    return (x - y);
}

int main()
{
    int x1 = 80;
    int y1 = 10;
    double x2 = 100.123456;
    double y2 = 10.123456;

    printf("Pass function_1  %d and %d.\n", x1, y1);
    printf("function_1 returns %d.\n", function_1(x1, y1));
    printf("Pass function_2  %f and %f.\n", x2, y2);
    printf("function_2 returns %f.\n", function_2(x2, y2));
    /* getting time. */
    time_t t;
    time(&t);
    printf("%s", ctime(&t));
    printf("%d\n", function_3(4));

    return 0;
}
/* function_1() definition */
int function_1(int x, int y)
{
    printf("Within function_1.\n");
    return 0;
}

int function_3(int arg_f_3, ...){
    printf("function 3 => %d\n",arg_f_3);
    return arg_f_3;
}