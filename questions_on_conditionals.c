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
/*
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

*/

/*
//palindrome

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
    printf("reversed: %d\n",rev);
    if (rev==a){
        printf("%d is a palindrome",rev);
    }
    else{
        printf("%d is not palindrome",a);
    }
return 0;
}
*/

//for loop
/*
#include <stdio.h>
int main(){
    int i=0,a=10;

    for (i;i<11;i++)
    {
        printf("%d\n",i);

    }
    printf("for reverse: \n");
        for (a;a>=0;a--)
    {
        printf("%d\n",a);

    }
    return 0;
}

//print even numbers
#include <stdio.h>
int main(){
    int i=2,n;
    printf("enter range: ");
    scanf("%d",&n);
    for (i;i<=n;i=i+2)
    {
        printf("%d\t",i);
    }
    return 0;
}
*/

//for prime numbers

/*
//for finding sum of 1^1+2^2+3^3+......n^n
#include <stdio.h>
#include <math.h>

int main(){
    int n,i,sum=0;
    printf("enter number: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        sum=sum+pow(i,i);
    }
    printf("sum: %d",sum);
}
*/
/*
//for finding 1+2-3+4-5+6-7+................+n

#include <stdio.h>
#include <math.h>

int main(){
    int n,i,sum=1;
    printf("enter n: ");
    scanf("%d",&n);

    for (i=2;i<=n;i++){
        if (i%2!=0){
            sum=sum-i;
        }
        else{
            sum=sum+i;
        }
    }
    printf("sum: %d",sum);
    return 0;
}
*/

//for finding x^1+x^2-x^3+x^4-x^5+................+x^n

#include <stdio.h>
#include <math.h>

int main(){
    int x,n,i,sum;
    printf("enter x: ");
    scanf("%d",&x);

    printf("enter n: ");
    scanf("%d",&n);
    sum=pow(x,1);
    for (i=x;i<=n;i++){
        if (i%2!=0){
            sum=sum-pow(i,n);
        }
        else{
            sum=sum+pow(i,n);
        }
    }
    printf("sum: %d",sum);
    return 0;
}
