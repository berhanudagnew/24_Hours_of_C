/*including header files*/
#include <stdio.h>

/*main function*/
int main(){
    /*
    Exercises
    1.Given a character array in the following statement,
      char str1[] = "This is Exercise 1.";
      write a program to copy the string from str1 to another array, called str2.
    */
    
    /*
    2.Write a program to measure the length of a string by evaluating the elements in the character array one by one. 
      To prove you get the right result, you can use the strlen() function to measure the same string again.
    */
    
    /*
    3.Rewrite the program in Listing 13.4. This time, convert all uppercase characters to their lowercase counterparts.
    */
    
    /*
    4.Write a program that uses the scanf() function to read in two integers entered by the user, 
      adds the two integers, and then prints out the sum on the screen.
        
    */
    int a, b, d, g='Z';
    // printf("Enter a and b separated by space:");
    // scanf("%d %d", &a, &b); 103 - (97-65)
    d = 'a' - 'A';
    printf("a + b = %d\n%c\n", a+b,g+d);


    return 0;
}