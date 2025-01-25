#include <stdio.h>
#define MAX 100

int main(){
	int rows,columns,i,j,a[MAX][MAX],c[MAX][MAX];
	printf("enter number of rows and columns\n");
	scanf("%d%d",&rows,&columns);
	printf("Matrix---\n");
	for (i=0;i<rows;i++){
		for (j=0;j<columns;j++){
			scanf("%d",&a[i][j]);
			c[j][i]=a[i][j];
		}
	}
	printf("\nTranspose of matrix---\n");
	for (j=0;j<columns;j++){
		for (i=0;i<rows;i++){
			printf("%d ",c[j][i]);
		}
		printf("\n");
		}	
	}
