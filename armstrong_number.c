/*
//generalized armstrong number
#include <stdio.h>
#include <math.h>
int main(){
    int num,a,b,rem,rev,sum=0,count=0;
    printf("Enter number: ");
    scanf("%d",&num);
    a=num;
    b=num;

    while (b>0){
        
        count++;
        b=b/10;
    }
    if (count==3)
    {
    while (num>0){
        rem=num%10;
        sum=sum+pow(rem,3);
        num=num/10;
    }
    printf("%d\n",sum);
    if(a==sum)
    {
        printf("%d is an armstrong number",a);
    }
    else
    {
        printf("%d is not an armstrong number",a);
    }
    }
    else if (count==4)
    {
    while (num>0){
        rem=num%10;
        sum=sum+pow(rem,4);
        num=num/10;
    }
    printf("%d\n",sum);
    if(a==sum)
    {
        printf("%d is an armstrong number",a);
    }
    else
    {
        printf("%d is not an armstrong number",a);
    }
    }
    else{
        while (num>0){
        rem=num%10;
        sum=sum+pow(rem,3);
        num=num/10;
    }
    printf("%d\n",sum);
    if(a==sum)
    {
        printf("%d is an armstrong number",a);
    }
    else
    {
        printf("%d is not an armstrong number",a);
    }
    }
return 0;
}
*/
/*
//generalized armstrong number //using pow function
#include <stdio.h>
#include <math.h>
int main(){
    int num,a,b,rem,rev,sum=0,count=0;
    printf("Enter number: ");
    scanf("%d",&num);
    a=num;
    b=num;

    while (b>0){
        
        count++;
        b=b/10;
    }
    while (num>0){
        rem=num%10;
        sum=sum+pow(rem,count);
        num=num/10;
    }
    if(a==sum)
    {
        printf("%d is an armstrong number",a);
    }
    else
    {
        printf("%d is not an armstrong number",a);
    }
return 0;
}
*/

//generalized armstrong number //using user defined function
#include <stdio.h>
#include <math.h>

int armstrong(int);
int armstrong(int num){
	int a,i,rem,count,sum;
	count=0;
	a=num;
	
	while (a!=0){
		a=a/10;
		count++;
	}
	a=num;
	while(a!=0){
		rem=a%10;
		sum=sum+pow(rem,count);
		a=a/10;
	}
	
	if (sum==num){
		return 1;
	}
	
	else{
		return -1;
	}
}
int main(){
	int a,d;
	printf("Enter number: ");
	scanf("%d",&a);
	d=armstrong(a);
	if (d==1){
		printf("Armstrong number");
	}
	else{
		printf("Not a armstrong number");
	}
}
