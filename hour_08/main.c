/*including header files*/
#include <stdio.h>

/*main function*/
int main(){
    /* Using the sizeof operator to know the size of data type in C */
    char   ch = ' ';
    int    int_num = 0;
    float  flt_num = 0.0f;
    double dbl_num = 0.0;

    printf("The size of char is: %d-byte\n", sizeof(char));
      printf("The size of ch is: %d-byte\n", sizeof ch );
        printf("The size of int is: %d-byte\n", sizeof(int));
          printf("The size of int_num is: %d-byte\n", sizeof int_num);
            printf("The size of float is: %d-byte\n", sizeof(float));

          printf("The size of flt_num is: %d-byte\n", sizeof flt_num);
        printf("The size of double is: %d-byte\n", sizeof(double));
      printf("The size of dbl_num is: %d-byte\n", sizeof dbl_num);

    /* Exercises */
    /* Given x = 0xEFFF and y = 0x1000, what do ~x and ~y return, respectively, in the hex format? */
    
    /*Taking the values of x and y assigned in exercise 1, write a program that prints out the return values of !x and !y by using both the %d and %u formats in the printf() function. */
    /*Given x = 123 and y = 4, write a program that displays the results of the x << y and x >> y expressions. */
    /*Write a program that shows the return values (in hex) of the 0xFFFF^0x8888, 0xABCD & 0x4567, and 0xDCBA | 0x1234 expressions. */
    /*Use the ?: operator and the for statement to write a program that keeps taking the characters entered by the user until the character q is accounted. (Hint: Put the x!='q' ? 1 : 0 expression to the second field in the for statement.) */


    return 0;
}