/*
* * * * 
* * * *
* * * * 
* * * *


#include <stdio.h>
void main(){
    int i,j;
    for (i=0;i<4;i++){
        for (j=0;j<3;j++){
            printf("* ");
        }
        printf("\n");
    }
}
*/

/*


*
* *
* * *
* * * *
* * * * *


#include <stdio.h>
int main(){
    int i,j;
    for (i=0;i<5;i++){
        for (j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/

/*
A 
B A
A B A
B A B A
A B A B A


#include <stdio.h>
int main(){
    int i,j;
    for (i=0;i<5;i++){
        for (j=0;j<=i;j++){
            if ((i+j)%2==0){
                printf("A ");
            }
            else{
                printf("B ");
            }
        }
        printf("\n");
    }
    return 0;
}

*/
/*
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5


#include <stdio.h>
int main(){
    int i,j;
    for (i=1;i<6;i++){
        for (j=1;j<=i;j++){
        printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

#include <stdio.h>
int main(){
    int i,j;
    for (i=1;i<=5;i++){
        for (j=1;j<=(5*2)-1;j++){
            if(j>=5-(i-1) && (j<=5+(i-1))){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
/*
        5
      4 5 6       
    3 4 5 6 7     
  2 3 4 5 6 7 8   
1 2 3 4 5 6 7 8 9 
#include <stdio.h>
int main(){
    int i,j,rows;
    printf("enter number of rows: ");
    scanf("%d",&rows);

    for (i=1;i<=5;i++){
        for (j=1;j<=(rows*2)-1;j++){
            if(j>=rows-(i-1) && (j<=rows+(i-1))){
                printf("%d ",i);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
