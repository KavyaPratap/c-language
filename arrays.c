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
#include <stdio.h>

int max_runs(int [],int);  //int [] is used for defining array argument type while creating a function
int max_runs(int b[],int n){
    int i,max=b[0];
    for (i=1;i<n;i++){
        if (b[i]>max)
        max=b[i];
    }
    return max;
}

int main(){
    int i,a[11];
    printf("Enter runs scored by batsmen");
    for (i=0;i<=10;i++){
     
        scanf("%d",&a[i]);
    
    }

    for (i=0;i<=10;i++){
     
        printf("Run scored by Player %d is %d \n",i+1,a[i]);
    
    }

    printf("Maximum runs scored are-> %d",i,max_runs(a,11));

return 0;
}
