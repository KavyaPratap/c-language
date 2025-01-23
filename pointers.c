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
/*
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
*/

/*while declaring function with arguments as pointer of int type
we dec;are as 
void swap(int*,int*); instead of int,int normal
void swap(int *ptr1,int *ptr2){
....
<body of function>
....
}


so by using pointers, i can directly work with memory addresses. Means i can use it anywhere in any function,or in main.

also
*ptr1=72 is equivalent to *(&a)=72....means value at address of a =72.
*/



#include <stdio.h>

int area(int *ptr1, int *ptr2)
 {
    return (*ptr1) * (*ptr2);
}

int main() {
    int a, b, *ptr1, *ptr2,result;
    printf("Enter length and breadth: ");
    scanf("%d%d", &a, &b);
    
    ptr1 = &a;
    ptr2 = &b;
    
    result = area(ptr1, ptr2);

    printf("Area: %d\n", result);

    return 0;
}
