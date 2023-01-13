/*Reading user input by using getc()*/
#include <stdio.h>

int main(){
    char ch1,ch2;
    printf("Please enter one character:\n");
    /*get input*/
    /*
    ch1 = getc(stdin);
    ch2 = getchar();
    printf("The character you just enter is: %c.\n", ch1);
    printf("The character you just enter is: %c.\n", ch2);
    */
    /*converting to hexa number*/
    printf("Hex(uppercase)    Hex(lowercase)    Decimal\n");
    printf("%X                %x                %d\n", 0, 0, 0);
    printf("%X                %x                %d\n", 1, 1, 1);
    printf("%X                %x                %d\n", 10, 10, 10);
    printf("%X                %x                %d\n", 11, 11, 11);
    printf("%X                %x                %d\n", 12, 12, 12);
    printf("%X %x %d\n",15,15,15);
    /*specifying minimum field width*/
    int num1;
    num1 = 1234;
    printf("%4d %-4d\n", num1,num1);
    /* Aligning output */
    printf("%-4d\n", num1);
    /*Exercice*/

    /*Write a program to put the characters B, y, and e together on the screen.*/
    int ch_B, ch_y, ch_e;
    ch_B = 'B';
    ch_y = 'y';
    ch_e = 'e';
    putchar(ch_B);
    putchar(10);
    putchar(ch_y);
    putchar(10);
    putchar(ch_e);
    putchar(10);
    /*Display the two numbers 123 and 123.456 and align them at the left edge of the field.*/
    int n1 = 123;
    double n2 = 123.456;

    printf("%3d %1.3f\n", n1, n2);
    /*Given three integers–15, 150, and 1500–write a program that prints the integers on the screen in the hex format.*/
    printf("Hex(uppercase)\t Hex(lowercase)\t Decimal\n");
    int a,b,c;
    a = -15;
    b = 150;
    c = 1500;
    printf("%X \t %x \t %d\n", a, a, a);
    printf("%X \t %x \t %d\n", b, b, b);
    printf("%X \t %x \t %d\n", c, c, c);
    /*Write a program that uses getchar() and putchar() to read in a character entered by the user and write the character to the screen.*/
    char input_1;
    input_1 = getchar();
    putchar(input_1);
    putchar(10);
    /*If you compile the following C program, what warning or error messages will you get?
    main()

    {

    int ch;

    ch = getchar();

    putchar(ch);

    return 0;

    }*/
    int ch;
    ch = getchar();
    putchar(ch);
    putchar(10);
    /*there is no error in this program*/
    return 0;
}