/*including header files*/
#include <stdio.h>

/*main function*/
int main(){
    /* Initializing array. */
    int int_array[10], i, j;

    for(i = 0; i < 10; i++){
        int_array[i] = i + 1;
        printf("int_array[%d] is initialized with %d\n", i, int_array[i]);
    }
    /* Calculating size of array byte */
    int total_byte = sizeof(int) * 10;
    printf("sizeof(int_array) = %d, sizeof(int)*10 = %d\n", sizeof(int_array), total_byte);

    /* Referencing an array with a pointer. */
    int *ptr_array;
    ptr_array = int_array;
    printf("int_array[0] adress: %p \n", &int_array[0]);
    printf("ptr_array adress: %p, content %d \n", ptr_array, *ptr_array);

    /* Array character. */

    char array_ch[7] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
    for (i=0; i<7; i++)
       printf("array_ch[%d] contains: %c\n", i, array_ch[i]);
    printf( "\nPut all elements together(Method II):\n");
    printf( "%s\n", array_ch);
    
    /* Multidimensional Arrays */
    /* Pointing out a two dimantional array 2-D Array */
    int int_2d_array[3][5] = { 1, 2, 3, 4, 5,
                                10, 20, 30, 40, 50,
                                100, 200, 300, 400, 500
                             };
     
    for(i = 0; i<3; i++ ){
        for(j = 0; j<5; j++){
            printf("%d,\t",int_2d_array[i][j]);
        }
        printf("\n");
    }

    return 0;
}