//a function is a self contained block of statements to program a specific task.
/*
advantage---
1.write once and use any number time you want.
2.helps in breaking of a very big problem into small problems [modules] and then solve them.

we need to declare prototype of a function before its used

syntax of writing user defined function 

return_type function_name(<argument type>);
eg--
//prototype
void swap(int,int);
//function defination
void swap(int x,int y)         //void means it returns nothing
    {
    <content of function>//ie function block
    }

int main(){
int a,b

...

swap(a,b);        //function call
return 0;
}


example given below:----

*/


#include <stdio.h>
    void swap(int,int);
    void swap(int x, int y)
        {
            int t;
            t=x;
            x=y;
            y=t;
            printf("swapped values\n %d,%d",x,y);
        }
    int main(){
        int a,b;
        printf("Enter two numbers: ");
        scanf("%d,%d",&a,&b);
        printf("original value a= %d, b= %d",a,b);
        swap(a,b);
        return 0;
    }

