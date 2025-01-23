/*
//generalized tower of hanoi problem
#include <stdio.h>
void toh(int,char,char,char);
void toh(int n,char source,char destination,char auxiliary){
	if (n==1){
		printf("Move disk from %c to %c\n",source,destination);
	}
	else{
		
		toh(n-1,source,auxiliary,destination);
		toh(1,source,destination,auxiliary);
		toh(n-1,auxiliary,destination,source);
	}
}
int main(){
	int n;
	printf("Enter number of disks\n: ");
	scanf("%d",&n);
	toh(n,'A','C','B');
}
*/

//fibonacci series
#include <stdio.h>
int fibbonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}

int main() {
   int n = 5;
   int i;
	
   printf("Fibbonacci of %d: " , n);
	
   for(i = 0;i<n;i++) {
      printf("%d ",fibbonacci(i));            
   }
}
