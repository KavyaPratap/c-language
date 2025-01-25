//array name indicates first element of array ie a[0]
/*

eg- int *ptr;
ptr=a; //a is an array
so this will be same as ptr=&a[0];

and if we do this

int *ptr,a;
ptr=a;	//element at 0th index
ptr++	//by this increment we print the element at 1st index
printf("%d",*ptr);		//prints value of second element.
printf("%d",*(ptr+1));  //this prints value ( 1 ) next to index value of ptr
eg if a=[2,3,4,5] and ptr=a =>  ptr=2, ptr++ = 3 and *(ptr+1)=3 and *(ptr+3)=5.
and if we *(ptr+5) which is not possible, so there will be undefined behaviour of program and program crashes.

*/


/*
		2-D ARRAY
collection of 1-dimensional array.It is used for matrix multiplication. 

		*/
/*		
#include <stdio.h>
#define MAX 100

int main(){
	int row,col,i,j,a[MAX][MAX],b[MAX][MAX];
	printf("Enter number of rows and columns: ");
	scanf("%d%d",&row,&col);
//row major order
	for (i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
//column major order-----wrong!
	
	for(j=0;j<row;j++){
		for(i=0;i<col;i++){
			scanf("%d",&a[j][i]);
		}
	}
	for(j=0;j<row;j++){
		for(i=0;i<col;i++){
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}	

*/
/*
sum of diagonal elements
#include <stdio.h>
#define MAX 100

int main(){
	int rows,columns,i,j,a[MAX][MAX],sum=0;
	printf("enter number of rows and columns\n");
	scanf("%d%d",&rows,&columns);
	for (i=0;i<rows;i++){
		for (j=0;j<columns;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for (i=0;i<rows;i++){
		for (j=0;j<columns;j++){
			if (i==j){
				sum=sum+a[i][j];
			}
		}
	}
	printf("sum = %d\n",sum);

}
*/
#include <stdio.h>
#define MAX 100

int main(){
	int rows,columns,i,j,a[MAX][MAX],b[MAX][MAX],sum=0,temp;
	printf("enter number of rows and columns\n");
	scanf("%d%d",&rows,&columns);
	for (i=0;i<rows;i++){
		for (j=0;j<columns;j++){
			scanf("%d",&a[i][j]);
			b[j][i]=a[i][j];
		}
	}


	printf("\nTranspose\n");
	for (j=0;j<columns;j++){
		for (i=0;i<rows;i++){
			printf("%d ",b[j][i]);
		}
		printf("\n");
	}

}
