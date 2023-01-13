/*charactors*/
/*header files*/
#include <stdio.h>

/*main function*/

int main(){
    /*printing out character*/
    char c1, c2;
    c1 = 'A';
    c2 = 'a';
    printf("Convert the value of c1 to charachter: %c.\n", c1);
    printf("Convert the value of c2 to charachter: %c.\n", c2);
    /* Converting nummuric value to character*/
    c1 = 65;
    c2 = 97;
    printf("The character that has nummuric value of 65 is: %c.\n", c1);
    printf("The character that has nummuric value of 97 is: %c.\n", c2);
    /* showing numeric value of a character*/
    c1 = 'A';
    c2 = 'a';
    printf("The numeric value of A is: %d.\n", c1);
    printf("The numeric value of a is: %d. \n", c2);
    /*Intiger vs floating-point dec=vision*/
    int int_num1, int_num2, int_num3;   /* Declare integer variables */
    float flt_num1, flt_num2, flt_num3; /* Declare floating-point variables */

    int_num1 = 32 / 10;    /* Both divisor and dividend are integers */
    flt_num1 = 32 / 10;
    int_num2 = 32.0 / 10;  /* The divisor is an integer */
    flt_num2 = 32.0 / 10;
    int_num3 = 32 / 10.0;  /* The dividend is an integer */
    flt_num3 = 32 / 10.0;

    printf("The integer divis. of 32/10 is: %d\n", int_num1);
    printf("The floating-point divis. of 32/10 is: %f\n", flt_num1);
    printf("The integer divis. of 32.0/10 is: %d\n", int_num2);
    printf("The floating-point divis. of 32.0/10 is: %f\n", flt_num2);
    printf("The integer divis. of 32/10.0 is: %d\n", int_num3);
    printf("The floating-point divis. of 32/10.0 is: %f\n", flt_num3);

    /* Exercise*/

    /*
    1.Write a program that prints out the numeric values of characters Z and z.
    */
    printf("question 1:\n");
    char ch1, ch2;
    ch1 = 'Z';
    ch2 = 'z';
    printf("The numeric value of Z is: %d.\n", ch1);
    printf("The numeric value of z is: %d.\n", ch2);

   /*
    2.Given two numeric values, 72 and 104, write a program to print out the corresponding two characters.
    */
   char n1, n2;
   n1 = 72;
   n2 = 104;
   printf("Converting numeric value of 72 to character is: %c.\n",n1);
   printf("Converting numeric value of 104 to character is: %c.\n",n2);
   /*
    3.For a 16-bit integer variable, can you assign the variable with an integer value of 32768?
    */
   int num_value = 32767;
   printf("%d.\n",num_value);
   /*
    4.Given the declaration double dbl_num = 123.456;, write a program that prints out the value of dbl_num in both floating-point and scientific notation formats.
    */
   double dbl_num = 123.456;
   printf("%.3f.\n", dbl_num);
   printf("%e.\n",dbl_num);
   /*
    5.Write a program that can print out the numeric value of the newline character (\n). (Hint: assign `\n' to a character variable.)
    */
   char new_line;
   new_line = '\n';
   printf("The numeric value of new line is: %d.\n", new_line);

    return 0;
}