//revising loops

/*
#include <stdio.h>
int main(){
    int num,rem,a,sum=0;
    printf("Enter number: ");
    scanf("%d",&a);
    num=a;
    while(num!=0){
        rem = num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("Sum of digits of %d is: %d",a,sum);
    return 0;
}
*/

/*
//to count numbr of digits

#include <stdio.h>
#include <math.h>
int main(){
    int b,i=1,count=0;
    long int num;

    printf("Enter number:\n");
    scanf("%ld",&num);
    b=num;
    while (num>0){
        
        count++;
        num=num/10;
    printf("Iteration number: %d num= %ld, Count= %d\n",i,num,count);
    i++;
}
return 0;
}*/


//reverse number

#include <stdio.h>
#include <math.h>
int main(){
    int num,a,rem,rev;
    printf("Enter number: ");
    scanf("%d",&num);
    a=num;
    while (num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("reverse of %d is %d",a,rev);
return 0;
}

