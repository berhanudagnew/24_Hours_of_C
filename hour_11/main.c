/*including header files*/
#include <stdio.h>

/*main function*/
int main(){
    /* Obtaininig addres */
    char  c;
    long int   x, *d;
    float y;
    
    printf("c: address=0x%p, content=%c\n", &c, c);
    printf("x: address=0x%p, content=%d\n", &x, x);
    printf("y: address=0x%p, content=%5.2f\n", &y, y);
    c = 'A';
    d = &x;
    x = 7;
    y = 123.45;
    printf("c: address=0x%p, content=%c\n", &c, c);
    printf("x: address=0x%p, content=%d\n", &x, x);
    printf("x: address=0x%p, content=%d\n", &d, d);
    printf("y: address=0x%p, content=%5.2f\n", &y, y);
    printf("address of x is: %p\n", &x);

    /* Declearing Pointer using astrics(*) eg. int *x;  */
    /* Declaring and assigning values to pointers */

    char c2, *ptr_c2;
    int x2, *ptr_x2;
    float y2, *ptr_y2;
    c2 = 'A';
    x2 = 7;
    y2 = 123.45;

    printf("c2: address = %p, content = %c\n", &c2, c2);
    printf("x2: address = %p, content = %d\n", &x2, x2);
    printf("y2: address = %p, content = %5.2f\n", &y2, y2);
    /* Assigning value to a pointer. */
    ptr_c2 = &c2;
    printf("ptr_c2: address = %p content = %p\n", &ptr_c2, ptr_c2);
    printf("*ptr_c2 => %c\n", *ptr_c2);
    ptr_x2 = &x2;
    printf("ptr_x2: address = %p, content = %p\n", &ptr_x2, ptr_x2);
    printf("*ptr_x2 => %d\n", *ptr_x2);
    ptr_y2 = &y2;
    printf("ptr_y2: address = %p, content = %p\n", &ptr_y2, ptr_y2);
    printf("*ptr_y2 => %5.2f\n", *ptr_y2);

    /* Null pointer 
        char *ptr_c;
        int  *ptr_int;

        ptr_c = ptr_int = 0;
    */
    
    /* Updating Variables via Pointers */

    char c3, *ptr_c3;
    c3 = 'A';

    printf("c3: address = %p, content = %c\n", &c3, c3);
    ptr_c3 = &c3;
    printf("ptr_c3: address = %p, content = %p\n", &ptr_c3, ptr_c3);
    printf("*ptr_c3 => %c\n", *ptr_c3);
    *ptr_c3 = 'B';
    printf("c3: address = %p, content = %c\n", &c3, c3);
    ptr_c3 = &c3;
    printf("ptr_c3: address = %p, content = %p\n", &ptr_c3, ptr_c3);
    printf("*ptr_c3 => %c\n", *ptr_c3);

    /* Pointing to the Same Thing */
    /*
    A memory location can be pointed to by more than one pointer. 
    eg. int x;
        int *ptr_1, *ptr_2, *ptr_3;
    */



    return 0;
}