/*including header files*/
#include <stdio.h>

/*main function*/
int main(){
    
    /*declearing variable*/
    int x, y;
    
    /*assigne value*/
    x=2;
    y=6;
    printf("x is: %d y is: %d\n",x,y);
    /*cast or convert operator */
    printf("(float)x / y produce: %f\n",(float)x / y);


    /*    Exercises     */ 
    /*Given x = 1 and y = 3, write a program to print out the results of these expressions: x += y, x += -y, x -= y, x -= -y, x *= y, and x *= -y. */
    x = 1;
    y = 3;
    printf("x = %d and y = %d\n", x, y);
    printf("x += y is: %d\n", x += y);
    printf("x += -y is: %d\n", x += -y);
    printf("x -= -y is: %d\n", x -= -y);
    printf("x *= y is: %d\n", x *= y);
    printf("x *= -y is: %d\n", x *= -y);
     

    /*Given x = 3 and y = 6, what is the value of z after the expression
    z = x * y == 18 is executed?*/
    x = 3;
    y = 6;
    int z;
    printf("z = x * y == 18 is: %d\n",z = x * y == 18);
    /*Write a program that initializes the integer variable x with 1 and outputs results with the following two statements:
    printf("x++ produces:   %d\n", x++);
    printf("Now x contains: %d\n", x);*/
    x = 1;
    printf("x++ produces:   %d\n", x++);
    printf("Now x contains: %d\n", x);
    /*Rewrite the program you wrote in exercise 3. This time, include the following two statements:
    printf("x = x++ produces: %d\n", x = x++);
    printf("Now x contains:   %d\n", x);*/
    printf("x = x++ produces: %d\n", x = x++);
    printf("Now x contains:   %d\n", x);
    /*What do you get after running the executable of the program? Can you explain why you get such a result?*/

    /*The following program is supposed to compare the two variables, x and y, for equality. What's wrong with the program? (Hint: Run the program to see what it prints out.)
    #include <stdio.h>

    main()
    {
    int x, y;

    x = y = 0;
    printf("The comparison result is: %d\n",  x = y);
    return 0;
    }*/
    x = y = 0;
    printf("The comparison result is: %d\n",  x = y);
    /*x = y is not comparision it is assignment operator */
    return 0;
};