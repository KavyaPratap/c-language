/*
an array is a cp;;ection of elements of similar data types stored at contiguous memory locations.
an array of characters is also called string.
1.NEED---to store different data in 1 array. eg instead of uding 11 variables for runs scored by batsmen of a cricket team.

array is same as python's list but unlike python we cannot store different data types in an arrya. All data stored in an array must be of same datatype.

* to access 6 th element of array we write--->  a[5]

* a[i]-------here i is subscript and a is subscripted value.

* how compiler access the element---- base address + (index of element to find) x (size of datatype)

eg----base address of array is 1000 and is of int type so size of data type 4
so to access 4th element compiler finds by using formula--- 1000 + (4)*4


syntax of declaring array--
type_of_elements name[size];  //here size means number of elements.

eg--
int a[10];

how to store elements of a static array----
where n is number of elements of array
for (i=0;i<=n;i++){
    scanf("%d",&a[i]);
}

*/
/*
//program to find total runs of team and average run made by players in cricket.
#include <stdio.h>

int average(int [],int);  //int [] is used for defining array argument type while creating a function
int average(int b[],int n){
    int i,sum=0;
    float avg;
    for (i=0;i<n;i++){
        sum=sum+b[i];
    }

    avg= (float)sum/(float)n;
    printf("total runs=> %d\naverage runs scored by a batsman=>%f",sum,avg);
}

int main(){
    int i,x,a[11];
    printf("Enter runs scored by batsmen\n");
    for (i=0;i<=10;i++){

        scanf("%d",&a[i]);
    }
    average(a,11);
return 0;
}
*/
/*
//linear search
#include <stdio.h>
#define MAX 100

int linear_search(int [], int, int);
int linear_search(int b[],int key,int n){
    int i;
    for(i=0;i<=n;i++){
        if (b[i]==key){
            printf("%d",i);
        }
    }
    return -1;
}

int main(){
    int a[MAX],n,i,key,x;
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter elements of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter value to be searched: \n");
    scanf("%d",&key);
    linear_search(a,key,n);

}
*/
/*
#include <stdio.h>
#define MAX 100
int rev(int [],int);
int rev(int b[],int n){

    int rem,rev,count=0;
    int i,c[n];
    for(i=0;i<=n;i++){
            rem=n%10;
            rev=rev*10+rem;
            c[i]=rev;
            n=n/10;
    }
    return c;
}
int main(){
    int a,a[MAX],n,x,i;
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter elements of array\n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    x=rev(a,n);
    printf(x);
}
/*
individual element of array are reversed

#include <stdio.h>
#define MAX 100

int rev(int b[], int n) {
    int rem, reversed, i;
    int c[MAX];  
    
    for(i = 0; i < n; i++) {
        reversed = 0;
        int num = b[i];  
        
        while (num > 0) {
            rem = num % 10;
            reversed = reversed * 10 + rem;
            num = num / 10;
        }
        
        c[i] = reversed;
    }
    
    printf("Reversed numbers: ");
    for(i = 0; i < n; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
    
    return 0;  
}

int main() {
    int a[MAX], n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter elements of array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    rev(a, n);
    
    return 0;
}
*/
// revesing of an array
#include <stdio.h>

#define MAX 100

int main(){
	int a[MAX],n,i;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter elemets of array\n");
	
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}	
	
	array_rev(a,n);
}

int array_rev(int [],int);
int array_rev(int b[], int size){
	int a[MAX],i=0,j;
	for (i=0;i<size;i++){
		a[i]=b[size-1-i];
	}
	for (j=0;j<size;j++){
		printf("%d ",a[j]);
	}
	
}
