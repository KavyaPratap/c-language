// pointer -- pointer is a variable that can store adresses of other variables or something else.....
//declaration of pointer--- int *a;             
//adding value to pointer--- a=&i;      it stored address of i.
//  * is called ferefrencing operator /or/ value at the address
//where as int a; is a normal variable which is only used to store value, not addresses

//important-----pointer should be declare of same type as of operator.eg-
/*
int i;
int *ptr1;

float a;
float *ptr2;

let 2345 be value address of i=3
importanr--- *(ptr) means *(&i) means value at the address of i , i.e *2345 means value at address 2345 ie 3
so a=*(&i) means a=3
eg program
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=3;
    int *ptr;
    ptr=&i;
    printf("%p\n",ptr);
    printf("%p\n",&i);
    printf("%p\n",*ptr);
    printf("%p\n",i);
    return 0;
}
