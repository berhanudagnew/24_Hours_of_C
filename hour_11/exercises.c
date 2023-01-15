/* Include headeer fies. */
#include <stdio.h>

/* main function. */
int main(){
/*    Exercises
1.Given three integer variables, x = 512, y = 1024, and z = 2048, 
  write a program to print out their left values as well as their right values.
*/
int x, y, z;
x = 512;
y = 1024;
z = 2048;
printf("left value of x is: %p, right value of x is: %d\n", &x, x);
printf("left value of y is: %p, right value of y is: %d\n", &y, y);
printf("left value of z is: %p, right value of z is: %d\n", &z, z);
/*
2.Write a program to update the value of the double variable flt_num from 123.45 to 543.21 by using a double pointer.
*/
double flt_num, *ptr_f_n;
flt_num = 123.45;
printf("flt_num addrese: %p, content: %5.2f\n", &flt_num, flt_num);
printf("ptr_f_n addrese: %p, content: %p\n", &ptr_f_n, ptr_f_n);
ptr_f_n = &flt_num;
printf("flt_num addrese: %p, content: %5.2f\n", &flt_num, flt_num);
printf("ptr_f_n addrese: %p, content: %5.2f\n", &ptr_f_n, *ptr_f_n);
/*
3.Given a character variable ch and ch = `A', 
  write a program to update the value of ch to decimal 66 by using a pointer.
*/
char ch, *ptr_ch;
ch = 'A';
printf("ch addrese: %p, content: %c\n", &ch, ch);
printf("ptr_ch addrese: %p, content: %p\n", &ptr_ch, ptr_ch);
ptr_ch = &ch;
printf("ch addrese: %p, content: %c\n", &ch, ch);
printf("ptr_ch addrese: %p, content: %c\n", &ptr_ch, *ptr_ch);
*ptr_ch = 'B';
printf("Update value of ch to 66 using pointer => %d\n", *ptr_ch);

/*
4.Given that x=5 and y=6, 
  write a program to calculate the multiplication of the two integers and print out the result, 
  which is saved in x, all in the way of indirection (that is, using pointers).
*/
int *ptr_x, *ptr_y;
x = 5;
y = 6;
ptr_x = &x;
ptr_y = &y;
*ptr_x = *ptr_x * *ptr_y;
printf("x * y = %d\n", x);

    return 0;
}