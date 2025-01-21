/* //Odd even
#include <stdio.h>
int main()
{   
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    
    if (a%2==0){
        printf("Number %d is even",a);
    }
    else if(a%2==1){
        printf("Number %d is odd",a);
    }
    else{
        printf("Enter valid input");
    }
    return 0;
} */

/*
//Grades
#include <stdio.h>
int main()
{   
    int a;
    printf("enter marks: ");
    scanf("%d",&a);
    
    if (a>=90){
        printf("A grade\n");
    }
    else if(a>=80 && a<=89){
        printf("B grade\n");
    }
    else if (a>=70 && a<=79){
        printf("C grade\n");
    }
    else if(a>=60 && a<=69){
        printf("D grade\n");
    }
    else if(a>=50 && a<=59){
        printf("E grade\n");
    }
    else
    {
        printf("Fail!!");
    }
    return 0;
}*/

/*
//largest among 3 numbers
#include <stdio.h>
int main()
{   
    int a,b,c;
    printf("enter number a b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    
    if (a>b && a>c){
        printf("%d is greater than %d and %d",a,b,c);
    }
    else if(b>a && b>c){
        printf("%d is greater than %d and %d",b,a,c);
    }
    else
    {
        printf("%d is greater than %d and %d",c,a,b);
    }
    return 0;
}
*/

/*
//number is positive negative or zero
#include <stdio.h>
int main()
{   
    int a;
    printf("enter number a : ");
    scanf("%d",&a);
    
    if (a>0){
        printf("%d is positive",a);
    }
    else if(a<0){
        printf("%d is negative",a);
    }
    else
    {
        printf("%d is zero",a);
    }
    return 0;
}
*/



8
