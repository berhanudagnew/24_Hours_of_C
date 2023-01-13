/*Write a C function that can multiply two integers and return the calculated result.*/
/*include header files*/
#include <stdio.h>
/*multiplication function*/

int multiply(int a, int b){
   int product = a * b;
   return product;
}

/*main function*/
int main(){
    printf("Multiplcation of 3 by 5 is %d.",multiply(3,5));

}
