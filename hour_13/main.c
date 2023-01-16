/*including header files*/
#include <stdio.h>

/*main function*/
int main(){
    /* Declering string. */
    char array_ch[7] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};

    /* Initializing String. */
    char str_hello[7] = "Hello!";
    
    /* String length. */
    printf("String length = %lu\n", strlen(str_hello));

    /* Copy string with strcpy() */

    // strcpy(str2, str1);

    /* Reading and Writing Strings */

    char str[80];
    int i, delt = 'a' - 'A';
    printf("Enter a string less than 80 characters:\n");
    gets( str );
    i = 0;
    while (str[i]){
      if ((str[i] >= 'a') && (str[i] <= 'z'))
         str[i] -= delt;  /* convert to upper case */
      ++i;
    }
    printf("The entered string is (in uppercase):\n");
    puts( str );

    /* Using %s with the printf() Function. */
    /* Using the scanf() function with various format specifiers. */
    int x, y;
    float z;

    printf("Enter two integers separated by a space:\n");
    scanf("%d  %d", &x, &y);
    printf("Enter a floating-point number:\n");
    scanf("%f", &z);
    printf("Enter a string:\n");
    scanf("%s", str);
    printf("Here are what you've entered:\n");
    printf("%d  %d\n%f\n%s\n", x, y, z, str);

    return 0;
}