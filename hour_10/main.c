/*including header files*/
#include <stdio.h>

/*main function*/
int main(){
    /* Using if statment */
    int i;
    printf("Integers that can be divided by both 2 and 3\n");
    printf("(within the range of 0 to 100):\n");
    for(i = 0; i < 100; i++){
        if((i % 2 == 0) && (i % 3 == 0)){
            printf(" %d\n", i);
        };
    }

    /* Using switch statment */

    int day;
    printf("Please enter a single digit for a day\n");
    printf("(within the range of 1 to 3):\n");
    // day = getchar();
    day = '1';

    switch(day){
        case '1':
            printf("Day %c\n", day);
            break;
        case '2':
            printf("Day %c\n", day);
            break;
        case '3':
            printf("Day %c\n", day);
            break;
        default:
            ;
        }
    
    /* Using the continue statement */

    int  sum;

     sum = 0;
     for (i=1; i<8; i++){
       if ((i==3) || (i==5))
          continue;
       sum += i;
    }
    printf("The sum of 1, 2, 4, 6, and 7 is: %d\n", sum);

    /* Using goto statment */
    /*
    labelname:
        statement1;
        statement2;
        .
        .
        .
        goto  labelname;
    */
    int choise;
    
    babi:
    printf("Enter your choice:\n");
    choise = getchar();
    if(choise == 'a')
        printf("You enterd %c greate.\n", choise);
    else if(choise == 'b'){
        printf("You enterd %c go back.\n", choise);
        goto babi;
    }
    else if(choise == 'e')
        printf("Exit\n");
    else printf("You enterd other choice.\n");

    /* Exercises
        1.Rewrite the program in Listing 10.1. This time, use the logical expression i%6 == 0 in the if statement.
        2.Rewrite the program in Listing 10.1 by using nested if statements.
        3.Write a program to read characters from the standard I/O. If the characters are A, B, and C, display their numeric values on the screen. (The switch statement is required.)
        4.Write a program that keeps reading characters from the standard input until the character q is entered.
        5.Rewrite the program in Listing 10.7. This time, instead of skipping 3 and 5, skip the integer that can be divided evenly by both 2 and 3.
    
    */

    return 0;
}