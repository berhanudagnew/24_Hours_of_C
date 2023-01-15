/* Including header files. */
#include <stdio.h>

/* main function */
int main(){
    /*
    Exercises
    */
    /*1.Given this character array:
    char array_ch[5] = {`A', `B', `C', `D', `E'};
    write a program to display each element of the array on the screen.*/

    char array_ch[5] = {'A', 'B', 'C', 'D', 'E'}, a, e;
    for(int i = 0; i < 5; i++)
        printf("%c, ",array_ch[i]);
    printf("\n");
    /*2.Rewrite the program in exercise 1, but this time use a for loop to initialize the character array with `a', `b', `c', `d', and `e', and then print out the value of each element in the array.*/
    for(int j=97; j<102; j++){
        array_ch[j-97] = j;
        printf("%c, ", array_ch[j-97]);
    }
    printf("\n");
    /*3.Given this two-dimensional unsized array:
    char list_ch[][2] = {
            `1', `a',
            `2', `b',
            `3', `c',
            `4', `d',
            `5', `e',
            `6', `f'};
    write a program to measure the total bytes taken by the array, and then print out all elements of the array.*/
    char list_ch[][2] = {
            '1', 'a',
            '2', 'b',
            '3', 'c',
            '4', 'd',
            '5', 'e',
            '6', 'f'};
    printf("size => %lu\n", sizeof(list_ch));
    for(int d = 0; d < 6; d++){
        
        printf("%c, %c,\n", list_ch[d][0], list_ch[d][1]);
        
    }

    /*4.Rewrite the program in Listing 12.5. This time put a string of characters, I like C!, on the screen.*/
    char like[10] ={'I', ' ',
                    'l','i','k','e',' ',
                    'C','!','\0'
                    };
    for(int l_c = 0; like[l_c] != '\0'; l_c++){
        printf("%c", like[l_c]);
    }
    putchar(10);
    /*5.Given the following array:
    double list_data[6] = {
            1.12345,
            2.12345,
            3.12345,
            4.12345,
            5.12345};
    use the two equivalent ways taught in this lesson to measure the total memory space taken by the array, and then display the results on the screen.*/
    double list_data[6] = {
            1.12345,
            2.12345,
            3.12345,
            4.12345,
            5.12345};
    printf("%d\n", sizeof(list_data));
    printf("%d\n", sizeof(double)*6);
    return 0;
}