/*including header files*/
#include <stdio.h>

/*main function*/
int main(){
/* converting 0 to 15 hex number */
    int x;
    printf("Hex (uppercase) \t Hex (lowercase) \t Decimal \n");
    /* creating for loop */
    for(x = 0; x <16; x++ ){
        printf("%X                 \t %x                 \t %d \n", x, x, x);
    }
    /* The Null Statement */
    for(x = 1; x < 2; x++) printf("one line for loop.\n");
    
    /* The while statment */

    int c = ' ';
    printf("Enter x to exit! \n");
    while(c != 'x'){
        c = getc(stdin);
        printf("you enter: %c", c);
    }
    printf("\n Out of the while loop. Bye!\n");
    
    /* The do while loop */
    int i;
    i = 65;
    
    do{
      printf("The numeric value of %c is %d.\n", i, i);
      i++;
    }while(i < 72);

    /* Exercises */
    /* What is the difference between the following two pieces of code?
    for (i=0, j=1; i<8; i++, j++)
        printf("%d  +  %d  =  %d\n", i, j, i+j);
    this on have loop output
    for (i=0, j=1; i<8; i++, j++);
        printf("%d  +  %d  =  %d\n", i, j, i+j);  

    this one dosen't have loop outpute it simply increment    
        */

    /* Write a program that contains the two pieces of code shown in exercise 1, and then execute the program. What are you going to see on the screen? */
    int j;
    for(i = 0, j = 1; i < 8; i++, j++)
        printf("%d + %d = %d\n", i, j, i+j);

    for(i = 0, j = 1; i < 8; i++, j++);
        printf("%d  +  %d  =  %d\n", i, j, i+j);

    /* Rewrite the program in Listing 7.4. This time, you want the for statement to keep looping until the user enters the character K. */
    
    int k;
    printf("Enter k to exit!\n");
    for(k = ' '; k != 'k'; ){
     k = getc(stdin);
     putchar(k);

    }
    printf("Out of loop, bye !\n");

    /* Rewrite the program in Listing 7.6 by replacing the do-while loop with a for loop. */
    
    
    for(i = 65; i < 72; i++) 
       printf("the numeric value of %c is %d\n", i, i);
    /* Rewrite the program in Listing 7.7. This time, use a while loop as the outer loop and a do-while loop as the inner loop. */

    // int i, j;

    // for (i=1; i<=3; i++) {   /* outer loop */

    //     printf("The start of iteration %d of the outer loop.\n", i);
    //    for (j=1; j<=4; j++)  /* inner loop */
    //       printf("    Iteration %d of the inner loop.\n", j);
    //    printf("The end of iteration %d of the outer loop.\n", i);
    // }
    
    i = 1;
    
    while(i <= 3){
        printf("The start of iteration %d of the outer loop.\n", i);
        j = 1;
        do{
            printf("    Iteration %d of the inner loop.\n", j);
            j++;
        }while(j <= 4);
        printf("The end of iteration %d of the outer loop.\n", i);
        i++;
    }
    return 0;
}